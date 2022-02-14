
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_soc_dapm_widget {int dapm; } ;
struct snd_soc_component {int dummy; } ;
struct rt5677_priv {int regmap; } ;


 int VAR_0 ;
 unsigned int VAR_1 ;
 unsigned int VAR_2 ;
 int FUNC_0 (int ,int ,unsigned int*) ;
 struct rt5677_priv* FUNC_1 (struct snd_soc_component*) ;
 struct snd_soc_component* FUNC_2 (int ) ;

__attribute__((used)) static int FUNC_3(struct snd_soc_dapm_widget *VAR_3,
    struct snd_soc_dapm_widget *VAR_4)
{
 struct snd_soc_component *VAR_5 = FUNC_2(VAR_3->dapm);
 struct rt5677_priv *VAR_6 = FUNC_1(VAR_5);
 unsigned int VAR_7;

 FUNC_0(VAR_6->regmap, VAR_0, &VAR_7);
 VAR_7 &= VAR_1;
 if (VAR_7 == VAR_2)
  return 1;
 else
  return 0;
}
