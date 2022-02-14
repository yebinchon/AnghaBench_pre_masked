
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_soc_dapm_widget {int dapm; } ;
struct snd_soc_component {int dummy; } ;
struct snd_kcontrol {int dummy; } ;
struct rt5651_priv {int hp_mute; int regmap; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 scalar_t__ VAR_11 ;
 scalar_t__ VAR_12 ;
 scalar_t__ VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 scalar_t__ VAR_21 ;
 int VAR_22 ;
 int VAR_23 ;
 scalar_t__ VAR_24 ;


 int FUNC_0 (int ,scalar_t__,int,int) ;
 int FUNC_1 (int ,scalar_t__,int) ;
 struct rt5651_priv* FUNC_2 (struct snd_soc_component*) ;
 struct snd_soc_component* FUNC_3 (int ) ;
 int FUNC_4 (int,int) ;

__attribute__((used)) static int FUNC_5(struct snd_soc_dapm_widget *VAR_25,
 struct snd_kcontrol *VAR_26, int VAR_27)
{
 struct snd_soc_component *VAR_28 = FUNC_3(VAR_25->dapm);
 struct rt5651_priv *VAR_29 = FUNC_2(VAR_28);

 switch (VAR_27) {
 case 129:

  FUNC_0(VAR_29->regmap, VAR_12,
   VAR_14 | VAR_16,
   VAR_10 | VAR_15);
  FUNC_0(VAR_29->regmap, VAR_0,
   VAR_23, VAR_22);

  FUNC_0(VAR_29->regmap, VAR_13,
   VAR_2 | VAR_4 |
   VAR_6,
   (VAR_9 << VAR_3) |
   (VAR_8 << VAR_5) |
   (VAR_9 << VAR_7));

  FUNC_1(VAR_29->regmap, VAR_24 +
   VAR_21, 0x1c00);
  FUNC_0(VAR_29->regmap, VAR_11,
   VAR_17 | VAR_20,
   VAR_18 | VAR_19);
  FUNC_0(VAR_29->regmap, VAR_24 +
   VAR_1, 0x0700, 0x0400);
  VAR_29->hp_mute = 0;
  break;

 case 128:
  VAR_29->hp_mute = 1;
  FUNC_4(70000, 75000);
  break;

 default:
  return 0;
 }

 return 0;
}
