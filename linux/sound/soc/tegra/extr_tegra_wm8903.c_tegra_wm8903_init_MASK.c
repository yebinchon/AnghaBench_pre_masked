
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct tegra_wm8903 {int gpio_hp_det; } ;
struct snd_soc_pcm_runtime {struct snd_soc_card* card; struct snd_soc_dai* codec_dai; } ;
struct snd_soc_dai {struct snd_soc_component* component; } ;
struct snd_soc_component {int dummy; } ;
struct snd_soc_card {int dapm; } ;
struct TYPE_3__ {int gpio; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_1 (int ) ;
 struct tegra_wm8903* FUNC_2 (struct snd_soc_card*) ;
 int FUNC_3 (struct snd_soc_card*,char*,int ,int *,int ,int ) ;
 int FUNC_4 (int *,char*) ;
 int FUNC_5 (int *,int,TYPE_1__*) ;
 int VAR_2 ;
 TYPE_1__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_6 (struct snd_soc_component*,int *,int ,int ) ;

__attribute__((used)) static int FUNC_7(struct snd_soc_pcm_runtime *VAR_7)
{
 struct snd_soc_dai *VAR_8 = VAR_7->codec_dai;
 struct snd_soc_component *VAR_9 = VAR_8->component;
 struct snd_soc_card *VAR_10 = VAR_7->card;
 struct tegra_wm8903 *VAR_11 = FUNC_2(VAR_10);

 if (FUNC_1(VAR_11->gpio_hp_det)) {
  VAR_3.gpio = VAR_11->gpio_hp_det;
  FUNC_3(VAR_7->card, "Headphone Jack",
          VAR_0, &VAR_2,
          VAR_4,
          FUNC_0(VAR_4));
  FUNC_5(&VAR_2,
     1,
     &VAR_3);
 }

 FUNC_3(VAR_7->card, "Mic Jack", VAR_1,
         &VAR_5,
         VAR_6,
         FUNC_0(VAR_6));
 FUNC_6(VAR_9, &VAR_5, VAR_1,
    0);

 FUNC_4(&VAR_10->dapm, "MICBIAS");

 return 0;
}
