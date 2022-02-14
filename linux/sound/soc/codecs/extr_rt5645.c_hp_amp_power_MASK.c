
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_soc_component {int dummy; } ;
struct rt5645_priv {scalar_t__ codec_type; int hp_on; int regmap; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 scalar_t__ VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 scalar_t__ VAR_17 ;
 scalar_t__ VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 int VAR_22 ;
 int VAR_23 ;
 int VAR_24 ;
 int VAR_25 ;
 int VAR_26 ;
 int VAR_27 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int ,scalar_t__,int) ;
 struct rt5645_priv* FUNC_3 (struct snd_soc_component*) ;
 int FUNC_4 (struct snd_soc_component*,int ,int,int) ;
 int FUNC_5 (struct snd_soc_component*,int ,int) ;

__attribute__((used)) static void FUNC_6(struct snd_soc_component *VAR_28, int VAR_29)
{
 static int VAR_30;
 struct rt5645_priv *VAR_31 = FUNC_3(VAR_28);

 if (VAR_29) {
  if (VAR_30 <= 0) {
   if (VAR_31->codec_type == VAR_0) {
    FUNC_5(VAR_28, VAR_3, 0x3100);
    FUNC_5(VAR_28, VAR_1,
     0x0e06);
    FUNC_5(VAR_28, VAR_2, 0x000d);
    FUNC_2(VAR_31->regmap, VAR_18 +
     VAR_9, 0x9f01);
    FUNC_1(20);
    FUNC_4(VAR_28, VAR_2,
     VAR_8, VAR_7);
    FUNC_2(VAR_31->regmap, VAR_18 +
     0x3e, 0x7400);
    FUNC_5(VAR_28, VAR_4, 0x0737);
    FUNC_2(VAR_31->regmap, VAR_18 +
     VAR_17, 0xfc00);
    FUNC_5(VAR_28, VAR_3, 0x1140);
    FUNC_1(90);
    VAR_31->hp_on = 1;
   } else {

    FUNC_4(VAR_28, VAR_3,
     VAR_6, VAR_5);
    FUNC_5(VAR_28, VAR_2, 0x000d);
    FUNC_2(VAR_31->regmap, VAR_18 +
     VAR_9, 0x9f01);
    FUNC_0(150);

    FUNC_4(VAR_28, VAR_19,
     VAR_20 | VAR_21, 0);
    FUNC_4(VAR_28, VAR_27,
     VAR_25 | VAR_26,
     VAR_25 | VAR_26);
    FUNC_4(VAR_28, VAR_19,
     VAR_23 | VAR_24 |
     VAR_22,
     VAR_23 | VAR_24 |
     VAR_22);
    FUNC_0(5);
    FUNC_4(VAR_28, VAR_19,
     VAR_20 | VAR_21,
     VAR_20 | VAR_21);

    FUNC_4(VAR_28, VAR_2,
     VAR_8 | VAR_16,
     VAR_7 | VAR_15);
    FUNC_2(VAR_31->regmap, VAR_18 +
     0x14, 0x1aaa);
    FUNC_2(VAR_31->regmap, VAR_18 +
     0x24, 0x0430);
   }
  }
  VAR_30++;
 } else {
  VAR_30--;
  if (VAR_30 <= 0) {
   if (VAR_31->codec_type == VAR_0) {
    FUNC_2(VAR_31->regmap, VAR_18 +
     0x3e, 0x7400);
    FUNC_5(VAR_28, VAR_4, 0x0737);
    FUNC_2(VAR_31->regmap, VAR_18 +
     VAR_17, 0xfc00);
    FUNC_5(VAR_28, VAR_3, 0x1140);
    FUNC_1(100);
    FUNC_5(VAR_28, VAR_2, 0x0001);

   } else {
    FUNC_4(VAR_28, VAR_2,
     VAR_16 |
     VAR_11 |
     VAR_13,
     VAR_14 |
     VAR_10 |
     VAR_12);

    FUNC_5(VAR_28, VAR_2, 0x0000);
    FUNC_4(VAR_28, VAR_19,
     VAR_23 | VAR_24 |
     VAR_22, 0);
    FUNC_4(VAR_28, VAR_3,
     VAR_6, 0);
   }
  }
 }
}
