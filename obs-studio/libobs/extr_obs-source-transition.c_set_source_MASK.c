
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_18__ TYPE_1__ ;


struct TYPE_18__ {int* transition_source_active; scalar_t__ transition_cx; scalar_t__ transition_cy; struct TYPE_18__** transition_sources; } ;
typedef TYPE_1__ obs_source_t ;
typedef enum obs_transition_target { ____Placeholder_obs_transition_target } obs_transition_target ;


 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (TYPE_1__*,TYPE_1__*) ;
 int FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (TYPE_1__*) ;
 int FUNC_4 (TYPE_1__*,TYPE_1__*) ;
 int FUNC_5 (TYPE_1__*) ;
 int FUNC_6 (TYPE_1__*) ;
 int FUNC_7 (TYPE_1__*) ;

__attribute__((used)) static void
FUNC_8(obs_source_t *VAR_0, enum obs_transition_target VAR_1,
    obs_source_t *VAR_2,
    bool (*VAR_3)(obs_source_t *VAR_4, size_t VAR_5, obs_source_t *VAR_6))
{
 size_t VAR_7 = (size_t)VAR_1;
 obs_source_t *VAR_8;
 bool VAR_9 = 1;
 bool VAR_10;

 if (VAR_2)
  FUNC_2(VAR_2);

 FUNC_0(VAR_0);

 VAR_8 = VAR_0->transition_sources[VAR_7];

 if (VAR_2 == VAR_8) {
  FUNC_7(VAR_0);
  FUNC_3(VAR_2);
  return;
 }

 VAR_10 = VAR_0->transition_source_active[VAR_7];

 if (VAR_10) {
  if (VAR_2)
   VAR_9 = FUNC_1(VAR_0,
          VAR_2);
  if (VAR_8 && VAR_9)
   FUNC_4(VAR_0, VAR_8);
 }

 if (VAR_3 && VAR_9)
  VAR_9 = VAR_3(VAR_0, VAR_7, VAR_2);

 VAR_0->transition_sources[VAR_7] = VAR_9 ? VAR_2 : ((void*)0);

 FUNC_7(VAR_0);

 if (VAR_9) {
  if (VAR_0->transition_cx == 0 ||
      VAR_0->transition_cy == 0) {
   FUNC_6(VAR_0);
   FUNC_5(VAR_0);
  }
 } else {
  FUNC_3(VAR_2);
 }

 FUNC_3(VAR_8);
}
