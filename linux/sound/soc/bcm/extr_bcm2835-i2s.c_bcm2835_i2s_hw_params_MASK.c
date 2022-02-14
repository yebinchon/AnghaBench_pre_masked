
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct snd_soc_dai {int dummy; } ;
struct snd_pcm_substream {int dummy; } ;
struct snd_pcm_hw_params {int dummy; } ;
struct bcm2835_i2s_dev {int tdm_slots; unsigned int slot_width; int frame_length; unsigned int rx_mask; unsigned int tx_mask; int fmt; int clk_rate; int dev; int i2s_regmap; int clk; scalar_t__ clk_prepared; } ;


 unsigned int FUNC_0 (unsigned int) ;
 unsigned int FUNC_1 (unsigned int) ;
 unsigned int FUNC_2 (unsigned int) ;
 unsigned int FUNC_3 (unsigned int) ;
 unsigned int VAR_0 ;
 unsigned int VAR_1 ;
 unsigned int FUNC_4 (unsigned int) ;
 unsigned int VAR_2 ;
 unsigned int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 unsigned int FUNC_5 (int) ;
 unsigned int VAR_7 ;
 unsigned int VAR_8 ;
 unsigned int FUNC_6 (unsigned int) ;
 unsigned int VAR_9 ;
 unsigned int VAR_10 ;
 int VAR_11 ;
 int FUNC_7 (int) ;
 int VAR_12 ;
 int VAR_13 ;
 int FUNC_8 (int) ;
 int FUNC_9 (int) ;
 int FUNC_10 (int) ;
 int VAR_14 ;
 int VAR_15 ;
 int FUNC_11 (int) ;
 int FUNC_12 (int) ;
 int VAR_16 ;






 int VAR_17 ;



 int VAR_18 ;

 int VAR_19 ;



 int FUNC_13 (unsigned int*,unsigned int*,unsigned int,unsigned int,unsigned int,unsigned int) ;
 int FUNC_14 (struct bcm2835_i2s_dev*,int,int) ;
 int FUNC_15 (struct bcm2835_i2s_dev*) ;
 int FUNC_16 (struct bcm2835_i2s_dev*) ;
 int FUNC_17 (int ,int) ;
 int FUNC_18 (int ,char*,int,int,...) ;
 int FUNC_19 (int ,char*) ;
 int FUNC_20 (struct snd_pcm_hw_params*) ;
 unsigned int FUNC_21 (struct snd_pcm_hw_params*) ;
 int FUNC_22 (int ,int ,int*) ;
 int FUNC_23 (int ,int ,int,int) ;
 int FUNC_24 (int ,int ,unsigned int) ;
 struct bcm2835_i2s_dev* FUNC_25 (struct snd_soc_dai*) ;
 int FUNC_26 (struct snd_pcm_hw_params*) ;
 int FUNC_27 (struct snd_pcm_hw_params*) ;

__attribute__((used)) static int FUNC_28(struct snd_pcm_substream *VAR_20,
     struct snd_pcm_hw_params *VAR_21,
     struct snd_soc_dai *VAR_22)
{
 struct bcm2835_i2s_dev *VAR_23 = FUNC_25(VAR_22);
 unsigned int VAR_24, VAR_25, VAR_26;
 unsigned int VAR_27, VAR_28, VAR_29;
 int VAR_30, VAR_31;
 unsigned int VAR_32, VAR_33;
 unsigned int VAR_34, VAR_35, VAR_36, VAR_37;
 unsigned int VAR_38, VAR_39;
 bool VAR_40 = 0;
 bool VAR_41 = 0;
 bool VAR_42 = 0;
 uint32_t VAR_43;
 int VAR_44 = 0;





 FUNC_22(VAR_23->i2s_regmap, VAR_4, &VAR_43);

 if (VAR_43 & (VAR_15 | VAR_13))
  return 0;

 VAR_24 = FUNC_21(VAR_21);
 VAR_25 = 0;
 VAR_29 = 0;
 VAR_38 = 0;

 if (VAR_23->tdm_slots) {
  VAR_27 = VAR_23->tdm_slots;
  VAR_28 = VAR_23->slot_width;
  VAR_30 = VAR_23->frame_length;
  VAR_32 = VAR_23->rx_mask;
  VAR_33 = VAR_23->tx_mask;
  VAR_31 = VAR_23->frame_length * FUNC_20(VAR_21);
 } else {
  VAR_27 = 2;
  VAR_28 = FUNC_21(VAR_21);
  VAR_32 = 0x03;
  VAR_33 = 0x03;

  VAR_30 = FUNC_27(VAR_21);
  if (VAR_30 < 0)
   return VAR_30;

  VAR_31 = FUNC_26(VAR_21);
  if (VAR_31 < 0)
   return VAR_31;
 }


 if (VAR_24 > VAR_28)
  return -VAR_16;


 switch (VAR_23->fmt & VAR_19) {
 case 137:
 case 138:
  VAR_40 = 1;
  break;
 case 139:
 case 140:
  VAR_40 = 0;
  break;
 default:
  return -VAR_16;
 }


 switch (VAR_23->fmt & VAR_19) {
 case 137:
 case 139:
  VAR_41 = 1;
  break;
 case 138:
 case 140:
  VAR_41 = 0;
  break;
 default:
  return -VAR_16;
 }


 if (VAR_40 &&
     (!VAR_23->clk_prepared || VAR_23->clk_rate != VAR_31)) {
  if (VAR_23->clk_prepared)
   FUNC_16(VAR_23);

  if (VAR_23->clk_rate != VAR_31) {
   VAR_44 = FUNC_17(VAR_23->clk, VAR_31);
   if (VAR_44)
    return VAR_44;
   VAR_23->clk_rate = VAR_31;
  }

  FUNC_15(VAR_23);
 }


 VAR_39 = VAR_0;

 if (VAR_24 >= 24)
  VAR_39 |= VAR_1;

 VAR_39 |= FUNC_4((VAR_24-8)&0xf);


 VAR_39 = FUNC_0(VAR_39) | FUNC_2(VAR_39);

 switch (VAR_23->fmt & VAR_17) {
 case 134:

  if (VAR_27 & 1)
   return -VAR_16;





  VAR_29 = VAR_27 >> 1;


  VAR_25 = 1;


  VAR_26 = VAR_30 / 2;
  VAR_42 = 1;
  break;
 case 131:
  if (VAR_27 & 1)
   return -VAR_16;

  VAR_29 = VAR_27 >> 1;
  VAR_25 = 0;
  VAR_26 = VAR_30 / 2;
  VAR_42 = 0;
  break;
 case 128:
  if (VAR_27 & 1)
   return -VAR_16;


  if (VAR_30 & 1)
   return -VAR_16;

  VAR_29 = VAR_27 >> 1;
  VAR_25 = VAR_28 - VAR_24;
  VAR_26 = VAR_30 / 2;
  VAR_42 = 0;
  break;
 case 136:
  VAR_25 = 1;
  VAR_26 = 1;
  VAR_42 = 0;
  break;
 case 135:
  VAR_25 = 0;
  VAR_26 = 1;
  VAR_42 = 0;
  break;
 default:
  return -VAR_16;
 }

 FUNC_13(&VAR_34, &VAR_35,
  VAR_32, VAR_28, VAR_25, VAR_29);
 FUNC_13(&VAR_36, &VAR_37,
  VAR_33, VAR_28, VAR_25, VAR_29);






 if ((!VAR_34 || !VAR_36) && !VAR_41)
  FUNC_19(VAR_23->dev,
   "Unstable slave config detected, L/R may be swapped");







 FUNC_24(VAR_23->i2s_regmap, VAR_12,
    VAR_39
  | FUNC_1(VAR_34)
  | FUNC_3(VAR_35));
 FUNC_24(VAR_23->i2s_regmap, VAR_14,
    VAR_39
  | FUNC_1(VAR_36)
  | FUNC_3(VAR_37));



 if (VAR_24 <= 16) {






  VAR_38 |= VAR_10 | VAR_7;
 }

 VAR_38 |= FUNC_5(VAR_30 - 1);
 VAR_38 |= FUNC_6(VAR_26);


 if (!VAR_40)
  VAR_38 |= VAR_3;


 if (!VAR_41)
  VAR_38 |= VAR_9;


        switch (VAR_23->fmt & VAR_18) {
 case 129:
 case 130:
  VAR_38 |= VAR_2;
  break;
 case 132:
 case 133:
  break;
 default:
  return -VAR_16;
 }


 switch (VAR_23->fmt & VAR_18) {
 case 129:
 case 132:
  if (VAR_42)
   VAR_38 |= VAR_8;
  break;
 case 130:
 case 133:
  if (!VAR_42)
   VAR_38 |= VAR_8;
  break;
 default:
  return -VAR_16;
 }

 FUNC_24(VAR_23->i2s_regmap, VAR_11, VAR_38);


 FUNC_23(VAR_23->i2s_regmap, VAR_4,
   FUNC_8(1)
   | FUNC_11(1)
   | VAR_5, 0xffffffff);

 FUNC_23(VAR_23->i2s_regmap, VAR_6,
     FUNC_12(0x10)
   | FUNC_9(0x30)
   | FUNC_10(0x30)
   | FUNC_7(0x20), 0xffffffff);


 FUNC_14(VAR_23, 1, 1);

 FUNC_18(VAR_23->dev,
  "slots: %d width: %d rx mask: 0x%02x tx_mask: 0x%02x\n",
  VAR_27, VAR_28, VAR_32, VAR_33);

 FUNC_18(VAR_23->dev, "frame len: %d sync len: %d data len: %d\n",
  VAR_30, VAR_26, VAR_24);

 FUNC_18(VAR_23->dev, "rx pos: %d,%d tx pos: %d,%d\n",
  VAR_34, VAR_35, VAR_36, VAR_37);

 FUNC_18(VAR_23->dev, "sampling rate: %d bclk rate: %d\n",
  FUNC_20(VAR_21), VAR_31);

 FUNC_18(VAR_23->dev, "CLKM: %d CLKI: %d FSM: %d FSI: %d frame start: %s edge\n",
  !!(VAR_38 & VAR_3),
  !!(VAR_38 & VAR_2),
  !!(VAR_38 & VAR_9),
  !!(VAR_38 & VAR_8),
  (VAR_38 & VAR_8) ? "falling" : "rising");

 return VAR_44;
}
