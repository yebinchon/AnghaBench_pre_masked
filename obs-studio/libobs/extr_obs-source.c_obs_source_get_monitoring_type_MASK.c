
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int monitoring_type; } ;
typedef TYPE_1__ obs_source_t ;
typedef enum obs_monitoring_type { ____Placeholder_obs_monitoring_type } obs_monitoring_type ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (TYPE_1__ const*,char*) ;

enum obs_monitoring_type
FUNC_1(const obs_source_t *VAR_1)
{
 return FUNC_0(VAR_1, "obs_source_get_monitoring_type")
         ? VAR_1->monitoring_type
         : VAR_0;
}
