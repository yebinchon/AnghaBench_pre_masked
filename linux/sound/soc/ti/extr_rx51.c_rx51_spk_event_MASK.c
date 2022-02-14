
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_soc_dapm_widget {struct snd_soc_dapm_context* dapm; } ;
struct snd_soc_dapm_context {struct snd_soc_card* card; } ;
struct snd_soc_card {int dummy; } ;
struct snd_kcontrol {int dummy; } ;
struct rx51_audio_pdata {int speaker_amp_gpio; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (int ,int) ;
 struct rx51_audio_pdata* FUNC_2 (struct snd_soc_card*) ;

__attribute__((used)) static int FUNC_3(struct snd_soc_dapm_widget *VAR_0,
     struct snd_kcontrol *VAR_1, int VAR_2)
{
 struct snd_soc_dapm_context *VAR_3 = VAR_0->dapm;
 struct snd_soc_card *VAR_4 = VAR_3->card;
 struct rx51_audio_pdata *VAR_5 = FUNC_2(VAR_4);

 FUNC_1(VAR_5->speaker_amp_gpio,
         !!FUNC_0(VAR_2));

 return 0;
}
