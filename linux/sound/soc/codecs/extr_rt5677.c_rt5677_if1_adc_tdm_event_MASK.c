
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_soc_dapm_widget {int dapm; } ;
struct snd_soc_component {int dummy; } ;
struct snd_kcontrol {int dummy; } ;
struct rt5677_priv {int regmap; } ;


 unsigned int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;

 int FUNC_0 (int ,int ,unsigned int*) ;
 int FUNC_1 (int ,int ,int ,int ) ;
 struct rt5677_priv* FUNC_2 (struct snd_soc_component*) ;
 struct snd_soc_component* FUNC_3 (int ) ;

__attribute__((used)) static int FUNC_4(struct snd_soc_dapm_widget *VAR_5,
 struct snd_kcontrol *VAR_6, int VAR_7)
{
 struct snd_soc_component *VAR_8 = FUNC_3(VAR_5->dapm);
 struct rt5677_priv *VAR_9 = FUNC_2(VAR_8);
 unsigned int VAR_10;

 switch (VAR_7) {
 case 128:
  FUNC_0(VAR_9->regmap, VAR_4, &VAR_10);
  if (VAR_10 & VAR_0)
   FUNC_1(VAR_9->regmap, VAR_3,
    VAR_1,
    VAR_2);
  break;

 default:
  return 0;
 }

 return 0;
}
