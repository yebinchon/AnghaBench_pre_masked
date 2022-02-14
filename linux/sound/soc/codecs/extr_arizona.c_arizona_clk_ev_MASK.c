
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct snd_soc_dapm_widget {int reg; int dapm; } ;
struct snd_soc_component {TYPE_1__* dev; } ;
struct snd_kcontrol {int dummy; } ;
struct arizona {int * mclk; int regmap; } ;
struct TYPE_2__ {int parent; } ;




 int VAR_0 ;
 int VAR_1 ;
 unsigned int VAR_2 ;
 unsigned int VAR_3 ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (TYPE_1__*,char*,int) ;
 struct arizona* FUNC_3 (int ) ;
 int FUNC_4 (int ,int ,unsigned int*) ;
 struct snd_soc_component* FUNC_5 (int ) ;

int FUNC_6(struct snd_soc_dapm_widget *VAR_4,
     struct snd_kcontrol *VAR_5, int VAR_6)
{
 struct snd_soc_component *VAR_7 = FUNC_5(VAR_4->dapm);
 struct arizona *VAR_8 = FUNC_3(VAR_7->dev->parent);
 unsigned int VAR_9;
 int VAR_10;
 int VAR_11;

 VAR_11 = FUNC_4(VAR_8->regmap, VAR_4->reg, &VAR_9);
 if (VAR_11) {
  FUNC_2(VAR_7->dev, "Failed to check clock source: %d\n", VAR_11);
  return VAR_11;
 }

 VAR_9 = (VAR_9 & VAR_2) >> VAR_3;

 switch (VAR_9) {
 case 131:
  VAR_10 = VAR_0;
  break;
 case 130:
  VAR_10 = VAR_1;
  break;
 default:
  return 0;
 }

 switch (VAR_6) {
 case 128:
  return FUNC_1(VAR_8->mclk[VAR_10]);
 case 129:
  FUNC_0(VAR_8->mclk[VAR_10]);
  return 0;
 default:
  return 0;
 }
}
