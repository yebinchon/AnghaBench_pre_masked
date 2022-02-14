
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int * transition_texrender; } ;
typedef TYPE_1__ obs_source_t ;
typedef int gs_texture_t ;
typedef enum obs_transition_target { ____Placeholder_obs_transition_target } obs_transition_target ;


 int * FUNC_0 (int ) ;

__attribute__((used)) static inline gs_texture_t *FUNC_1(obs_source_t *VAR_0,
     enum obs_transition_target VAR_1)
{
 size_t VAR_2 = (size_t)VAR_1;
 return FUNC_0(VAR_0->transition_texrender[VAR_2]);
}
