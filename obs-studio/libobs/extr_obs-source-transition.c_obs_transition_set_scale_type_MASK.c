
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int transition_scale_type; } ;
typedef TYPE_1__ obs_source_t ;
typedef enum obs_transition_scale_type { ____Placeholder_obs_transition_scale_type } obs_transition_scale_type ;


 int FUNC_0 (TYPE_1__*,char*) ;

void FUNC_1(obs_source_t *VAR_0,
       enum obs_transition_scale_type VAR_1)
{
 if (!FUNC_0(VAR_0, "obs_transition_set_scale_type"))
  return;

 VAR_0->transition_scale_type = VAR_1;
}
