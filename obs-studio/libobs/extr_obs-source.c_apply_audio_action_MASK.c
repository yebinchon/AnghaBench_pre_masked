
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct audio_action {int type; int set; int vol; } ;
struct TYPE_3__ {int push_to_mute_pressed; int push_to_talk_pressed; int muted; int volume; } ;
typedef TYPE_1__ obs_source_t ;







__attribute__((used)) static inline void FUNC_0(obs_source_t *VAR_0,
          const struct audio_action *VAR_1)
{
 switch (VAR_1->type) {
 case 128:
  VAR_0->volume = VAR_1->vol;
  break;
 case 131:
  VAR_0->muted = VAR_1->set;
  break;
 case 129:
  VAR_0->push_to_talk_pressed = VAR_1->set;
  break;
 case 130:
  VAR_0->push_to_mute_pressed = VAR_1->set;
  break;
 }
}
