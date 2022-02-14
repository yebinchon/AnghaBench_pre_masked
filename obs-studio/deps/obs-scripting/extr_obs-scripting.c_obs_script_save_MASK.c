
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {scalar_t__ type; int * settings; } ;
typedef TYPE_1__ obs_script_t ;
typedef int obs_data_t ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (TYPE_1__*) ;

obs_data_t *FUNC_4(obs_script_t *VAR_2)
{
 obs_data_t *VAR_3;

 if (!FUNC_3(VAR_2))
  return ((void*)0);
out:
 VAR_3 = VAR_2->settings;
 FUNC_0(VAR_3);
 return VAR_3;
}
