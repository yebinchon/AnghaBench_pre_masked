
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct tm2_machine_priv {int gpio_mic_bias; } ;
struct snd_soc_dapm_widget {TYPE_1__* dapm; } ;
struct snd_soc_card {int dummy; } ;
struct snd_kcontrol {int dummy; } ;
struct TYPE_2__ {struct snd_soc_card* card; } ;




 int FUNC_0 (int ,int) ;
 struct tm2_machine_priv* FUNC_1 (struct snd_soc_card*) ;

__attribute__((used)) static int FUNC_2(struct snd_soc_dapm_widget *VAR_0,
    struct snd_kcontrol *VAR_1, int VAR_2)
{
 struct snd_soc_card *VAR_3 = VAR_0->dapm->card;
 struct tm2_machine_priv *VAR_4 = FUNC_1(VAR_3);

 switch (VAR_2) {
 case 128:
  FUNC_0(VAR_4->gpio_mic_bias, 1);
  break;
 case 129:
  FUNC_0(VAR_4->gpio_mic_bias, 0);
  break;
 }

 return 0;
}
