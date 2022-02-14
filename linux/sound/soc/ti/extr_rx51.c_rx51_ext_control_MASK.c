
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_soc_dapm_context {struct snd_soc_card* card; } ;
struct snd_soc_card {int dummy; } ;
struct rx51_audio_pdata {int tvout_selection_gpio; } ;





 int FUNC_0 (int ,int) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 struct rx51_audio_pdata* FUNC_1 (struct snd_soc_card*) ;
 int FUNC_2 (struct snd_soc_dapm_context*,char*) ;
 int FUNC_3 (struct snd_soc_dapm_context*,char*) ;
 int FUNC_4 (struct snd_soc_dapm_context*) ;
 int FUNC_5 (struct snd_soc_dapm_context*) ;
 int FUNC_6 (struct snd_soc_dapm_context*) ;

__attribute__((used)) static void FUNC_7(struct snd_soc_dapm_context *VAR_3)
{
 struct snd_soc_card *VAR_4 = VAR_3->card;
 struct rx51_audio_pdata *VAR_5 = FUNC_1(VAR_4);
 int VAR_6 = 0, VAR_7 = 0, VAR_8 = 0;

 switch (VAR_1) {
 case 128:
  VAR_8 = 1;
  VAR_6 = 1;
  break;
 case 129:
  VAR_7 = 1;

 case 130:
  VAR_6 = 1;
  break;
 }

 FUNC_4(VAR_3);

 if (VAR_2)
  FUNC_3(VAR_3, "Ext Spk");
 else
  FUNC_2(VAR_3, "Ext Spk");
 if (VAR_0)
  FUNC_3(VAR_3, "DMic");
 else
  FUNC_2(VAR_3, "DMic");
 if (VAR_6)
  FUNC_3(VAR_3, "Headphone Jack");
 else
  FUNC_2(VAR_3, "Headphone Jack");
 if (VAR_7)
  FUNC_3(VAR_3, "HS Mic");
 else
  FUNC_2(VAR_3, "HS Mic");

 FUNC_0(VAR_5->tvout_selection_gpio, VAR_8);

 FUNC_6(VAR_3);

 FUNC_5(VAR_3);
}
