
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_soc_dapm_widget {struct snd_soc_dapm_context* dapm; } ;
struct snd_soc_dapm_context {struct snd_soc_card* card; } ;
struct snd_soc_card {int dummy; } ;
struct snd_kcontrol {int dummy; } ;
struct sirf_audio_card {int gpio_hp_pa; } ;


 int FUNC_0 (int) ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (int ,int) ;
 struct sirf_audio_card* FUNC_3 (struct snd_soc_card*) ;

__attribute__((used)) static int FUNC_4(struct snd_soc_dapm_widget *VAR_0,
    struct snd_kcontrol *VAR_1, int VAR_2)
{
 struct snd_soc_dapm_context *VAR_3 = VAR_0->dapm;
 struct snd_soc_card *VAR_4 = VAR_3->card;
 struct sirf_audio_card *VAR_5 = FUNC_3(VAR_4);
 int VAR_6 = !FUNC_0(VAR_2);

 if (FUNC_1(VAR_5->gpio_hp_pa))
  FUNC_2(VAR_5->gpio_hp_pa, VAR_6);
 return 0;
}
