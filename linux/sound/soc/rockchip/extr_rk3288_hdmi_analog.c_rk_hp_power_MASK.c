
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct snd_soc_dapm_widget {TYPE_1__* dapm; } ;
struct snd_kcontrol {int dummy; } ;
struct rk_drvdata {int gpio_hp_en; } ;
struct TYPE_2__ {int card; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,int ) ;
 struct rk_drvdata* FUNC_3 (int ) ;

__attribute__((used)) static int FUNC_4(struct snd_soc_dapm_widget *VAR_0,
         struct snd_kcontrol *VAR_1, int VAR_2)
{
 struct rk_drvdata *VAR_3 = FUNC_3(VAR_0->dapm->card);

 if (!FUNC_1(VAR_3->gpio_hp_en))
  return 0;

 FUNC_2(VAR_3->gpio_hp_en,
    FUNC_0(VAR_2));

 return 0;
}
