
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sun4i_codec {int gpio_pa; } ;
struct snd_soc_dapm_widget {TYPE_1__* dapm; } ;
struct snd_kcontrol {int dummy; } ;
struct TYPE_2__ {int card; } ;


 scalar_t__ FUNC_0 (int) ;
 int FUNC_1 (int ,int) ;
 int FUNC_2 (int) ;
 struct sun4i_codec* FUNC_3 (int ) ;

__attribute__((used)) static int FUNC_4(struct snd_soc_dapm_widget *VAR_0,
     struct snd_kcontrol *VAR_1, int VAR_2)
{
 struct sun4i_codec *VAR_3 = FUNC_3(VAR_0->dapm->card);

 FUNC_1(VAR_3->gpio_pa,
     !!FUNC_0(VAR_2));

 if (FUNC_0(VAR_2)) {





  FUNC_2(700);
 }

 return 0;
}
