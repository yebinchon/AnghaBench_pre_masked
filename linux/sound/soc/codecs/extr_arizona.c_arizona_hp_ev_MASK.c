
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_soc_dapm_widget {int shift; int dapm; } ;
struct snd_soc_component {int dummy; } ;
struct snd_kcontrol {int dummy; } ;
struct arizona_priv {struct arizona* arizona; } ;
struct arizona {unsigned int hp_ena; int regmap; scalar_t__ hpdet_clamp; } ;


 int VAR_0 ;
 int VAR_1 ;




 int FUNC_0 (struct snd_soc_dapm_widget*,struct snd_kcontrol*,int) ;
 int FUNC_1 (int ,int ,unsigned int,unsigned int) ;
 struct arizona_priv* FUNC_2 (struct snd_soc_component*) ;
 struct snd_soc_component* FUNC_3 (int ) ;

int FUNC_4(struct snd_soc_dapm_widget *VAR_2, struct snd_kcontrol *VAR_3,
    int VAR_4)
{
 struct snd_soc_component *VAR_5 = FUNC_3(VAR_2->dapm);
 struct arizona_priv *VAR_6 = FUNC_2(VAR_5);
 struct arizona *VAR_7 = VAR_6->arizona;
 unsigned int VAR_8 = 1 << VAR_2->shift;
 unsigned int VAR_9;

 switch (VAR_4) {
 case 130:
  VAR_9 = VAR_8;
  break;
 case 129:
  VAR_9 = 0;
  break;
 case 128:
 case 131:
  return FUNC_0(VAR_2, VAR_3, VAR_4);
 default:
  return -VAR_1;
 }


 VAR_6->arizona->hp_ena &= ~VAR_8;
 VAR_6->arizona->hp_ena |= VAR_9;


 if (VAR_6->arizona->hpdet_clamp)
  VAR_9 = 0;

 FUNC_1(VAR_7->regmap, VAR_0,
     VAR_8, VAR_9);

 return FUNC_0(VAR_2, VAR_3, VAR_4);
}
