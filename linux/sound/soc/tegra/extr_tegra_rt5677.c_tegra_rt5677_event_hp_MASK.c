
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tegra_rt5677 {int gpio_hp_en; } ;
struct snd_soc_dapm_widget {struct snd_soc_dapm_context* dapm; } ;
struct snd_soc_dapm_context {struct snd_soc_card* card; } ;
struct snd_soc_card {int dummy; } ;
struct snd_kcontrol {int dummy; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,int ) ;
 struct tegra_rt5677* FUNC_3 (struct snd_soc_card*) ;

__attribute__((used)) static int FUNC_4(struct snd_soc_dapm_widget *VAR_0,
   struct snd_kcontrol *VAR_1, int VAR_2)
{
 struct snd_soc_dapm_context *VAR_3 = VAR_0->dapm;
 struct snd_soc_card *VAR_4 = VAR_3->card;
 struct tegra_rt5677 *VAR_5 = FUNC_3(VAR_4);

 if (!FUNC_1(VAR_5->gpio_hp_en))
  return 0;

 FUNC_2(VAR_5->gpio_hp_en,
  FUNC_0(VAR_2));

 return 0;
}
