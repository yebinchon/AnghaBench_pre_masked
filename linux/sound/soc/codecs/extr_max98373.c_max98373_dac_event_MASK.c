
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_soc_dapm_widget {int dapm; } ;
struct snd_soc_component {int dummy; } ;
struct snd_kcontrol {int dummy; } ;
struct max98373_priv {int tdm_mode; int regmap; } ;


 int VAR_0 ;
 int VAR_1 ;


 int FUNC_0 (int ,int ,int ,int) ;
 struct max98373_priv* FUNC_1 (struct snd_soc_component*) ;
 struct snd_soc_component* FUNC_2 (int ) ;

__attribute__((used)) static int FUNC_3(struct snd_soc_dapm_widget *VAR_2,
 struct snd_kcontrol *VAR_3, int VAR_4)
{
 struct snd_soc_component *VAR_5 = FUNC_2(VAR_2->dapm);
 struct max98373_priv *VAR_6 = FUNC_1(VAR_5);

 switch (VAR_4) {
 case 128:
  FUNC_0(VAR_6->regmap,
   VAR_1,
   VAR_0, 1);
  break;
 case 129:
  FUNC_0(VAR_6->regmap,
   VAR_1,
   VAR_0, 0);
  VAR_6->tdm_mode = 0;
  break;
 default:
  return 0;
 }
 return 0;
}
