
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct cs35l36_private {int regmap; int dev; } ;
typedef int irqreturn_t ;


 int FUNC_0 (unsigned int*) ;
 unsigned int VAR_0 ;
 unsigned int VAR_1 ;
 unsigned int VAR_2 ;
 unsigned int VAR_3 ;
 unsigned int VAR_4 ;
 unsigned int VAR_5 ;
 unsigned int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 unsigned int VAR_11 ;
 unsigned int VAR_12 ;
 unsigned int VAR_13 ;
 unsigned int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int FUNC_1 (int ,char*) ;
 int FUNC_2 (int ,int ,unsigned int*,int ) ;
 int FUNC_3 (int ,int ,unsigned int,unsigned int) ;

__attribute__((used)) static irqreturn_t FUNC_4(int VAR_17, void *VAR_18)
{
 struct cs35l36_private *VAR_19 = VAR_18;
 unsigned int VAR_20[4];
 unsigned int VAR_21[4];
 int VAR_22 = VAR_16;


 FUNC_2(VAR_19->regmap, VAR_8, VAR_20,
    FUNC_0(VAR_20));

 FUNC_2(VAR_19->regmap, VAR_7, VAR_21,
    FUNC_0(VAR_21));


 if (!(VAR_20[0] & ~VAR_21[0]) && !(VAR_20[1] & ~VAR_21[1]) &&
  !(VAR_20[2] & ~VAR_21[2]) && !(VAR_20[3] & ~VAR_21[3])) {
  return VAR_16;
 }






 if (VAR_20[2] & VAR_0) {
  FUNC_1(VAR_19->dev, "Amp short error\n");
  FUNC_3(VAR_19->regmap, VAR_10,
       VAR_1, 0);
  FUNC_3(VAR_19->regmap, VAR_10,
       VAR_1,
       VAR_1);
  FUNC_3(VAR_19->regmap, VAR_10,
       VAR_1, 0);
  FUNC_3(VAR_19->regmap, VAR_9,
       VAR_0,
       VAR_0);
  VAR_22 = VAR_15;
 }

 if (VAR_20[0] & VAR_13) {
  FUNC_1(VAR_19->dev, "Over temperature warning\n");
  FUNC_3(VAR_19->regmap, VAR_10,
       VAR_14, 0);
  FUNC_3(VAR_19->regmap, VAR_10,
       VAR_14,
       VAR_14);
  FUNC_3(VAR_19->regmap, VAR_10,
       VAR_14, 0);
  FUNC_3(VAR_19->regmap, VAR_8,
       VAR_13, VAR_13);
  VAR_22 = VAR_15;
 }

 if (VAR_20[0] & VAR_11) {
  FUNC_1(VAR_19->dev, "Over temperature error\n");
  FUNC_3(VAR_19->regmap, VAR_10,
       VAR_12, 0);
  FUNC_3(VAR_19->regmap, VAR_10,
       VAR_12, VAR_12);
  FUNC_3(VAR_19->regmap, VAR_10,
       VAR_12, 0);
  FUNC_3(VAR_19->regmap, VAR_8,
       VAR_11, VAR_11);
  VAR_22 = VAR_15;
 }

 if (VAR_20[0] & VAR_3) {
  FUNC_1(VAR_19->dev, "VBST Over Voltage error\n");
  FUNC_3(VAR_19->regmap, VAR_10,
       VAR_12, 0);
  FUNC_3(VAR_19->regmap, VAR_10,
       VAR_12, VAR_12);
  FUNC_3(VAR_19->regmap, VAR_10,
       VAR_12, 0);
  FUNC_3(VAR_19->regmap, VAR_8,
       VAR_3, VAR_3);
  VAR_22 = VAR_15;
 }

 if (VAR_20[0] & VAR_2) {
  FUNC_1(VAR_19->dev, "DCM VBST Under Voltage Error\n");
  FUNC_3(VAR_19->regmap, VAR_10,
       VAR_6, 0);
  FUNC_3(VAR_19->regmap, VAR_10,
       VAR_6,
       VAR_6);
  FUNC_3(VAR_19->regmap, VAR_10,
       VAR_6, 0);
  FUNC_3(VAR_19->regmap, VAR_8,
       VAR_2,
       VAR_2);
  VAR_22 = VAR_15;
 }

 if (VAR_20[0] & VAR_4) {
  FUNC_1(VAR_19->dev, "LBST SHORT error!\n");
  FUNC_3(VAR_19->regmap, VAR_10,
       VAR_5, 0);
  FUNC_3(VAR_19->regmap, VAR_10,
       VAR_5,
       VAR_5);
  FUNC_3(VAR_19->regmap, VAR_10,
       VAR_5, 0);
  FUNC_3(VAR_19->regmap, VAR_8,
       VAR_4,
       VAR_4);
  VAR_22 = VAR_15;
 }

 return VAR_22;
}
