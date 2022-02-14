
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int context; } ;
typedef TYPE_1__ obs_service_t ;
typedef int obs_data_t ;


 int FUNC_0 () ;
 int * FUNC_1 (int *) ;
 int FUNC_2 () ;

obs_data_t *FUNC_3(obs_service_t *VAR_0)
{
 obs_data_t *VAR_1 = ((void*)0);

 if (!FUNC_0())
  return VAR_1;

 VAR_1 = FUNC_1(&VAR_0->context);
 FUNC_2();

 return VAR_1;
}
