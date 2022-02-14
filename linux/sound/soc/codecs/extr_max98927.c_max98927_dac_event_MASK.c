
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_soc_dapm_widget {int dapm; } ;
struct snd_soc_component {int dummy; } ;
struct snd_kcontrol {int dummy; } ;
struct max98927_priv {int tdm_mode; int regmap; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;



 int FUNC_0 (int ,int ,int ,int) ;
 struct max98927_priv* FUNC_1 (struct snd_soc_component*) ;
 struct snd_soc_component* FUNC_2 (int ) ;

__attribute__((used)) static int FUNC_3(struct snd_soc_dapm_widget *VAR_4,
 struct snd_kcontrol *VAR_5, int VAR_6)
{
 struct snd_soc_component *VAR_7 = FUNC_2(VAR_4->dapm);
 struct max98927_priv *VAR_8 = FUNC_1(VAR_7);

 switch (VAR_6) {
 case 128:
  VAR_8->tdm_mode = 0;
  break;
 case 129:
  FUNC_0(VAR_8->regmap,
   VAR_2,
   VAR_0, 1);
  FUNC_0(VAR_8->regmap,
   VAR_3,
   VAR_1, 1);
  break;
 case 130:
  FUNC_0(VAR_8->regmap,
   VAR_3,
   VAR_1, 0);
  FUNC_0(VAR_8->regmap,
   VAR_2,
   VAR_0, 0);
  break;
 default:
  return 0;
 }
 return 0;
}
