
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_soc_dai {struct snd_soc_component* component; struct device* dev; } ;
struct snd_soc_component {struct device* dev; } ;
struct snd_pcm_hw_params {int dummy; } ;
struct pcm512x_priv {int bclk_ratio; int pll_p; int pll_j; int pll_d; int pll_r; unsigned long real_pll; int pll_in; int regmap; int sclk; int pll_out; } ;
struct device {int dummy; } ;


 int FUNC_0 (unsigned long,unsigned long) ;
 int FUNC_1 (unsigned long,int) ;
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
 unsigned long FUNC_2 (int ) ;
 int FUNC_3 (struct device*,char*,...) ;
 int FUNC_4 (struct device*,char*,...) ;
 int FUNC_5 (struct snd_pcm_hw_params*) ;
 unsigned long FUNC_6 (struct pcm512x_priv*,int) ;
 unsigned long FUNC_7 (struct pcm512x_priv*) ;
 int FUNC_8 (struct snd_soc_dai*,unsigned long,unsigned long) ;
 unsigned long FUNC_9 (struct snd_soc_dai*,unsigned long) ;
 unsigned long FUNC_10 (struct pcm512x_priv*,unsigned long) ;
 unsigned long FUNC_11 (struct snd_soc_dai*,unsigned long,unsigned long) ;
 int FUNC_12 (int ,int ,int ,int) ;
 int FUNC_13 (int ,int ,int) ;
 struct pcm512x_priv* FUNC_14 (struct snd_soc_component*) ;
 int FUNC_15 (struct snd_pcm_hw_params*) ;
 int FUNC_16 (struct snd_pcm_hw_params*) ;

__attribute__((used)) static int FUNC_17(struct snd_soc_dai *VAR_27,
    struct snd_pcm_hw_params *VAR_28)
{
 struct device *VAR_29 = VAR_27->dev;
 struct snd_soc_component *VAR_30 = VAR_27->component;
 struct pcm512x_priv *VAR_31 = FUNC_14(VAR_30);
 unsigned long VAR_32 = 0;
 unsigned long VAR_33;
 unsigned long VAR_34;
 unsigned long VAR_35;
 unsigned long VAR_36;
 unsigned long VAR_37;
 unsigned long VAR_38;
 unsigned long VAR_39;
 int VAR_40;
 int VAR_41;
 int VAR_42;
 int VAR_43;
 unsigned long VAR_44;
 int VAR_45;
 int VAR_46;
 int VAR_47;
 int VAR_48;
 int VAR_49;
 int VAR_50;

 if (VAR_31->bclk_ratio > 0) {
  VAR_41 = VAR_31->bclk_ratio;
 } else {
  VAR_41 = FUNC_16(VAR_28);

  if (VAR_41 == 0) {
   FUNC_4(VAR_29, "No LRCLK?\n");
   return -VAR_0;
  }
 }

 if (!VAR_31->pll_out) {
  VAR_34 = FUNC_2(VAR_31->sclk);
  VAR_36 = FUNC_5(VAR_28) * VAR_41;
  VAR_40 = FUNC_0(VAR_34, VAR_36);

  VAR_35 = VAR_34;
 } else {
  VAR_47 = FUNC_15(VAR_28);
  if (VAR_47 < 0) {
   FUNC_4(VAR_29, "Failed to find suitable BCLK: %d\n", VAR_47);
   return VAR_47;
  }
  if (VAR_47 == 0) {
   FUNC_4(VAR_29, "No BCLK?\n");
   return -VAR_0;
  }
  VAR_36 = VAR_47;

  VAR_32 = FUNC_2(VAR_31->sclk);

  VAR_34 = FUNC_9(VAR_27, VAR_36);
  if (!VAR_34)
   return -VAR_0;
  VAR_33 = 4 * VAR_34;

  VAR_47 = FUNC_8(VAR_27, VAR_32, VAR_33);
  if (VAR_47 != 0)
   return VAR_47;

  VAR_47 = FUNC_13(VAR_31->regmap,
       VAR_19, VAR_31->pll_p - 1);
  if (VAR_47 != 0) {
   FUNC_4(VAR_29, "Failed to write PLL P: %d\n", VAR_47);
   return VAR_47;
  }

  VAR_47 = FUNC_13(VAR_31->regmap,
       VAR_20, VAR_31->pll_j);
  if (VAR_47 != 0) {
   FUNC_4(VAR_29, "Failed to write PLL J: %d\n", VAR_47);
   return VAR_47;
  }

  VAR_47 = FUNC_13(VAR_31->regmap,
       VAR_21, VAR_31->pll_d >> 8);
  if (VAR_47 != 0) {
   FUNC_4(VAR_29, "Failed to write PLL D msb: %d\n", VAR_47);
   return VAR_47;
  }

  VAR_47 = FUNC_13(VAR_31->regmap,
       VAR_22, VAR_31->pll_d & 0xff);
  if (VAR_47 != 0) {
   FUNC_4(VAR_29, "Failed to write PLL D lsb: %d\n", VAR_47);
   return VAR_47;
  }

  VAR_47 = FUNC_13(VAR_31->regmap,
       VAR_23, VAR_31->pll_r - 1);
  if (VAR_47 != 0) {
   FUNC_4(VAR_29, "Failed to write PLL R: %d\n", VAR_47);
   return VAR_47;
  }

  VAR_35 = VAR_31->real_pll;

  VAR_40 = FUNC_0(VAR_34, VAR_36);
 }

 if (VAR_40 > 128) {
  FUNC_4(VAR_29, "Failed to find BCLK divider\n");
  return -VAR_0;
 }


 VAR_37 = VAR_34 / VAR_40 / VAR_41;
 VAR_38 = 16 * VAR_37;


 VAR_42 = VAR_35 > FUNC_7(VAR_31) ? 2 : 1;

 VAR_44 = FUNC_11(VAR_27, VAR_38, VAR_32);
 if (VAR_44) {





  FUNC_3(VAR_29, "using pll input as dac input\n");
  VAR_47 = FUNC_12(VAR_31->regmap, VAR_2,
      VAR_24, VAR_25);
  if (VAR_47 != 0) {
   FUNC_4(VAR_30->dev,
    "Failed to set gpio as dacref: %d\n", VAR_47);
   return VAR_47;
  }

  VAR_50 = VAR_12 + VAR_31->pll_in - 1;
  VAR_47 = FUNC_12(VAR_31->regmap, VAR_10,
      VAR_11, VAR_50);
  if (VAR_47 != 0) {
   FUNC_4(VAR_30->dev,
    "Failed to set gpio %d as dacin: %d\n",
    VAR_31->pll_in, VAR_47);
   return VAR_47;
  }

  VAR_39 = VAR_32;
 } else {

  unsigned long VAR_51 = FUNC_6(VAR_31, 6144000)
   / VAR_38;
  unsigned long VAR_52 = VAR_34 / VAR_38;

  for (; VAR_51; VAR_51--) {
   if (!(VAR_52 % VAR_51))
    break;
  }
  if (!VAR_51) {
   FUNC_4(VAR_29, "Failed to find DAC rate\n");
   return -VAR_0;
  }

  VAR_44 = VAR_51 * VAR_38;
  FUNC_3(VAR_29, "dac_rate %lu sample_rate %lu\n",
   VAR_44, VAR_37);

  VAR_47 = FUNC_12(VAR_31->regmap, VAR_2,
      VAR_24, VAR_26);
  if (VAR_47 != 0) {
   FUNC_4(VAR_30->dev,
    "Failed to set sck as dacref: %d\n", VAR_47);
   return VAR_47;
  }

  VAR_39 = VAR_34;
 }

 VAR_46 = FUNC_0(VAR_44, VAR_38);
 if (VAR_46 > 128) {
  FUNC_4(VAR_29, "Failed to find OSR divider\n");
  return -VAR_0;
 }

 VAR_43 = FUNC_0(VAR_39, VAR_44);
 if (VAR_43 > 128) {
  FUNC_4(VAR_29, "Failed to find DAC divider\n");
  return -VAR_0;
 }
 VAR_44 = VAR_39 / VAR_43;

 VAR_45 = FUNC_0(VAR_44,
        FUNC_10(VAR_31, VAR_44));
 if (VAR_45 > 128 || VAR_44 / VAR_45 > 2048000) {

  VAR_45 = FUNC_1(VAR_44, 2048000);
  if (VAR_45 > 128) {
   FUNC_4(VAR_29, "Failed to find NCP divider\n");
   return -VAR_0;
  }
 }

 VAR_48 = VAR_35 / (VAR_42 * VAR_37);

 VAR_47 = FUNC_13(VAR_31->regmap, VAR_3, VAR_42 - 1);
 if (VAR_47 != 0) {
  FUNC_4(VAR_29, "Failed to write DSP divider: %d\n", VAR_47);
  return VAR_47;
 }

 VAR_47 = FUNC_13(VAR_31->regmap, VAR_1, VAR_43 - 1);
 if (VAR_47 != 0) {
  FUNC_4(VAR_29, "Failed to write DAC divider: %d\n", VAR_47);
  return VAR_47;
 }

 VAR_47 = FUNC_13(VAR_31->regmap, VAR_17, VAR_45 - 1);
 if (VAR_47 != 0) {
  FUNC_4(VAR_29, "Failed to write NCP divider: %d\n", VAR_47);
  return VAR_47;
 }

 VAR_47 = FUNC_13(VAR_31->regmap, VAR_18, VAR_46 - 1);
 if (VAR_47 != 0) {
  FUNC_4(VAR_29, "Failed to write OSR divider: %d\n", VAR_47);
  return VAR_47;
 }

 VAR_47 = FUNC_13(VAR_31->regmap,
      VAR_15, VAR_40 - 1);
 if (VAR_47 != 0) {
  FUNC_4(VAR_29, "Failed to write BCLK divider: %d\n", VAR_47);
  return VAR_47;
 }

 VAR_47 = FUNC_13(VAR_31->regmap,
      VAR_16, VAR_41 - 1);
 if (VAR_47 != 0) {
  FUNC_4(VAR_29, "Failed to write LRCLK divider: %d\n", VAR_47);
  return VAR_47;
 }

 VAR_47 = FUNC_13(VAR_31->regmap, VAR_13, VAR_48 >> 8);
 if (VAR_47 != 0) {
  FUNC_4(VAR_29, "Failed to write IDAC msb divider: %d\n", VAR_47);
  return VAR_47;
 }

 VAR_47 = FUNC_13(VAR_31->regmap, VAR_14, VAR_48 & 0xff);
 if (VAR_47 != 0) {
  FUNC_4(VAR_29, "Failed to write IDAC lsb divider: %d\n", VAR_47);
  return VAR_47;
 }

 if (VAR_37 <= FUNC_6(VAR_31, 48000))
  VAR_49 = VAR_7;
 else if (VAR_37 <= FUNC_6(VAR_31, 96000))
  VAR_49 = VAR_8;
 else if (VAR_37 <= FUNC_6(VAR_31, 192000))
  VAR_49 = VAR_5;
 else
  VAR_49 = VAR_6;
 VAR_47 = FUNC_12(VAR_31->regmap, VAR_9,
     VAR_4, VAR_49);
 if (VAR_47 != 0) {
  FUNC_4(VAR_30->dev, "Failed to set fs speed: %d\n", VAR_47);
  return VAR_47;
 }

 FUNC_3(VAR_30->dev, "DSP divider %d\n", VAR_42);
 FUNC_3(VAR_30->dev, "DAC divider %d\n", VAR_43);
 FUNC_3(VAR_30->dev, "NCP divider %d\n", VAR_45);
 FUNC_3(VAR_30->dev, "OSR divider %d\n", VAR_46);
 FUNC_3(VAR_30->dev, "BCK divider %d\n", VAR_40);
 FUNC_3(VAR_30->dev, "LRCK divider %d\n", VAR_41);
 FUNC_3(VAR_30->dev, "IDAC %d\n", VAR_48);
 FUNC_3(VAR_30->dev, "1<<FSSP %d\n", 1 << VAR_49);

 return 0;
}
