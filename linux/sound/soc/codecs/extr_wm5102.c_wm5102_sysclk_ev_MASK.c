
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct snd_soc_dapm_widget {int dapm; } ;
struct snd_soc_component {TYPE_1__* dev; } ;
struct snd_kcontrol {int dummy; } ;
struct regmap {int dummy; } ;
struct reg_default {int def; int reg; } ;
struct arizona {int rev; struct regmap* regmap; } ;
struct TYPE_2__ {int parent; } ;


 int FUNC_0 (struct reg_default*) ;




 int FUNC_1 (struct snd_soc_dapm_widget*,struct snd_kcontrol*,int) ;
 int FUNC_2 (struct snd_soc_dapm_widget*,struct snd_kcontrol*,int) ;
 struct arizona* FUNC_3 (int ) ;
 int FUNC_4 (struct regmap*,int ,int ) ;
 struct snd_soc_component* FUNC_5 (int ) ;
 struct reg_default* VAR_0 ;
 struct reg_default* VAR_1 ;

__attribute__((used)) static int FUNC_6(struct snd_soc_dapm_widget *VAR_2,
       struct snd_kcontrol *VAR_3, int VAR_4)
{
 struct snd_soc_component *VAR_5 = FUNC_5(VAR_2->dapm);
 struct arizona *VAR_6 = FUNC_3(VAR_5->dev->parent);
 struct regmap *VAR_7 = VAR_6->regmap;
 const struct reg_default *VAR_8 = ((void*)0);
 int VAR_9, VAR_10;

 switch (VAR_6->rev) {
 case 0:
  VAR_8 = VAR_0;
  VAR_10 = FUNC_0(VAR_0);
  break;
 default:
  VAR_8 = VAR_1;
  VAR_10 = FUNC_0(VAR_1);
  break;
 }

 switch (VAR_4) {
 case 130:
  if (VAR_8)
   for (VAR_9 = 0; VAR_9 < VAR_10; VAR_9++)
    FUNC_4(VAR_7, VAR_8[VAR_9].reg,
         VAR_8[VAR_9].def);
  break;
 case 129:
  break;
 case 128:
 case 131:
  return FUNC_1(VAR_2, VAR_3, VAR_4);
 default:
  return 0;
 }

 return FUNC_2(VAR_2, VAR_3, VAR_4);
}
