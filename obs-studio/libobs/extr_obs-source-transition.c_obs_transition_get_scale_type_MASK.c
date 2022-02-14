
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int transition_scale_type; } ;
typedef TYPE_1__ obs_source_t ;
typedef enum obs_transition_scale_type { ____Placeholder_obs_transition_scale_type } obs_transition_scale_type ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (TYPE_1__ const*,char*) ;

enum obs_transition_scale_type
FUNC_1(const obs_source_t *VAR_1)
{
 return FUNC_0(VAR_1, "obs_transition_get_scale_type")
         ? VAR_1->transition_scale_type
         : VAR_0;
}
