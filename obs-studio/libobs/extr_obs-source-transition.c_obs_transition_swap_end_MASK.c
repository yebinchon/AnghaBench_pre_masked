
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int ** transition_texrender; } ;
typedef TYPE_1__ obs_source_t ;
typedef int gs_texrender_t ;


 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (TYPE_1__*) ;

void FUNC_2(obs_source_t *VAR_0, obs_source_t *VAR_1)
{
 if (VAR_0 == VAR_1)
  return;

 FUNC_0(VAR_1);

 for (size_t VAR_2 = 0; VAR_2 < 2; VAR_2++) {
  gs_texrender_t *VAR_3 = VAR_0->transition_texrender[VAR_2];
  gs_texrender_t *VAR_4 = VAR_1->transition_texrender[VAR_2];

  VAR_0->transition_texrender[VAR_2] = VAR_4;
  VAR_1->transition_texrender[VAR_2] = VAR_3;
 }

 FUNC_1(VAR_0);
 FUNC_1(VAR_1);
}
