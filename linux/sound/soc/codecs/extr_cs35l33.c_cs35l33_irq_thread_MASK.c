
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_soc_component {int dev; } ;
struct cs35l33_private {int amp_cal; int regmap; struct snd_soc_component* component; } ;
typedef int irqreturn_t ;


 unsigned int VAR_0 ;
 int VAR_1 ;
 unsigned int VAR_2 ;
 int VAR_3 ;
 unsigned int VAR_4 ;
 int VAR_5 ;
 unsigned int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 unsigned int VAR_11 ;
 unsigned int VAR_12 ;
 int VAR_13 ;
 unsigned int VAR_14 ;
 int VAR_15 ;
 unsigned int VAR_16 ;
 unsigned int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int FUNC_0 (int ,char*) ;
 int FUNC_1 (int ,char*) ;
 int FUNC_2 (int ,char*) ;
 int FUNC_3 (int ,int ,unsigned int*) ;
 int FUNC_4 (int ,int ,int ,int ) ;

__attribute__((used)) static irqreturn_t FUNC_5(int VAR_20, void *VAR_21)
{
 struct cs35l33_private *VAR_22 = VAR_21;
 struct snd_soc_component *VAR_23 = VAR_22->component;
 unsigned int VAR_24, VAR_25, VAR_26, VAR_27, VAR_28;

 FUNC_3(VAR_22->regmap, VAR_10,
  &VAR_25);
 FUNC_3(VAR_22->regmap, VAR_9,
  &VAR_24);
 FUNC_3(VAR_22->regmap, VAR_8, &VAR_28);
 FUNC_3(VAR_22->regmap, VAR_7, &VAR_27);




 if (!(VAR_24 & ~VAR_27) && !(VAR_25 & ~VAR_28))
  return VAR_19;

 FUNC_3(VAR_22->regmap, VAR_9,
  &VAR_26);



 if (VAR_24 & VAR_2) {
  FUNC_0(VAR_23->dev, "Amp short error\n");
  if (!(VAR_26 & VAR_2)) {
   FUNC_1(VAR_23->dev,
    "Amp short error release\n");
   FUNC_4(VAR_22->regmap,
    VAR_1,
    VAR_3, 0);
   FUNC_4(VAR_22->regmap,
    VAR_1,
    VAR_3,
    VAR_3);
   FUNC_4(VAR_22->regmap,
    VAR_1, VAR_3,
    0);
  }
 }

 if (VAR_24 & VAR_4) {
  FUNC_2(VAR_23->dev, "Cal error\n");


  VAR_22->amp_cal = 0;

  if (!(VAR_26 & VAR_4)) {
   FUNC_1(VAR_23->dev, "Cal error release\n");
   FUNC_4(VAR_22->regmap,
    VAR_1, VAR_5,
    0);
   FUNC_4(VAR_22->regmap,
    VAR_1, VAR_5,
    VAR_5);
   FUNC_4(VAR_22->regmap,
    VAR_1, VAR_5,
    0);
  }
 }

 if (VAR_24 & VAR_12) {
  FUNC_0(VAR_23->dev, "Over temperature error\n");
  if (!(VAR_26 & VAR_12)) {
   FUNC_1(VAR_23->dev,
    "Over temperature error release\n");
   FUNC_4(VAR_22->regmap,
    VAR_1, VAR_13, 0);
   FUNC_4(VAR_22->regmap,
    VAR_1, VAR_13,
    VAR_13);
   FUNC_4(VAR_22->regmap,
    VAR_1, VAR_13, 0);
  }
 }

 if (VAR_24 & VAR_14) {
  FUNC_2(VAR_23->dev, "Over temperature warning\n");
  if (!(VAR_26 & VAR_14)) {
   FUNC_1(VAR_23->dev,
    "Over temperature warning release\n");
   FUNC_4(VAR_22->regmap,
    VAR_1, VAR_15, 0);
   FUNC_4(VAR_22->regmap,
    VAR_1, VAR_15,
    VAR_15);
   FUNC_4(VAR_22->regmap,
    VAR_1, VAR_15, 0);
  }
 }
 if (VAR_0 & VAR_24)
  FUNC_2(VAR_23->dev, "ERROR: ADSPCLK Interrupt\n");

 if (VAR_11 & VAR_24)
  FUNC_2(VAR_23->dev, "ERROR: MCLK Interrupt\n");

 if (VAR_16 & VAR_25)
  FUNC_2(VAR_23->dev,
   "ERROR: VMON Overflow Interrupt\n");

 if (VAR_6 & VAR_25)
  FUNC_2(VAR_23->dev,
   "ERROR: IMON Overflow Interrupt\n");

 if (VAR_17 & VAR_25)
  FUNC_2(VAR_23->dev,
   "ERROR: VPMON Overflow Interrupt\n");

 return VAR_18;
}
