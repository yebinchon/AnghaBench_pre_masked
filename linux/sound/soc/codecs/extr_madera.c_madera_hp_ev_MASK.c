
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_soc_dapm_widget {int shift; int dapm; } ;
struct snd_soc_component {int dummy; } ;
struct snd_kcontrol {int dummy; } ;
struct madera_priv {struct madera* madera; } ;
struct madera {unsigned int hp_ena; int type; int regmap; scalar_t__* out_shorted; int * out_clamp; } ;





 unsigned int VAR_0 ;
 int VAR_1 ;




 int FUNC_0 (struct snd_soc_dapm_widget*,struct snd_kcontrol*,int) ;
 int FUNC_1 (int ,int ,unsigned int*) ;
 int FUNC_2 (int ,int ,unsigned int,unsigned int) ;
 struct madera_priv* FUNC_3 (struct snd_soc_component*) ;
 struct snd_soc_component* FUNC_4 (int ) ;

int FUNC_5(struct snd_soc_dapm_widget *VAR_2,
   struct snd_kcontrol *VAR_3, int VAR_4)
{
 struct snd_soc_component *VAR_5 = FUNC_4(VAR_2->dapm);
 struct madera_priv *VAR_6 = FUNC_3(VAR_5);
 struct madera *VAR_7 = VAR_6->madera;
 unsigned int VAR_8 = 1 << VAR_2->shift;
 unsigned int VAR_9 = VAR_2->shift / 2;
 unsigned int VAR_10;
 unsigned int VAR_11 = 0;

 switch (VAR_4) {
 case 130:
  VAR_10 = VAR_8;
  break;
 case 129:
  VAR_10 = 0;
  break;
 case 128:
 case 131:
  return FUNC_0(VAR_2, VAR_3, VAR_4);
 default:
  return 0;
 }


 VAR_7->hp_ena &= ~VAR_8;
 VAR_7->hp_ena |= VAR_10;

 switch (VAR_7->type) {
 case 134:
 case 133:
 case 132:
  break;
 default:

  FUNC_1(VAR_7->regmap, VAR_1, &VAR_11);
  VAR_11 &= VAR_0;
  break;
 }


 if (!VAR_11 &&
     (!VAR_7->out_clamp[VAR_9] || VAR_7->out_shorted[VAR_9]))
  VAR_10 = 0;

 FUNC_2(VAR_7->regmap, VAR_1, VAR_8, VAR_10);

 return FUNC_0(VAR_2, VAR_3, VAR_4);
}
