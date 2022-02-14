
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_soc_component {int dev; } ;
struct cs35l34_private {int regmap; struct snd_soc_component* component; } ;
typedef int irqreturn_t ;


 unsigned int VAR_0 ;
 unsigned int VAR_1 ;
 unsigned int VAR_2 ;
 unsigned int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 unsigned int VAR_13 ;
 unsigned int VAR_14 ;
 int VAR_15 ;
 unsigned int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 int VAR_22 ;
 int VAR_23 ;
 int VAR_24 ;
 int VAR_25 ;
 int FUNC_0 (int ,char*) ;
 int FUNC_1 (int ,char*) ;
 int FUNC_2 (int ,char*) ;
 int FUNC_3 (int ,int ,unsigned int*) ;
 int FUNC_4 (int ,int ,int ,int ) ;

__attribute__((used)) static irqreturn_t FUNC_5(int VAR_26, void *VAR_27)
{
 struct cs35l34_private *VAR_28 = VAR_27;
 struct snd_soc_component *VAR_29 = VAR_28->component;
 unsigned int VAR_30, VAR_31, VAR_32, VAR_33;
 unsigned int VAR_34, VAR_35, VAR_36, VAR_37, VAR_38;



 FUNC_3(VAR_28->regmap, VAR_12, &VAR_33);
 FUNC_3(VAR_28->regmap, VAR_11, &VAR_32);
 FUNC_3(VAR_28->regmap, VAR_10, &VAR_31);
 FUNC_3(VAR_28->regmap, VAR_9, &VAR_30);

 FUNC_3(VAR_28->regmap, VAR_8, &VAR_37);
 FUNC_3(VAR_28->regmap, VAR_7, &VAR_36);
 FUNC_3(VAR_28->regmap, VAR_6, &VAR_35);
 FUNC_3(VAR_28->regmap, VAR_5, &VAR_34);

 if (!(VAR_30 & ~VAR_34) && !(VAR_31 & ~VAR_35) && !(VAR_32 & ~VAR_36)
  && !(VAR_33 & ~VAR_37))
  return VAR_25;

 FUNC_3(VAR_28->regmap, VAR_9, &VAR_38);

 if (VAR_30 & VAR_3) {
  FUNC_2(VAR_29->dev, "Cal error\n");


  if (!(VAR_38 & VAR_3)) {
   FUNC_1(VAR_29->dev, "Cal error release\n");
   FUNC_4(VAR_28->regmap,
     VAR_20,
     VAR_4, 0);
   FUNC_4(VAR_28->regmap,
     VAR_20,
     VAR_4,
     VAR_4);
   FUNC_4(VAR_28->regmap,
     VAR_20,
     VAR_4, 0);

  }
 }

 if (VAR_30 & VAR_0)
  FUNC_2(VAR_29->dev, "Alive error\n");

 if (VAR_30 & VAR_1) {
  FUNC_0(VAR_29->dev, "Amp short error\n");


  if (!(VAR_38 & VAR_1)) {
   FUNC_1(VAR_29->dev,
    "Amp short error release\n");
   FUNC_4(VAR_28->regmap,
     VAR_20,
     VAR_23, 0);
   FUNC_4(VAR_28->regmap,
     VAR_20,
     VAR_23,
     VAR_23);
   FUNC_4(VAR_28->regmap,
     VAR_20,
     VAR_23, 0);
  }
 }

 if (VAR_30 & VAR_16) {
  FUNC_0(VAR_29->dev, "Over temperature warning\n");


  if (!(VAR_38 & VAR_16)) {
   FUNC_1(VAR_29->dev,
    "Over temperature warning release\n");
   FUNC_4(VAR_28->regmap,
     VAR_20,
     VAR_17, 0);
   FUNC_4(VAR_28->regmap,
     VAR_20,
     VAR_17,
     VAR_17);
   FUNC_4(VAR_28->regmap,
     VAR_20,
     VAR_17, 0);
  }
 }

 if (VAR_30 & VAR_14) {
  FUNC_0(VAR_29->dev, "Over temperature error\n");


  if (!(VAR_38 & VAR_14)) {
   FUNC_1(VAR_29->dev,
    "Over temperature error release\n");
   FUNC_4(VAR_28->regmap,
     VAR_20,
     VAR_15, 0);
   FUNC_4(VAR_28->regmap,
     VAR_20,
     VAR_15,
     VAR_15);
   FUNC_4(VAR_28->regmap,
     VAR_20,
     VAR_15, 0);
  }
 }

 if (VAR_32 & VAR_2) {
  FUNC_0(VAR_29->dev, "VBST too high error; powering off!\n");
  FUNC_4(VAR_28->regmap, VAR_22,
    VAR_19, VAR_19);
  FUNC_4(VAR_28->regmap, VAR_21,
    VAR_18, VAR_18);
 }

 if (VAR_32 & VAR_13) {
  FUNC_0(VAR_29->dev, "LBST short error; powering off!\n");
  FUNC_4(VAR_28->regmap, VAR_22,
    VAR_19, VAR_19);
  FUNC_4(VAR_28->regmap, VAR_21,
    VAR_18, VAR_18);
 }

 return VAR_24;
}
