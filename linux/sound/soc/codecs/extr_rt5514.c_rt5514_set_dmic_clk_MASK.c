
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct snd_soc_dapm_widget {int dapm; } ;
struct snd_soc_component {int dev; } ;
struct snd_kcontrol {int dummy; } ;
struct TYPE_2__ {scalar_t__ dmic_init_delay; } ;
struct rt5514_priv {TYPE_1__ pdata; int regmap; int sysclk; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,char*) ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (int ,int ,int ,int) ;
 int FUNC_3 (struct snd_soc_component*,int ) ;
 struct rt5514_priv* FUNC_4 (struct snd_soc_component*) ;
 struct snd_soc_component* FUNC_5 (int ) ;

__attribute__((used)) static int FUNC_6(struct snd_soc_dapm_widget *VAR_3,
 struct snd_kcontrol *VAR_4, int VAR_5)
{
 struct snd_soc_component *VAR_6 = FUNC_5(VAR_3->dapm);
 struct rt5514_priv *VAR_7 = FUNC_4(VAR_6);
 int VAR_8;

 VAR_8 = FUNC_3(VAR_6, VAR_7->sysclk);
 if (VAR_8 < 0)
  FUNC_0(VAR_6->dev, "Failed to set DMIC clock\n");
 else
  FUNC_2(VAR_7->regmap, VAR_0,
   VAR_1,
   VAR_8 << VAR_2);

 if (VAR_7->pdata.dmic_init_delay)
  FUNC_1(VAR_7->pdata.dmic_init_delay);

 return VAR_8;
}
