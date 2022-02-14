
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_soc_dapm_widget {int dapm; } ;
struct snd_soc_component {int dev; } ;
struct snd_kcontrol {int dummy; } ;
struct rt5645_priv {int sysclk; int regmap; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int ,char*) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int ,int ,int ) ;
 struct rt5645_priv* FUNC_3 (struct snd_soc_component*) ;
 int FUNC_4 (struct snd_soc_component*,int ,int ,int) ;
 struct snd_soc_component* FUNC_5 (int ) ;

__attribute__((used)) static int FUNC_6(struct snd_soc_dapm_widget *VAR_5,
 struct snd_kcontrol *VAR_6, int VAR_7)
{
 struct snd_soc_component *VAR_8 = FUNC_5(VAR_5->dapm);
 struct rt5645_priv *VAR_9 = FUNC_3(VAR_8);
 int VAR_10, VAR_11;

 VAR_11 = VAR_9->sysclk / FUNC_2(VAR_9->regmap,
  VAR_0, VAR_4);
 VAR_10 = FUNC_1(VAR_11);
 if (VAR_10 < 0)
  FUNC_0(VAR_8->dev, "Failed to set DMIC clock\n");
 else
  FUNC_4(VAR_8, VAR_3,
   VAR_1, VAR_10 << VAR_2);
 return VAR_10;
}
