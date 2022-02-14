
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct snd_soc_dapm_widget {TYPE_1__* dapm; } ;
struct snd_soc_card {int dummy; } ;
struct snd_kcontrol {int dummy; } ;
struct byt_rt5651_private {int ext_amp_gpio; } ;
struct TYPE_2__ {struct snd_soc_card* card; } ;


 scalar_t__ FUNC_0 (int) ;
 int FUNC_1 (int ,int) ;
 struct byt_rt5651_private* FUNC_2 (struct snd_soc_card*) ;

__attribute__((used)) static int FUNC_3(struct snd_soc_dapm_widget *VAR_0,
 struct snd_kcontrol *VAR_1, int VAR_2)
{
 struct snd_soc_card *VAR_3 = VAR_0->dapm->card;
 struct byt_rt5651_private *VAR_4 = FUNC_2(VAR_3);

 if (FUNC_0(VAR_2))
  FUNC_1(VAR_4->ext_amp_gpio, 1);
 else
  FUNC_1(VAR_4->ext_amp_gpio, 0);

 return 0;
}
