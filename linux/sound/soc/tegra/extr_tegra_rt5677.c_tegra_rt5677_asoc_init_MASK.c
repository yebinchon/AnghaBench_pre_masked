
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_4__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct tegra_rt5677 {int gpio_mic_present; int gpio_hp_det; } ;
struct snd_soc_pcm_runtime {TYPE_4__* card; } ;
struct TYPE_7__ {int dapm; } ;
struct TYPE_6__ {int gpio; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int ) ;
 struct tegra_rt5677* FUNC_1 (TYPE_4__*) ;
 int FUNC_2 (TYPE_4__*,char*,int ,int *,int *,int) ;
 int FUNC_3 (int *,char*) ;
 int FUNC_4 (int *,int,TYPE_1__*) ;
 int VAR_2 ;
 TYPE_1__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 TYPE_1__ VAR_6 ;
 int VAR_7 ;

__attribute__((used)) static int FUNC_5(struct snd_soc_pcm_runtime *VAR_8)
{
 struct tegra_rt5677 *VAR_9 = FUNC_1(VAR_8->card);

 FUNC_2(VAR_8->card, "Headphone Jack", VAR_0,
         &VAR_2,
         &VAR_4, 1);

 if (FUNC_0(VAR_9->gpio_hp_det)) {
  VAR_3.gpio = VAR_9->gpio_hp_det;
  FUNC_4(&VAR_2, 1,
    &VAR_3);
 }


 FUNC_2(VAR_8->card, "Mic Jack", VAR_1,
         &VAR_5,
         &VAR_7, 1);

 if (FUNC_0(VAR_9->gpio_mic_present)) {
  VAR_6.gpio = VAR_9->gpio_mic_present;
  FUNC_4(&VAR_5, 1,
    &VAR_6);
 }

 FUNC_3(&VAR_8->card->dapm, "MICBIAS1");

 return 0;
}
