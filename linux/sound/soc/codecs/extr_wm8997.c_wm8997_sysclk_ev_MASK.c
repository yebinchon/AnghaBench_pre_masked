
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

__attribute__((used)) static int FUNC_6(struct snd_soc_dapm_widget *VAR_1,
       struct snd_kcontrol *VAR_2, int VAR_3)
{
 struct snd_soc_component *VAR_4 = FUNC_5(VAR_1->dapm);
 struct arizona *VAR_5 = FUNC_3(VAR_4->dev->parent);
 struct regmap *VAR_6 = VAR_5->regmap;
 const struct reg_default *VAR_7 = ((void*)0);
 int VAR_8, VAR_9;

 switch (VAR_5->rev) {
 case 0:
  VAR_7 = VAR_0;
  VAR_9 = FUNC_0(VAR_0);
  break;
 default:
  break;
 }

 switch (VAR_3) {
 case 130:
  if (VAR_7)
   for (VAR_8 = 0; VAR_8 < VAR_9; VAR_8++)
    FUNC_4(VAR_6, VAR_7[VAR_8].reg,
         VAR_7[VAR_8].def);
  break;
 case 129:
  break;
 case 128:
 case 131:
  return FUNC_1(VAR_1, VAR_2, VAR_3);
 default:
  return 0;
 }

 return FUNC_2(VAR_1, VAR_2, VAR_3);
}
