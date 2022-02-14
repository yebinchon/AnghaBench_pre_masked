
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int uint8_t ;
struct calldata {int dummy; } ;
struct audio_action {int set; int type; int timestamp; } ;
typedef int stack ;
struct TYPE_6__ {int signals; } ;
struct TYPE_7__ {int user_muted; int audio_actions_mutex; int audio_actions; TYPE_1__ context; } ;
typedef TYPE_2__ obs_source_t ;


 int VAR_0 ;
 int FUNC_0 (struct calldata*,int *,int) ;
 int FUNC_1 (struct calldata*,char*,int) ;
 int FUNC_2 (struct calldata*,char*,TYPE_2__*) ;
 int FUNC_3 (int ,struct audio_action*) ;
 int FUNC_4 (TYPE_2__*,char*) ;
 int FUNC_5 () ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int ,char*,struct calldata*) ;

void FUNC_9(obs_source_t *VAR_1, bool VAR_2)
{
 struct calldata VAR_3;
 uint8_t VAR_4[128];
 struct audio_action VAR_5 = {.timestamp = FUNC_5(),
          .type = VAR_0,
          .set = VAR_2};

 if (!FUNC_4(VAR_1, "obs_source_set_muted"))
  return;

 VAR_1->user_muted = VAR_2;

 FUNC_0(&VAR_3, VAR_4, sizeof(VAR_4));
 FUNC_2(&VAR_3, "source", VAR_1);
 FUNC_1(&VAR_3, "muted", VAR_2);

 FUNC_8(VAR_1->context.signals, "mute", &VAR_3);

 FUNC_6(&VAR_1->audio_actions_mutex);
 FUNC_3(VAR_1->audio_actions, &VAR_5);
 FUNC_7(&VAR_1->audio_actions_mutex);
}
