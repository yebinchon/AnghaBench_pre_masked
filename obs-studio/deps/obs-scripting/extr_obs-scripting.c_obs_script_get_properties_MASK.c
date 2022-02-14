
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {scalar_t__ type; } ;
typedef TYPE_1__ obs_script_t ;
typedef int obs_properties_t ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int * FUNC_0 (TYPE_1__*) ;
 int * FUNC_1 () ;
 int * FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (TYPE_1__*) ;

obs_properties_t *FUNC_4(obs_script_t *VAR_2)
{
 obs_properties_t *VAR_3 = ((void*)0);

 if (!FUNC_3(VAR_2))
  return ((void*)0);
out:
 if (!VAR_3)
  VAR_3 = FUNC_1();
 return VAR_3;
}
