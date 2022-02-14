
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct snd_soc_dai {struct snd_soc_component* component; } ;
struct snd_soc_component {int dev; } ;
struct snd_pcm_substream {scalar_t__ stream; } ;
struct snd_pcm_hw_params {int dummy; } ;
struct classh_cfg {int classh_wk_fet_disable; } ;
struct TYPE_2__ {scalar_t__ stereo; struct classh_cfg classh_algo; } ;
struct cs35l35_private {int sclk; int regmap; scalar_t__ slave_mode; scalar_t__ i2s_mode; TYPE_1__ pdata; int sysclk; } ;


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
 scalar_t__ VAR_18 ;
 int FUNC_0 (int ,int) ;
 int FUNC_1 (int ,char*,...) ;
 int FUNC_2 (struct snd_pcm_hw_params*) ;
 int FUNC_3 (struct snd_pcm_hw_params*) ;
 int FUNC_4 (int ,int ,int ,int) ;
 struct cs35l35_private* FUNC_5 (struct snd_soc_component*) ;

__attribute__((used)) static int FUNC_6(struct snd_pcm_substream *VAR_19,
     struct snd_pcm_hw_params *VAR_20,
     struct snd_soc_dai *VAR_21)
{
 struct snd_soc_component *VAR_22 = VAR_21->component;
 struct cs35l35_private *VAR_23 = FUNC_5(VAR_22);
 struct classh_cfg *VAR_24 = &VAR_23->pdata.classh_algo;
 int VAR_25 = FUNC_2(VAR_20);
 int VAR_26 = 0;
 u8 VAR_27;
 int VAR_28;
 int VAR_29;

 int VAR_30 = FUNC_0(VAR_23->sysclk, VAR_25);

 if (VAR_30 < 0) {
  FUNC_1(VAR_22->dev, "Invalid CLK:Rate %d:%d\n",
   VAR_23->sysclk, VAR_25);
  return -VAR_17;
 }

 VAR_26 = FUNC_4(VAR_23->regmap, VAR_8,
     VAR_9, VAR_30);
 if (VAR_26 != 0) {
  FUNC_1(VAR_22->dev, "Failed to set port config %d\n", VAR_26);
  return VAR_26;
 }







 VAR_29 = VAR_30 & VAR_14;

 if (VAR_24->classh_wk_fet_disable == 0x00 &&
  (VAR_29 == 0x01 || VAR_29 == 0x03)) {
  VAR_26 = FUNC_4(VAR_23->regmap,
     VAR_7,
     VAR_5,
     0 << VAR_6);
  if (VAR_26 != 0) {
   FUNC_1(VAR_22->dev, "Failed to set fet config %d\n",
    VAR_26);
   return VAR_26;
  }
 }





 if (VAR_19->stream == VAR_18) {
  switch (FUNC_3(VAR_20)) {
  case 8:
   VAR_28 = VAR_13;
   break;
  case 16:
   VAR_28 = VAR_11;
   break;
  case 24:
   VAR_28 = VAR_12;
   break;
  default:
   FUNC_1(VAR_22->dev, "Unsupported Width %d\n",
    FUNC_3(VAR_20));
   return -VAR_17;
  }
  FUNC_4(VAR_23->regmap,
    VAR_2,
    VAR_3,
    VAR_28 <<
    VAR_4);
  if (VAR_23->pdata.stereo) {
   FUNC_4(VAR_23->regmap,
     VAR_2,
     VAR_0,
     VAR_28 <<
     VAR_1);
  }
 }

 if (VAR_23->i2s_mode) {



  if ((VAR_23->sclk / VAR_25) % 4) {
   FUNC_1(VAR_22->dev, "Unsupported sclk/fs ratio %d:%d\n",
     VAR_23->sclk, VAR_25);
   return -VAR_17;
  }
  VAR_27 = ((VAR_23->sclk / VAR_25) / 4) - 1;


  if (VAR_23->slave_mode) {
   switch (VAR_27) {
   case 130:
   case 129:
   case 128:
    break;
   default:
    FUNC_1(VAR_22->dev, "ratio not supported\n");
    return -VAR_17;
   }
  } else {

   switch (VAR_27) {
   case 130:
   case 128:
    break;
   default:
    FUNC_1(VAR_22->dev, "ratio not supported\n");
    return -VAR_17;
   }
  }
  VAR_26 = FUNC_4(VAR_23->regmap,
     VAR_10,
     VAR_15, VAR_27 <<
     VAR_16);
  if (VAR_26 != 0) {
   FUNC_1(VAR_22->dev, "Failed to set fsclk %d\n", VAR_26);
   return VAR_26;
  }
 }

 return VAR_26;
}
