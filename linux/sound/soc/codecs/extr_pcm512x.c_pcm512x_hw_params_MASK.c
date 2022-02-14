
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_soc_dai {struct snd_soc_component* component; } ;
struct snd_soc_component {int dev; } ;
struct snd_pcm_substream {int dummy; } ;
struct snd_pcm_hw_params {int dummy; } ;
struct pcm512x_priv {int fmt; int pll_out; int pll_in; int regmap; } ;


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
 int VAR_21 ;
 int VAR_22 ;
 int VAR_23 ;
 int VAR_24 ;
 int VAR_25 ;
 int VAR_26 ;
 int VAR_27 ;
 int VAR_28 ;
 int VAR_29 ;
 int VAR_30 ;
 int VAR_31 ;
 int VAR_32 ;
 int VAR_33 ;
 int VAR_34 ;
 int VAR_35 ;
 int VAR_36 ;
 int VAR_37 ;
 int VAR_38 ;
 int VAR_39 ;
 int VAR_40 ;



 int VAR_41 ;
 int FUNC_0 (int ,char*,int ,int ) ;
 int FUNC_1 (int ,char*,int,...) ;
 int FUNC_2 (struct snd_pcm_hw_params*) ;
 int FUNC_3 (struct snd_pcm_hw_params*) ;
 int FUNC_4 (struct snd_pcm_hw_params*) ;
 int FUNC_5 (struct snd_soc_dai*,struct snd_pcm_hw_params*) ;
 int FUNC_6 (int ,int,int,int) ;
 int FUNC_7 (int ,int ,int) ;
 struct pcm512x_priv* FUNC_8 (struct snd_soc_component*) ;

__attribute__((used)) static int FUNC_9(struct snd_pcm_substream *VAR_42,
        struct snd_pcm_hw_params *VAR_43,
        struct snd_soc_dai *VAR_44)
{
 struct snd_soc_component *VAR_45 = VAR_44->component;
 struct pcm512x_priv *VAR_46 = FUNC_8(VAR_45);
 int VAR_47;
 int VAR_48;
 int VAR_49;
 int VAR_50;
 int VAR_51;

 FUNC_0(VAR_45->dev, "hw_params %u Hz, %u channels\n",
  FUNC_3(VAR_43),
  FUNC_2(VAR_43));

 switch (FUNC_4(VAR_43)) {
 case 16:
  VAR_47 = VAR_2;
  break;
 case 20:
  VAR_47 = VAR_3;
  break;
 case 24:
  VAR_47 = VAR_4;
  break;
 case 32:
  VAR_47 = VAR_5;
  break;
 default:
  FUNC_1(VAR_45->dev, "Bad frame size: %d\n",
   FUNC_4(VAR_43));
  return -VAR_0;
 }

 switch (VAR_46->fmt & VAR_41) {
 case 128:
  VAR_51 = FUNC_6(VAR_46->regmap,
      VAR_8,
      VAR_7
      | VAR_6 | VAR_28,
      0);
  if (VAR_51 != 0) {
   FUNC_1(VAR_45->dev,
    "Failed to enable slave mode: %d\n", VAR_51);
   return VAR_51;
  }

  VAR_51 = FUNC_6(VAR_46->regmap, VAR_10,
      VAR_9, 0);
  if (VAR_51 != 0) {
   FUNC_1(VAR_45->dev,
    "Failed to enable clock divider autoset: %d\n",
    VAR_51);
   return VAR_51;
  }
  return 0;
 case 130:
  VAR_49 = VAR_6 | VAR_28;
  VAR_50 = VAR_34 | VAR_33;
  break;
 case 129:
  VAR_49 = VAR_6;
  VAR_50 = VAR_33;
  break;
 default:
  return -VAR_0;
 }

 VAR_51 = FUNC_6(VAR_46->regmap, VAR_21,
     VAR_1, VAR_47);
 if (VAR_51 != 0) {
  FUNC_1(VAR_45->dev, "Failed to set frame size: %d\n", VAR_51);
  return VAR_51;
 }

 if (VAR_46->pll_out) {
  VAR_51 = FUNC_7(VAR_46->regmap, VAR_11, 0x11);
  if (VAR_51 != 0) {
   FUNC_1(VAR_45->dev, "Failed to set FLEX_A: %d\n", VAR_51);
   return VAR_51;
  }

  VAR_51 = FUNC_7(VAR_46->regmap, VAR_12, 0xff);
  if (VAR_51 != 0) {
   FUNC_1(VAR_45->dev, "Failed to set FLEX_B: %d\n", VAR_51);
   return VAR_51;
  }

  VAR_51 = FUNC_6(VAR_46->regmap, VAR_10,
      VAR_25 | VAR_22
      | VAR_26 | VAR_23
      | VAR_24 | VAR_9
      | VAR_27,
      VAR_25 | VAR_22
      | VAR_26 | VAR_23
      | VAR_9);
  if (VAR_51 != 0) {
   FUNC_1(VAR_45->dev,
    "Failed to ignore auto-clock failures: %d\n",
    VAR_51);
   return VAR_51;
  }
 } else {
  VAR_51 = FUNC_6(VAR_46->regmap, VAR_10,
      VAR_25 | VAR_22
      | VAR_26 | VAR_23
      | VAR_24 | VAR_9
      | VAR_27,
      VAR_25 | VAR_22
      | VAR_26 | VAR_23
      | VAR_9 | VAR_27);
  if (VAR_51 != 0) {
   FUNC_1(VAR_45->dev,
    "Failed to ignore auto-clock failures: %d\n",
    VAR_51);
   return VAR_51;
  }

  VAR_51 = FUNC_6(VAR_46->regmap, VAR_31,
      VAR_30, 0);
  if (VAR_51 != 0) {
   FUNC_1(VAR_45->dev, "Failed to disable pll: %d\n", VAR_51);
   return VAR_51;
  }
 }

 VAR_51 = FUNC_5(VAR_44, VAR_43);
 if (VAR_51 != 0)
  return VAR_51;

 if (VAR_46->pll_out) {
  VAR_51 = FUNC_6(VAR_46->regmap, VAR_32,
      VAR_38, VAR_39);
  if (VAR_51 != 0) {
   FUNC_1(VAR_45->dev,
    "Failed to set gpio as pllref: %d\n", VAR_51);
   return VAR_51;
  }

  VAR_48 = VAR_18 + VAR_46->pll_in - 1;
  VAR_51 = FUNC_6(VAR_46->regmap, VAR_16,
      VAR_17, VAR_48);
  if (VAR_51 != 0) {
   FUNC_1(VAR_45->dev,
    "Failed to set gpio %d as pllin: %d\n",
    VAR_46->pll_in, VAR_51);
   return VAR_51;
  }

  VAR_51 = FUNC_6(VAR_46->regmap, VAR_31,
      VAR_30, VAR_30);
  if (VAR_51 != 0) {
   FUNC_1(VAR_45->dev, "Failed to enable pll: %d\n", VAR_51);
   return VAR_51;
  }
 }

 VAR_51 = FUNC_6(VAR_46->regmap, VAR_8,
     VAR_7 | VAR_6 | VAR_28,
     VAR_49);
 if (VAR_51 != 0) {
  FUNC_1(VAR_45->dev, "Failed to enable clock output: %d\n", VAR_51);
  return VAR_51;
 }

 VAR_51 = FUNC_6(VAR_46->regmap, VAR_29,
     VAR_34 | VAR_33,
     VAR_50);
 if (VAR_51 != 0) {
  FUNC_1(VAR_45->dev, "Failed to enable master mode: %d\n", VAR_51);
  return VAR_51;
 }

 if (VAR_46->pll_out) {
  VAR_48 = VAR_13 << (VAR_46->pll_out - 1);
  VAR_51 = FUNC_6(VAR_46->regmap, VAR_14,
      VAR_48, VAR_48);
  if (VAR_51 != 0) {
   FUNC_1(VAR_45->dev, "Failed to enable gpio %d: %d\n",
    VAR_46->pll_out, VAR_51);
   return VAR_51;
  }

  VAR_48 = VAR_15 + VAR_46->pll_out - 1;
  VAR_51 = FUNC_6(VAR_46->regmap, VAR_48,
      VAR_19, VAR_20);
  if (VAR_51 != 0) {
   FUNC_1(VAR_45->dev, "Failed to output pll on %d: %d\n",
    VAR_51, VAR_46->pll_out);
   return VAR_51;
  }
 }

 VAR_51 = FUNC_6(VAR_46->regmap, VAR_40,
     VAR_35, VAR_36);
 if (VAR_51 != 0) {
  FUNC_1(VAR_45->dev, "Failed to halt clocks: %d\n", VAR_51);
  return VAR_51;
 }

 VAR_51 = FUNC_6(VAR_46->regmap, VAR_40,
     VAR_35, VAR_37);
 if (VAR_51 != 0) {
  FUNC_1(VAR_45->dev, "Failed to resume clocks: %d\n", VAR_51);
  return VAR_51;
 }

 return 0;
}
