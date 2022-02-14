
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct obs_source {int user_push_to_talk_pressed; int audio_actions_mutex; int audio_actions; } ;
struct audio_action {int set; int type; int timestamp; } ;
typedef int obs_hotkey_t ;
typedef int * obs_hotkey_id ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int ,struct audio_action*) ;
 int FUNC_2 () ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;

__attribute__((used)) static void FUNC_5(void *VAR_1, obs_hotkey_id VAR_2,
        obs_hotkey_t *VAR_3, bool VAR_4)
{
 struct audio_action VAR_5 = {.timestamp = FUNC_2(),
          .type = VAR_0,
          .set = VAR_4};

 FUNC_0(VAR_2);
 FUNC_0(VAR_3);

 struct obs_source *VAR_6 = VAR_1;

 FUNC_3(&VAR_6->audio_actions_mutex);
 FUNC_1(VAR_6->audio_actions, &VAR_5);
 FUNC_4(&VAR_6->audio_actions_mutex);

 VAR_6->user_push_to_talk_pressed = VAR_4;
}
