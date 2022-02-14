
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct snd_soc_dai {struct snd_soc_component* component; } ;
struct snd_soc_component {int dev; } ;
struct snd_pcm_substream {int dummy; } ;
struct snd_pcm_hw_params {int dummy; } ;
struct max9860_priv {int fmt; int pclk_rate; int psclk; int regmap; } ;


 unsigned long FUNC_0 (unsigned long long,int) ;
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


 int FUNC_1 (int ,char*,...) ;
 int FUNC_2 (int ,char*,...) ;
 int FUNC_3 (struct snd_pcm_hw_params*) ;
 int FUNC_4 (struct snd_pcm_hw_params*) ;
 int FUNC_5 (struct snd_pcm_hw_params*) ;
 int FUNC_6 (int ,int ,int ,int ) ;
 int FUNC_7 (int ,int ,unsigned long) ;
 struct max9860_priv* FUNC_8 (struct snd_soc_component*) ;

__attribute__((used)) static int FUNC_9(struct snd_pcm_substream *VAR_25,
        struct snd_pcm_hw_params *VAR_26,
        struct snd_soc_dai *VAR_27)
{
 struct snd_soc_component *VAR_28 = VAR_27->component;
 struct max9860_priv *VAR_29 = FUNC_8(VAR_28);
 u8 VAR_30;
 u8 VAR_31 = 0;
 u8 VAR_32 = 0;
 u8 VAR_33 = 0;
 unsigned long VAR_34;
 int VAR_35;

 FUNC_1(VAR_28->dev, "hw_params %u Hz, %u channels\n",
  FUNC_4(VAR_26),
  FUNC_3(VAR_26));

 if (FUNC_3(VAR_26) == 2)
  VAR_32 |= VAR_18;

 switch (VAR_29->fmt & VAR_24) {
 case 136:
  VAR_30 = 0;
  break;
 case 137:
  VAR_30 = VAR_16;
  break;
 default:
  return -VAR_0;
 }
 VAR_31 |= VAR_30;

 if (VAR_30) {
  if (FUNC_5(VAR_26) * FUNC_3(VAR_26) > 48)
   VAR_32 |= VAR_7;
  else
   VAR_32 |= VAR_6;
 }

 switch (VAR_29->fmt & VAR_22) {
 case 133:
  VAR_31 |= VAR_9;
  VAR_32 |= VAR_3;
  break;
 case 130:
  VAR_31 |= VAR_21;
  break;
 case 135:
  if (FUNC_5(VAR_26) != 16) {
   FUNC_2(VAR_28->dev,
    "DSP_A works for 16 bits per sample only.\n");
   return -VAR_0;
  }
  VAR_31 |= VAR_9 | VAR_21 | VAR_13 | VAR_20;
  VAR_32 |= VAR_3;
  break;
 case 134:
  if (FUNC_5(VAR_26) != 16) {
   FUNC_2(VAR_28->dev,
    "DSP_B works for 16 bits per sample only.\n");
   return -VAR_0;
  }
  VAR_31 |= VAR_21 | VAR_13 | VAR_20;
  break;
 default:
  return -VAR_0;
 }

 switch (VAR_29->fmt & VAR_23) {
 case 128:
  break;
 case 129:
  switch (VAR_29->fmt & VAR_22) {
  case 135:
  case 134:
   return -VAR_0;
  }
  VAR_31 ^= VAR_21;
  break;
 case 132:
  switch (VAR_29->fmt & VAR_22) {
  case 135:
  case 134:
   return -VAR_0;
  }
  VAR_31 ^= VAR_21;

 case 131:
  VAR_31 ^= VAR_8;
  VAR_32 ^= VAR_2;
  break;
 default:
  return -VAR_0;
 }

 FUNC_1(VAR_28->dev, "IFC1A  %02x\n", VAR_31);
 VAR_35 = FUNC_7(VAR_29->regmap, VAR_14, VAR_31);
 if (VAR_35) {
  FUNC_2(VAR_28->dev, "Failed to set IFC1A: %d\n", VAR_35);
  return VAR_35;
 }
 FUNC_1(VAR_28->dev, "IFC1B  %02x\n", VAR_32);
 VAR_35 = FUNC_7(VAR_29->regmap, VAR_15, VAR_32);
 if (VAR_35) {
  FUNC_2(VAR_28->dev, "Failed to set IFC1B: %d\n", VAR_35);
  return VAR_35;
 }







 if (FUNC_4(VAR_26) == 8000 || FUNC_4(VAR_26) == 16000) {
  if (VAR_30) {
   switch (VAR_29->pclk_rate) {
   case 12000000:
    VAR_33 = VAR_10;
    break;
   case 13000000:
    VAR_33 = VAR_11;
    break;
   case 19200000:
    VAR_33 = VAR_12;
    break;
   default:





    break;
   }

   if (VAR_33 && FUNC_4(VAR_26) == 16000)
    VAR_33 |= VAR_1;
  }
 }
 VAR_34 = FUNC_0(65536ULL * 96 * FUNC_4(VAR_26),
      VAR_29->pclk_rate);

 if (!VAR_33) {

  if (FUNC_4(VAR_26) > 24000)
   VAR_33 |= VAR_1;

  if (!VAR_30)
   VAR_34 |= 1;
 }

 VAR_33 |= VAR_29->psclk;
 FUNC_1(VAR_28->dev, "SYSCLK %02x\n", VAR_33);
 VAR_35 = FUNC_7(VAR_29->regmap,
      VAR_19, VAR_33);
 if (VAR_35) {
  FUNC_2(VAR_28->dev, "Failed to set SYSCLK: %d\n", VAR_35);
  return VAR_35;
 }
 FUNC_1(VAR_28->dev, "N %lu\n", VAR_34);
 VAR_35 = FUNC_7(VAR_29->regmap,
      VAR_4, VAR_34 >> 8);
 if (VAR_35) {
  FUNC_2(VAR_28->dev, "Failed to set NHI: %d\n", VAR_35);
  return VAR_35;
 }
 VAR_35 = FUNC_7(VAR_29->regmap,
      VAR_5, VAR_34 & 0xff);
 if (VAR_35) {
  FUNC_2(VAR_28->dev, "Failed to set NLO: %d\n", VAR_35);
  return VAR_35;
 }

 if (!VAR_30) {
  FUNC_1(VAR_28->dev, "Enable PLL\n");
  VAR_35 = FUNC_6(VAR_29->regmap, VAR_4,
      VAR_17, VAR_17);
  if (VAR_35) {
   FUNC_2(VAR_28->dev, "Failed to enable PLL: %d\n",
    VAR_35);
   return VAR_35;
  }
 }

 return 0;
}
