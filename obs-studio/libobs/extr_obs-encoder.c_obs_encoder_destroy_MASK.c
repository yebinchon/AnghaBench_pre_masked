
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {scalar_t__ num; } ;
struct TYPE_6__ {int destroy_on_stop; int init_mutex; int callbacks_mutex; TYPE_1__ callbacks; int context; } ;
typedef TYPE_2__ obs_encoder_t ;


 int FUNC_0 (int *) ;
 int FUNC_1 (TYPE_2__*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;

void FUNC_4(obs_encoder_t *VAR_0)
{
 if (VAR_0) {
  bool VAR_1;

  FUNC_0(&VAR_0->context);

  FUNC_2(&VAR_0->init_mutex);
  FUNC_2(&VAR_0->callbacks_mutex);
  VAR_1 = VAR_0->callbacks.num == 0;
  if (!VAR_1)
   VAR_0->destroy_on_stop = 1;
  FUNC_3(&VAR_0->callbacks_mutex);
  FUNC_3(&VAR_0->init_mutex);

  if (VAR_1)
   FUNC_1(VAR_0);
 }
}
