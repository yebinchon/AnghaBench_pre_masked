
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_soc_component {int dev; } ;
struct cs43130_private {int mclk_int_src; int mclk_int; int pll_bypass; int regmap; int pll_rdy; int xtal_rdy; int xtal_ibias; } ;
typedef enum cs43130_mclk_src_sel { ____Placeholder_cs43130_mclk_src_sel } cs43130_mclk_src_sel ;


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
 int FUNC_0 (int ,char*,...) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int ,int ,int ,int) ;
 int FUNC_3 (int *) ;
 struct cs43130_private* FUNC_4 (struct snd_soc_component*) ;
 int FUNC_5 (int,int) ;
 int FUNC_6 (int *,int ) ;

__attribute__((used)) static int FUNC_7(struct snd_soc_component *VAR_20,
     enum cs43130_mclk_src_sel VAR_21)
{
 int VAR_22;
 struct cs43130_private *VAR_23 = FUNC_4(VAR_20);
 int VAR_24;

 if (VAR_21 == VAR_23->mclk_int_src) {

  return 0;
 }

 switch (VAR_23->mclk_int) {
 case 132:
  VAR_24 = VAR_1;
  break;
 case 131:
  VAR_24 = VAR_2;
  break;
 default:
  FUNC_0(VAR_20->dev, "Invalid MCLK INT freq: %u\n", VAR_23->mclk_int);
  return -VAR_18;
 }

 switch (VAR_21) {
 case 130:
  VAR_23->pll_bypass = 1;
  VAR_23->mclk_int_src = 130;
  if (VAR_23->xtal_ibias == VAR_17) {
   FUNC_2(VAR_23->regmap, VAR_13,
        VAR_9,
        1 << VAR_10);
  } else {
   FUNC_3(&VAR_23->xtal_rdy);
   FUNC_2(VAR_23->regmap, VAR_0,
        VAR_15, 0);
   FUNC_2(VAR_23->regmap, VAR_13,
        VAR_9, 0);
   VAR_22 = FUNC_6(&VAR_23->xtal_rdy,
         FUNC_1(100));
   FUNC_2(VAR_23->regmap, VAR_0,
        VAR_15,
        1 << VAR_16);
   if (VAR_22 == 0) {
    FUNC_0(VAR_20->dev, "Timeout waiting for XTAL_READY interrupt\n");
    return -VAR_19;
   }
  }

  FUNC_2(VAR_23->regmap, VAR_14,
       VAR_5,
       VAR_21 << VAR_6);
  FUNC_2(VAR_23->regmap, VAR_14,
       VAR_3,
       VAR_24 << VAR_4);
  FUNC_5(150, 200);

  FUNC_2(VAR_23->regmap, VAR_13,
       VAR_7,
       1 << VAR_8);
  break;
 case 129:
  VAR_23->pll_bypass = 0;
  VAR_23->mclk_int_src = 129;
  if (VAR_23->xtal_ibias == VAR_17) {
   FUNC_2(VAR_23->regmap, VAR_13,
        VAR_9,
        1 << VAR_10);
  } else {
   FUNC_3(&VAR_23->xtal_rdy);
   FUNC_2(VAR_23->regmap, VAR_0,
        VAR_15, 0);
   FUNC_2(VAR_23->regmap, VAR_13,
        VAR_9, 0);
   VAR_22 = FUNC_6(&VAR_23->xtal_rdy,
         FUNC_1(100));
   FUNC_2(VAR_23->regmap, VAR_0,
        VAR_15,
        1 << VAR_16);
   if (VAR_22 == 0) {
    FUNC_0(VAR_20->dev, "Timeout waiting for XTAL_READY interrupt\n");
    return -VAR_19;
   }
  }

  FUNC_3(&VAR_23->pll_rdy);
  FUNC_2(VAR_23->regmap, VAR_0,
       VAR_11, 0);
  FUNC_2(VAR_23->regmap, VAR_13,
       VAR_7, 0);
  VAR_22 = FUNC_6(&VAR_23->pll_rdy,
        FUNC_1(100));
  FUNC_2(VAR_23->regmap, VAR_0,
       VAR_11,
       1 << VAR_12);
  if (VAR_22 == 0) {
   FUNC_0(VAR_20->dev, "Timeout waiting for PLL_READY interrupt\n");
   return -VAR_19;
  }

  FUNC_2(VAR_23->regmap, VAR_14,
       VAR_5,
       VAR_21 << VAR_6);
  FUNC_2(VAR_23->regmap, VAR_14,
       VAR_3,
       VAR_24 << VAR_4);
  FUNC_5(150, 200);
  break;
 case 128:
  VAR_23->mclk_int_src = 128;

  FUNC_2(VAR_23->regmap, VAR_14,
       VAR_5,
       VAR_21 << VAR_6);
  FUNC_2(VAR_23->regmap, VAR_14,
       VAR_3,
       VAR_1 << VAR_4);
  FUNC_5(150, 200);

  FUNC_2(VAR_23->regmap, VAR_13,
       VAR_9,
       1 << VAR_10);
  FUNC_2(VAR_23->regmap, VAR_13,
       VAR_7,
       1 << VAR_8);
  break;
 default:
  FUNC_0(VAR_20->dev, "Invalid MCLK source value\n");
  return -VAR_18;
 }

 return 0;
}
