
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_soc_dapm_widget {int shift; int dapm; } ;
struct snd_soc_component {int dummy; } ;
struct snd_kcontrol {int dummy; } ;
struct madera_priv {struct madera* madera; } ;
struct madera {int regmap; int dev; } ;


 int VAR_0 ;
 int VAR_1 ;


 int FUNC_0 (int ,char*) ;
 int FUNC_1 (struct madera*,int*,int*) ;
 int FUNC_2 (int ,int ,int,int) ;
 struct madera_priv* FUNC_3 (struct snd_soc_component*) ;
 struct snd_soc_component* FUNC_4 (int ) ;

int FUNC_5(struct snd_soc_dapm_widget *VAR_2,
    struct snd_kcontrol *VAR_3, int VAR_4)
{
 struct snd_soc_component *VAR_5 = FUNC_4(VAR_2->dapm);
 struct madera_priv *VAR_6 = FUNC_3(VAR_5);
 struct madera *VAR_7 = VAR_6->madera;
 bool VAR_8, VAR_9;
 int VAR_10;

 switch (VAR_4) {
 case 129:
  VAR_10 = FUNC_1(VAR_7, &VAR_8, &VAR_9);
  if (VAR_10)
   return VAR_10;

  if (VAR_9) {
   FUNC_0(VAR_7->dev,
     "Speaker not enabled due to temperature\n");
   return -VAR_0;
  }

  FUNC_2(VAR_7->regmap, VAR_1,
       1 << VAR_2->shift, 1 << VAR_2->shift);
  break;
 case 128:
  FUNC_2(VAR_7->regmap, VAR_1,
       1 << VAR_2->shift, 0);
  break;
 default:
  break;
 }

 return 0;
}
