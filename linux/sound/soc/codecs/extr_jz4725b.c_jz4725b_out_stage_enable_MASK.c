
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_soc_dapm_widget {int dapm; } ;
struct snd_soc_component {int dummy; } ;
struct snd_kcontrol {int dummy; } ;
struct regmap {int dummy; } ;
struct jz_icdc {struct regmap* regmap; } ;


 unsigned int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;




 int FUNC_1 (struct regmap*,int ,unsigned int,unsigned int,int,int) ;
 int FUNC_2 (struct regmap*,int ,unsigned int,int ) ;
 struct jz_icdc* FUNC_3 (struct snd_soc_component*) ;
 struct snd_soc_component* FUNC_4 (int ) ;

__attribute__((used)) static int FUNC_5(struct snd_soc_dapm_widget *VAR_4,
        struct snd_kcontrol *VAR_5,
        int VAR_6)
{
 struct snd_soc_component *VAR_7 = FUNC_4(VAR_4->dapm);
 struct jz_icdc *VAR_8 = FUNC_3(VAR_7);
 struct regmap *VAR_9 = VAR_8->regmap;
 unsigned int VAR_10;

 switch (VAR_6) {
 case 128:
  return FUNC_2(VAR_9, VAR_1,
       FUNC_0(VAR_3), 0);
 case 130:
  return FUNC_1(VAR_9, VAR_1,
          VAR_10, VAR_10 & FUNC_0(VAR_3),
          100000, 500000);
 case 129:
  return FUNC_2(VAR_9, VAR_1,
    FUNC_0(VAR_2), 0);
 case 131:
  return FUNC_1(VAR_9, VAR_1,
          VAR_10, VAR_10 & FUNC_0(VAR_2),
          100000, 500000);
 default:
  return -VAR_0;
 }
}
