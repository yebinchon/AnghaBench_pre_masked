
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_soc_dapm_widget {int dapm; } ;
struct snd_soc_component {int dummy; } ;
struct snd_kcontrol {int dummy; } ;
struct rt5645_priv {int regmap; int codec_type; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 scalar_t__ VAR_21 ;
 scalar_t__ VAR_22 ;
 int VAR_23 ;
 int VAR_24 ;
 int VAR_25 ;
 int VAR_26 ;
 int VAR_27 ;
 int VAR_28 ;
 int VAR_29 ;
 int VAR_30 ;


 int FUNC_0 (struct snd_soc_component*,int) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int ,scalar_t__,int) ;
 struct rt5645_priv* FUNC_3 (struct snd_soc_component*) ;
 int FUNC_4 (struct snd_soc_component*,int ,int,int) ;
 struct snd_soc_component* FUNC_5 (int ) ;

__attribute__((used)) static int FUNC_6(struct snd_soc_dapm_widget *VAR_31,
 struct snd_kcontrol *VAR_32, int VAR_33)
{
 struct snd_soc_component *VAR_34 = FUNC_5(VAR_31->dapm);
 struct rt5645_priv *VAR_35 = FUNC_3(VAR_34);

 switch (VAR_33) {
 case 129:
  FUNC_0(VAR_34, 1);

  if (VAR_35->codec_type == VAR_0) {
   FUNC_4(VAR_34, VAR_11,
    VAR_1 | VAR_3 |
    VAR_5,
    (VAR_8 << VAR_2) |
    (VAR_7 << VAR_4) |
    (VAR_8 << VAR_6));
   FUNC_2(VAR_35->regmap, VAR_22 +
    VAR_21, 0xfc00);
   FUNC_4(VAR_34, VAR_10,
    VAR_30, VAR_29);
   FUNC_4(VAR_34, VAR_10,
    VAR_25, VAR_24);
   FUNC_4(VAR_34, VAR_10,
    VAR_25 | VAR_14 |
    VAR_17, VAR_23 |
    VAR_13 | VAR_16);
   FUNC_1(40);
   FUNC_4(VAR_34, VAR_10,
    VAR_20 | VAR_14 |
    VAR_17, VAR_18 |
    VAR_12 | VAR_15);
  }
  break;

 case 128:

  if (VAR_35->codec_type == VAR_0) {
   FUNC_4(VAR_34, VAR_11,
    VAR_1 | VAR_3 |
    VAR_5,
    (VAR_9 << VAR_2) |
    (VAR_7 << VAR_4) |
    (VAR_9 << VAR_6));
   FUNC_2(VAR_35->regmap, VAR_22 +
    VAR_21, 0xfc00);
   FUNC_4(VAR_34, VAR_10,
    VAR_20, VAR_19);
   FUNC_4(VAR_34, VAR_10,
    VAR_28, VAR_27);
   FUNC_4(VAR_34, VAR_10,
    VAR_28 | VAR_14 |
    VAR_17, VAR_26 |
    VAR_13 | VAR_16);
   FUNC_1(30);
  }
  FUNC_0(VAR_34, 0);
  break;

 default:
  return 0;
 }

 return 0;
}
