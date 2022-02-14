
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {unsigned int update_ms; int mutex; } ;
typedef TYPE_1__ obs_volmeter_t ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;

void FUNC_2(obs_volmeter_t *VAR_0,
          const unsigned int VAR_1)
{
 if (!VAR_0 || !VAR_1)
  return;

 FUNC_0(&VAR_0->mutex);
 VAR_0->update_ms = VAR_1;
 FUNC_1(&VAR_0->mutex);
}
