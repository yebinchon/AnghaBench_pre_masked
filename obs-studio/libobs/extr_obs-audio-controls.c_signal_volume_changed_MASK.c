
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {size_t num; struct fader_cb* array; } ;
struct obs_fader {int callback_mutex; TYPE_1__ callbacks; } ;
struct fader_cb {int param; int (* callback ) (int ,float const) ;} ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int ,float const) ;

__attribute__((used)) static void FUNC_3(struct obs_fader *VAR_0, const float VAR_1)
{
 FUNC_0(&VAR_0->callback_mutex);
 for (size_t VAR_2 = VAR_0->callbacks.num; VAR_2 > 0; VAR_2--) {
  struct fader_cb VAR_3 = VAR_0->callbacks.array[VAR_2 - 1];
  VAR_3.callback(VAR_3.param, VAR_1);
 }
 FUNC_1(&VAR_0->callback_mutex);
}
