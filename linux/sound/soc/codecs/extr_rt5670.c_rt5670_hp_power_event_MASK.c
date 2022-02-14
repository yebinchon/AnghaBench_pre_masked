
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_soc_dapm_widget {int dapm; } ;
struct snd_soc_component {int dummy; } ;
struct snd_kcontrol {int dummy; } ;
struct rt5670_priv {int regmap; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;


 int FUNC_0 (int) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int ,int ,int,int) ;
 int FUNC_3 (int ,scalar_t__,int) ;
 struct rt5670_priv* FUNC_4 (struct snd_soc_component*) ;
 struct snd_soc_component* FUNC_5 (int ) ;

__attribute__((used)) static int FUNC_6(struct snd_soc_dapm_widget *VAR_12,
      struct snd_kcontrol *VAR_13, int VAR_14)
{
 struct snd_soc_component *VAR_15 = FUNC_5(VAR_12->dapm);
 struct rt5670_priv *VAR_16 = FUNC_4(VAR_15);

 switch (VAR_14) {
 case 129:
  FUNC_2(VAR_16->regmap, VAR_0,
   VAR_6, VAR_5);
  FUNC_2(VAR_16->regmap, VAR_3,
   0x0400, 0x0400);

  FUNC_2(VAR_16->regmap, VAR_8,
   VAR_11 | VAR_9 |
   VAR_10, VAR_11 |
   VAR_9 | VAR_10);

  FUNC_3(VAR_16->regmap, VAR_2, 0x3100);
  FUNC_3(VAR_16->regmap, VAR_1, 0x8009);
  FUNC_3(VAR_16->regmap, VAR_7 +
   VAR_4, 0x9f00);
  FUNC_0(20);
  FUNC_3(VAR_16->regmap, VAR_1, 0x8019);
  break;
 case 128:
  FUNC_3(VAR_16->regmap, VAR_1, 0x0004);
  FUNC_1(30);
  break;
 default:
  return 0;
 }

 return 0;
}
