
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_5__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int uint8_t ;
struct calldata {int dummy; } ;
struct audio_action {float vol; int type; int timestamp; } ;
typedef int stack ;
struct TYPE_7__ {int private; int signals; } ;
struct TYPE_8__ {float user_volume; int audio_actions_mutex; int audio_actions; TYPE_1__ context; } ;
typedef TYPE_2__ obs_source_t ;
struct TYPE_9__ {int signals; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct calldata*,char*) ;
 int FUNC_1 (struct calldata*,int *,int) ;
 int FUNC_2 (struct calldata*,char*,float) ;
 int FUNC_3 (struct calldata*,char*,TYPE_2__*) ;
 int FUNC_4 (int ,struct audio_action*) ;
 TYPE_5__* VAR_1 ;
 scalar_t__ FUNC_5 (TYPE_2__*,char*) ;
 int FUNC_6 () ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int ,char*,struct calldata*) ;

void FUNC_10(obs_source_t *VAR_2, float VAR_3)
{
 if (FUNC_5(VAR_2, "obs_source_set_volume")) {
  struct audio_action VAR_4 = {.timestamp = FUNC_6(),
           .type = VAR_0,
           .vol = VAR_3};

  struct calldata VAR_5;
  uint8_t VAR_6[128];

  FUNC_1(&VAR_5, VAR_6, sizeof(VAR_6));
  FUNC_3(&VAR_5, "source", VAR_2);
  FUNC_2(&VAR_5, "volume", VAR_3);

  FUNC_9(VAR_2->context.signals, "volume", &VAR_5);
  if (!VAR_2->context.private)
   FUNC_9(VAR_1->signals, "source_volume",
           &VAR_5);

  VAR_3 = (float)FUNC_0(&VAR_5, "volume");

  FUNC_7(&VAR_2->audio_actions_mutex);
  FUNC_4(VAR_2->audio_actions, &VAR_4);
  FUNC_8(&VAR_2->audio_actions_mutex);

  VAR_2->user_volume = VAR_3;
 }
}
