
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int monitoring_type; int * monitor; } ;
typedef TYPE_1__ obs_source_t ;
typedef enum obs_monitoring_type { ____Placeholder_obs_monitoring_type } obs_monitoring_type ;


 scalar_t__ VAR_0 ;
 int * FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (TYPE_1__*,char*) ;

void FUNC_3(obs_source_t *VAR_1,
        enum obs_monitoring_type VAR_2)
{
 bool VAR_3;
 bool VAR_4;

 if (!FUNC_2(VAR_1, "obs_source_set_monitoring_type"))
  return;
 if (VAR_1->monitoring_type == VAR_2)
  return;

 VAR_3 = VAR_1->monitoring_type != VAR_0;
 VAR_4 = VAR_2 != VAR_0;

 if (VAR_3 != VAR_4) {
  if (!VAR_3) {
   VAR_1->monitor = FUNC_0(VAR_1);
  } else {
   FUNC_1(VAR_1->monitor);
   VAR_1->monitor = ((void*)0);
  }
 }

 VAR_1->monitoring_type = VAR_2;
}
