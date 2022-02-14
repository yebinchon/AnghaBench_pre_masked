
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int audio_active; } ;
typedef TYPE_1__ obs_source_t ;


 int FUNC_0 (TYPE_1__*,char*,char*) ;
 int FUNC_1 (TYPE_1__*,char*) ;
 int FUNC_2 (int *,int) ;

void FUNC_3(obs_source_t *VAR_0, bool VAR_1)
{
 if (!FUNC_1(VAR_0, "obs_source_set_audio_active"))
  return;

 if (FUNC_2(&VAR_0->audio_active, VAR_1) == VAR_1)
  return;

 if (VAR_1)
  FUNC_0(VAR_0, "source_audio_activate",
        "audio_activate");
 else
  FUNC_0(VAR_0, "source_audio_deactivate",
        "audio_deactivate");
}
