
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_soc_dapm_widget {int dapm; } ;
struct snd_soc_component {int dummy; } ;
struct snd_kcontrol {int dummy; } ;
struct rt5670_priv {int regmap; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 int VAR_7 ;


 int FUNC_0 (int) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int ,int ,int,int) ;
 int FUNC_3 (int ,scalar_t__,int) ;
 struct rt5670_priv* FUNC_4 (struct snd_soc_component*) ;
 struct snd_soc_component* FUNC_5 (int ) ;

__attribute__((used)) static int FUNC_6(struct snd_soc_dapm_widget *VAR_8,
 struct snd_kcontrol *VAR_9, int VAR_10)
{
 struct snd_soc_component *VAR_11 = FUNC_5(VAR_8->dapm);
 struct rt5670_priv *VAR_12 = FUNC_4(VAR_11);

 switch (VAR_10) {
 case 129:

  FUNC_3(VAR_12->regmap, VAR_6 +
    VAR_5, 0xb400);
  FUNC_3(VAR_12->regmap, VAR_1, 0x0772);
  FUNC_3(VAR_12->regmap, VAR_0, 0x805d);
  FUNC_3(VAR_12->regmap, VAR_0, 0x831d);
  FUNC_2(VAR_12->regmap, VAR_2,
    0x0300, 0x0300);
  FUNC_2(VAR_12->regmap, VAR_3,
   VAR_4 | VAR_7, 0);
  FUNC_1(80);
  FUNC_3(VAR_12->regmap, VAR_0, 0x8019);
  break;

 case 128:

  FUNC_3(VAR_12->regmap, VAR_6 +
    VAR_5, 0xb400);
  FUNC_3(VAR_12->regmap, VAR_1, 0x0772);
  FUNC_3(VAR_12->regmap, VAR_0, 0x803d);
  FUNC_0(10);
  FUNC_3(VAR_12->regmap, VAR_0, 0x831d);
  FUNC_0(10);
  FUNC_2(VAR_12->regmap, VAR_3,
       VAR_4 | VAR_7,
       VAR_4 | VAR_7);
  FUNC_1(20);
  FUNC_2(VAR_12->regmap,
       VAR_2, 0x0300, 0x0);
  FUNC_3(VAR_12->regmap, VAR_0, 0x8019);
  FUNC_3(VAR_12->regmap, VAR_1, 0x0707);
  FUNC_3(VAR_12->regmap, VAR_6 +
    VAR_5, 0xfc00);
  break;

 default:
  return 0;
 }

 return 0;
}
