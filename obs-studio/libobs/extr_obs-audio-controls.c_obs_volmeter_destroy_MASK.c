
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int mutex; int callback_mutex; int callbacks; } ;
typedef TYPE_1__ obs_volmeter_t ;


 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (int *) ;

void FUNC_4(obs_volmeter_t *VAR_0)
{
 if (!VAR_0)
  return;

 FUNC_2(VAR_0);
 FUNC_1(VAR_0->callbacks);
 FUNC_3(&VAR_0->callback_mutex);
 FUNC_3(&VAR_0->mutex);

 FUNC_0(VAR_0);
}
