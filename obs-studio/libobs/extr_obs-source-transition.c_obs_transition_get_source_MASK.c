
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_8__ {struct TYPE_8__** transition_sources; } ;
typedef TYPE_1__ obs_source_t ;
typedef enum obs_transition_target { ____Placeholder_obs_transition_target } obs_transition_target ;


 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (TYPE_1__*,char*) ;
 int FUNC_3 (TYPE_1__*) ;

obs_source_t *FUNC_4(obs_source_t *VAR_0,
     enum obs_transition_target VAR_1)
{
 size_t VAR_2 = (size_t)VAR_1;
 obs_source_t *VAR_3;

 if (!FUNC_2(VAR_0, "obs_transition_get_source"))
  return ((void*)0);

 FUNC_0(VAR_0);
 VAR_3 = VAR_0->transition_sources[VAR_2];
 FUNC_1(VAR_3);
 FUNC_3(VAR_0);

 return VAR_3;
}
