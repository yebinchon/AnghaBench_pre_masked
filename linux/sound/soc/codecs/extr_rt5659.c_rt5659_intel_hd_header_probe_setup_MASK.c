
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rt5659_priv {int hda_hp_plugged; int hda_mic_plugged; int regmap; } ;


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
 int FUNC_0 (int) ;
 int FUNC_1 (int ,int ,int*) ;
 int FUNC_2 (int ,int ,int,int) ;
 int FUNC_3 (int ,int ,int) ;

__attribute__((used)) static void FUNC_4(struct rt5659_priv *VAR_19)
{
 int VAR_20;

 FUNC_1(VAR_19->regmap, VAR_4, &VAR_20);
 if (!(VAR_20 & 0x8)) {
  VAR_19->hda_hp_plugged = 1;
  FUNC_2(VAR_19->regmap, VAR_7,
   0x10, 0x0);
 } else {
  FUNC_2(VAR_19->regmap, VAR_7,
   0x10, 0x10);
 }

 FUNC_2(VAR_19->regmap, VAR_9,
  VAR_18 | VAR_14,
  VAR_18 | VAR_14);
 FUNC_0(20);
 FUNC_2(VAR_19->regmap, VAR_9,
  VAR_12, VAR_12);

 FUNC_2(VAR_19->regmap, VAR_11, VAR_13,
  VAR_13);
 FUNC_2(VAR_19->regmap, VAR_10, VAR_15,
  VAR_15);
 FUNC_2(VAR_19->regmap, VAR_17, VAR_16,
  VAR_16);
 FUNC_0(20);

 FUNC_2(VAR_19->regmap, VAR_1,
  VAR_3, VAR_2);
 FUNC_1(VAR_19->regmap, VAR_0, &VAR_20);
 FUNC_3(VAR_19->regmap, VAR_0, VAR_20);
 FUNC_1(VAR_19->regmap, VAR_0, &VAR_20);

 if (VAR_20 & 0x2000) {
  VAR_19->hda_mic_plugged = 1;
  FUNC_2(VAR_19->regmap, VAR_8,
   0x2, 0x2);
 } else {
  FUNC_2(VAR_19->regmap, VAR_8,
   0x2, 0x0);
 }

 FUNC_2(VAR_19->regmap, VAR_8,
  VAR_6, VAR_5);
}
