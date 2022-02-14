
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_soc_dapm_widget {int shift; int dapm; } ;
struct snd_soc_component {int dummy; } ;
struct snd_kcontrol {int dummy; } ;
struct madera_priv {struct madera* madera; } ;
struct madera {int dev; int regmap; } ;
struct cs47l35 {struct madera_priv core; } ;


 unsigned int VAR_0 ;
 unsigned int VAR_1 ;
 int VAR_2 ;

 int FUNC_0 (int ,char*,int) ;
 int FUNC_1 (struct madera_priv*,int ,unsigned int) ;
 int FUNC_2 (int ,int ,unsigned int*) ;
 struct cs47l35* FUNC_3 (struct snd_soc_component*) ;
 struct snd_soc_component* FUNC_4 (int ) ;
 int FUNC_5 (struct snd_soc_dapm_widget*,struct snd_kcontrol*,int) ;

__attribute__((used)) static int FUNC_6(struct snd_soc_dapm_widget *VAR_3,
     struct snd_kcontrol *VAR_4,
     int VAR_5)
{
 struct snd_soc_component *VAR_6 =
  FUNC_4(VAR_3->dapm);
 struct cs47l35 *VAR_7 = FUNC_3(VAR_6);
 struct madera_priv *VAR_8 = &VAR_7->core;
 struct madera *VAR_9 = VAR_8->madera;
 unsigned int VAR_10;
 int VAR_11;

 VAR_11 = FUNC_2(VAR_9->regmap, VAR_2, &VAR_10);
 if (VAR_11 != 0) {
  FUNC_0(VAR_9->dev,
   "Failed to read MADERA_DSP_CLOCK_1: %d\n", VAR_11);
  return VAR_11;
 }

 VAR_10 &= VAR_0;
 VAR_10 >>= VAR_1;

 switch (VAR_5) {
 case 128:
  VAR_11 = FUNC_1(&VAR_7->core, VAR_3->shift, VAR_10);
  if (VAR_11)
   return VAR_11;
  break;
 default:
  break;
 }

 return FUNC_5(VAR_3, VAR_4, VAR_5);
}
