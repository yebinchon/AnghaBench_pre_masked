
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_8__ {struct TYPE_8__** transition_sources; scalar_t__ transitioning_video; scalar_t__ transitioning_audio; } ;
typedef TYPE_1__ obs_source_t ;


 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (TYPE_1__*,char*) ;
 int FUNC_3 (TYPE_1__*) ;

obs_source_t *FUNC_4(obs_source_t *VAR_0)
{
 obs_source_t *VAR_1;

 if (!FUNC_2(VAR_0, "obs_transition_get_source"))
  return ((void*)0);

 FUNC_0(VAR_0);
 if (VAR_0->transitioning_audio || VAR_0->transitioning_video)
  VAR_1 = VAR_0->transition_sources[1];
 else
  VAR_1 = VAR_0->transition_sources[0];
 FUNC_1(VAR_1);
 FUNC_3(VAR_0);

 return VAR_1;
}
