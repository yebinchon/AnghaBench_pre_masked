
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int* transition_source_active; int transitioning_video; int transitioning_audio; } ;
typedef TYPE_1__ obs_source_t ;


 int FUNC_0 (TYPE_1__*,TYPE_1__*) ;

__attribute__((used)) static bool FUNC_1(obs_source_t *VAR_0, size_t VAR_1,
    obs_source_t *VAR_2)
{
 if (!VAR_0->transition_source_active[VAR_1]) {
  if (!FUNC_0(VAR_0, VAR_2))
   return 0;

  VAR_0->transition_source_active[VAR_1] = 1;
 }

 VAR_0->transitioning_video = 1;
 VAR_0->transitioning_audio = 1;
 return 1;
}
