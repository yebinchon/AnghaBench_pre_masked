
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_pmac {struct pmac_tumbler* mixer_data; } ;
struct pmac_tumbler {scalar_t__ headphone_irq; scalar_t__ lineout_irq; int i2c; int hp_detect; int hp_mute; int amp_mute; int audio_reset; } ;


 int FUNC_0 (scalar_t__,struct snd_pmac*) ;
 int FUNC_1 (struct pmac_tumbler*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static void FUNC_4(struct snd_pmac *VAR_0)
{
 struct pmac_tumbler *VAR_1 = VAR_0->mixer_data;
 if (! VAR_1)
  return;

 if (VAR_1->headphone_irq >= 0)
  FUNC_0(VAR_1->headphone_irq, VAR_0);
 if (VAR_1->lineout_irq >= 0)
  FUNC_0(VAR_1->lineout_irq, VAR_0);
 FUNC_3(&VAR_1->audio_reset);
 FUNC_3(&VAR_1->amp_mute);
 FUNC_3(&VAR_1->hp_mute);
 FUNC_3(&VAR_1->hp_detect);
 FUNC_2(&VAR_1->i2c);
 FUNC_1(VAR_1);
 VAR_0->mixer_data = ((void*)0);
}
