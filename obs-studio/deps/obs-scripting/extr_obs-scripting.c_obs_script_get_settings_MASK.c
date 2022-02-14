
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int * settings; } ;
typedef TYPE_1__ obs_script_t ;
typedef int obs_data_t ;


 int FUNC_0 (int *) ;
 int FUNC_1 (TYPE_1__*) ;

obs_data_t *FUNC_2(obs_script_t *VAR_0)
{
 obs_data_t *VAR_1;

 if (!FUNC_1(VAR_0))
  return ((void*)0);

 VAR_1 = VAR_0->settings;
 FUNC_0(VAR_1);
 return VAR_1;
}
