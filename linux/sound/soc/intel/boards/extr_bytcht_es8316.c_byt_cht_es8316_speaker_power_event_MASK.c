
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct snd_soc_dapm_widget {TYPE_1__* dapm; } ;
struct snd_soc_card {int dummy; } ;
struct snd_kcontrol {int dummy; } ;
struct byt_cht_es8316_private {int speaker_en; int speaker_en_gpio; } ;
struct TYPE_2__ {struct snd_soc_card* card; } ;


 scalar_t__ FUNC_0 (int) ;
 int FUNC_1 (int ,int) ;
 struct byt_cht_es8316_private* FUNC_2 (struct snd_soc_card*) ;

__attribute__((used)) static int FUNC_3(struct snd_soc_dapm_widget *VAR_0,
 struct snd_kcontrol *VAR_1, int VAR_2)
{
 struct snd_soc_card *VAR_3 = VAR_0->dapm->card;
 struct byt_cht_es8316_private *VAR_4 = FUNC_2(VAR_3);

 if (FUNC_0(VAR_2))
  VAR_4->speaker_en = 1;
 else
  VAR_4->speaker_en = 0;

 FUNC_1(VAR_4->speaker_en_gpio, VAR_4->speaker_en);

 return 0;
}
