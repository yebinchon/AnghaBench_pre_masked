
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct fader_cb {void* member_1; int member_0; } ;
struct TYPE_4__ {int callback_mutex; int callbacks; } ;
typedef TYPE_1__ obs_fader_t ;
typedef int obs_fader_changed_t ;


 int FUNC_0 (int ,struct fader_cb*) ;
 int FUNC_1 (TYPE_1__*,char*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;

void FUNC_4(obs_fader_t *VAR_0, obs_fader_changed_t VAR_1,
       void *VAR_2)
{
 struct fader_cb VAR_3 = {VAR_1, VAR_2};

 if (!FUNC_1(VAR_0, "obs_fader_add_callback"))
  return;

 FUNC_2(&VAR_0->callback_mutex);
 FUNC_0(VAR_0->callbacks, &VAR_3);
 FUNC_3(&VAR_0->callback_mutex);
}
