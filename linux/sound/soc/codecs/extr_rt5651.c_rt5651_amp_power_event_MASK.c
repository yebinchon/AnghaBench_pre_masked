
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_soc_dapm_widget {int dapm; } ;
struct snd_soc_component {int dummy; } ;
struct snd_kcontrol {int dummy; } ;
struct rt5651_priv {int regmap; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 scalar_t__ VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 scalar_t__ VAR_12 ;
 scalar_t__ VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;

 int FUNC_0 (int ,scalar_t__,int,int) ;
 int FUNC_1 (int ,scalar_t__,int) ;
 struct rt5651_priv* FUNC_2 (struct snd_soc_component*) ;
 struct snd_soc_component* FUNC_3 (int ) ;
 int FUNC_4 (int,int) ;

__attribute__((used)) static int FUNC_5(struct snd_soc_dapm_widget *VAR_17,
 struct snd_kcontrol *VAR_18, int VAR_19)
{
 struct snd_soc_component *VAR_20 = FUNC_3(VAR_17->dapm);
 struct rt5651_priv *VAR_21 = FUNC_2(VAR_20);

 switch (VAR_19) {
 case 128:

  FUNC_0(VAR_21->regmap, VAR_12 +
   VAR_0, 0x0700, 0x0200);
  FUNC_0(VAR_21->regmap, VAR_2,
   VAR_4, VAR_3);
  FUNC_0(VAR_21->regmap, VAR_1,
   VAR_7 | VAR_11 |
   VAR_5, VAR_8 |
   VAR_10 | VAR_6);
  FUNC_1(VAR_21->regmap, VAR_12 +
    VAR_9, 0x9f00);

  FUNC_0(VAR_21->regmap, VAR_13,
   VAR_14 | VAR_15, 0);
  FUNC_0(VAR_21->regmap, VAR_13,
   VAR_16,
   VAR_16);
  FUNC_4(10000, 15000);
  FUNC_0(VAR_21->regmap, VAR_13,
   VAR_14 | VAR_15 ,
   VAR_14 | VAR_15);
  break;

 default:
  return 0;
 }

 return 0;
}
