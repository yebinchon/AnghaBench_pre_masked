
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int* transition_source_active; struct TYPE_6__** transition_sources; } ;
typedef TYPE_1__ obs_source_t ;


 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (TYPE_1__*,TYPE_1__*) ;

__attribute__((used)) static void FUNC_2(obs_source_t *VAR_0)
{
 obs_source_t *VAR_1 = VAR_0->transition_sources[0];

 if (VAR_1 && VAR_0->transition_source_active[0])
  FUNC_1(VAR_0, VAR_1);
 FUNC_0(VAR_1);

 VAR_0->transition_source_active[0] = 1;
 VAR_0->transition_source_active[1] = 0;
 VAR_0->transition_sources[0] = VAR_0->transition_sources[1];
 VAR_0->transition_sources[1] = ((void*)0);
}
