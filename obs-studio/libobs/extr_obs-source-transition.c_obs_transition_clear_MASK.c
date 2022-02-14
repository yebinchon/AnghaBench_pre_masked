
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_9__ {int* transition_source_active; int transitioning_video; int transitioning_audio; struct TYPE_9__** transition_sources; } ;
typedef TYPE_1__ obs_source_t ;


 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (TYPE_1__*,TYPE_1__*) ;
 int FUNC_3 (TYPE_1__*,char*) ;
 int FUNC_4 (TYPE_1__*) ;

void FUNC_5(obs_source_t *VAR_0)
{
 obs_source_t *VAR_1[2];
 bool VAR_2[2];

 if (!FUNC_3(VAR_0, "obs_transition_clear"))
  return;

 FUNC_0(VAR_0);
 for (size_t VAR_3 = 0; VAR_3 < 2; VAR_3++) {
  VAR_1[VAR_3] = VAR_0->transition_sources[VAR_3];
  VAR_2[VAR_3] = VAR_0->transition_source_active[VAR_3];
  VAR_0->transition_sources[VAR_3] = ((void*)0);
  VAR_0->transition_source_active[VAR_3] = 0;
 }
 VAR_0->transitioning_video = 0;
 VAR_0->transitioning_audio = 0;
 FUNC_4(VAR_0);

 for (size_t VAR_4 = 0; VAR_4 < 2; VAR_4++) {
  if (VAR_1[VAR_4] && VAR_2[VAR_4])
   FUNC_2(VAR_0, VAR_1[VAR_4]);
  FUNC_1(VAR_1[VAR_4]);
 }
}
