
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_pmac {struct pmac_tumbler* mixer_data; } ;
struct pmac_tumbler {int headphone_irq; int lineout_irq; int line_detect; int hp_detect; int line_mute; int hp_mute; int amp_mute; int audio_reset; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (char*,char*,int *,int) ;
 int FUNC_1 (struct snd_pmac*) ;

__attribute__((used)) static int FUNC_2(struct snd_pmac *VAR_1)
{
 int VAR_2;
 struct pmac_tumbler *VAR_3 = VAR_1->mixer_data;

 if (FUNC_0("audio-hw-reset",
    "platform-do-hw-reset",
    &VAR_3->audio_reset, 0) < 0)
  FUNC_0("hw-reset",
        "platform-do-hw-reset",
        &VAR_3->audio_reset, 1);
 if (FUNC_0("amp-mute",
    "platform-do-amp-mute",
    &VAR_3->amp_mute, 0) < 0)
  FUNC_0("amp-mute",
        "platform-do-amp-mute",
        &VAR_3->amp_mute, 1);
 if (FUNC_0("headphone-mute",
    "platform-do-headphone-mute",
    &VAR_3->hp_mute, 0) < 0)
  FUNC_0("headphone-mute",
        "platform-do-headphone-mute",
        &VAR_3->hp_mute, 1);
 if (FUNC_0("line-output-mute",
    "platform-do-lineout-mute",
    &VAR_3->line_mute, 0) < 0)
  FUNC_0("line-output-mute",
       "platform-do-lineout-mute",
        &VAR_3->line_mute, 1);
 VAR_2 = FUNC_0("headphone-detect",
      ((void*)0), &VAR_3->hp_detect, 0);
 if (VAR_2 <= 0)
  VAR_2 = FUNC_0("headphone-detect",
       ((void*)0), &VAR_3->hp_detect, 1);
 if (VAR_2 <= 0)
  VAR_2 = FUNC_0("keywest-gpio15",
       ((void*)0), &VAR_3->hp_detect, 1);
 VAR_3->headphone_irq = VAR_2;
  VAR_2 = FUNC_0("line-output-detect",
      ((void*)0), &VAR_3->line_detect, 0);
 if (VAR_2 <= 0)
  VAR_2 = FUNC_0("line-output-detect",
       ((void*)0), &VAR_3->line_detect, 1);
 if (VAR_0 && VAR_2 <= 0)
  VAR_2 = FUNC_0("keywest-gpio16",
       ((void*)0), &VAR_3->line_detect, 1);
 VAR_3->lineout_irq = VAR_2;

 FUNC_1(VAR_1);

 return 0;
}
