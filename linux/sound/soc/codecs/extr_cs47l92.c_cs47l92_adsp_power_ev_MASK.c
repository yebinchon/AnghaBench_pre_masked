
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_soc_dapm_widget {int shift; int dapm; } ;
struct snd_soc_component {int dummy; } ;
struct snd_kcontrol {int dummy; } ;
struct madera_priv {struct madera* madera; } ;
struct madera {int dev; int regmap; } ;
struct cs47l92 {struct madera_priv core; } ;


 int VAR_0 ;

 int FUNC_0 (int ,char*,int) ;
 int FUNC_1 (struct madera_priv*,int ,unsigned int) ;
 int FUNC_2 (int ,int ,unsigned int*) ;
 struct cs47l92* FUNC_3 (struct snd_soc_component*) ;
 struct snd_soc_component* FUNC_4 (int ) ;
 int FUNC_5 (struct snd_soc_dapm_widget*,struct snd_kcontrol*,int) ;

__attribute__((used)) static int FUNC_6(struct snd_soc_dapm_widget *VAR_1,
     struct snd_kcontrol *VAR_2,
     int VAR_3)
{
 struct snd_soc_component *VAR_4 =
  FUNC_4(VAR_1->dapm);
 struct cs47l92 *VAR_5 = FUNC_3(VAR_4);
 struct madera_priv *VAR_6 = &VAR_5->core;
 struct madera *VAR_7 = VAR_6->madera;
 unsigned int VAR_8;
 int VAR_9;

 VAR_9 = FUNC_2(VAR_7->regmap, VAR_0, &VAR_8);
 if (VAR_9 != 0) {
  FUNC_0(VAR_7->dev,
   "Failed to read MADERA_DSP_CLOCK_2: %d\n", VAR_9);
  return VAR_9;
 }

 switch (VAR_3) {
 case 128:
  VAR_9 = FUNC_1(&VAR_5->core, VAR_1->shift, VAR_8);
  if (VAR_9)
   return VAR_9;
  break;
 default:
  break;
 }

 return FUNC_5(VAR_1, VAR_2, VAR_3);
}
