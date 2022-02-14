
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {int push_to_talk_enabled; int audio_mutex; } ;
typedef TYPE_1__ obs_source_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,char*,int ,char*) ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (TYPE_1__*,char*) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (TYPE_1__*,char*,int) ;

void FUNC_7(obs_source_t *VAR_2, bool VAR_3)
{
 if (!FUNC_3(VAR_2, "obs_source_enable_push_to_talk"))
  return;

 FUNC_4(&VAR_2->audio_mutex);
 bool VAR_4 = VAR_2->push_to_talk_enabled != VAR_3;
 if (FUNC_2(VAR_2) & VAR_1 && VAR_4)
  FUNC_0(VAR_0, "source '%s' %s push-to-talk",
       FUNC_1(VAR_2),
       VAR_3 ? "enabled" : "disabled");

 VAR_2->push_to_talk_enabled = VAR_3;

 if (VAR_4)
  FUNC_6(VAR_2, "push_to_talk_changed",
           VAR_3);
 FUNC_5(&VAR_2->audio_mutex);
}
