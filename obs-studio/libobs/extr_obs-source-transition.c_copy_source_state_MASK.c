
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_1__ ;


struct TYPE_10__ {int* transition_source_active; struct TYPE_10__** transition_sources; } ;
typedef TYPE_1__ obs_source_t ;


 int FUNC_0 (TYPE_1__*,TYPE_1__*) ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (TYPE_1__*,TYPE_1__*) ;

__attribute__((used)) static inline obs_source_t *
FUNC_3(obs_source_t *VAR_0, obs_source_t *VAR_1, size_t VAR_2)
{
 obs_source_t *VAR_3 = VAR_0->transition_sources[VAR_2];
 obs_source_t *VAR_4 = VAR_1->transition_sources[VAR_2];
 bool VAR_5 = VAR_1->transition_source_active[VAR_2];

 if (VAR_3 && VAR_0->transition_source_active[VAR_2])
  FUNC_2(VAR_0, VAR_3);

 VAR_0->transition_sources[VAR_2] = VAR_4;
 VAR_0->transition_source_active[VAR_2] = VAR_5;

 if (VAR_5 && VAR_4)
  FUNC_0(VAR_0, VAR_4);
 FUNC_1(VAR_4);

 return VAR_3;
}
