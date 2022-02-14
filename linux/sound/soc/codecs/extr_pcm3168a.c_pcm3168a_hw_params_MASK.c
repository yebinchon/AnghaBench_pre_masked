
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct snd_soc_dai {size_t id; struct snd_soc_component* component; } ;
struct snd_soc_component {int dev; } ;
struct snd_pcm_substream {int dummy; } ;
struct snd_pcm_hw_params {int dummy; } ;
struct pcm3168a_priv {unsigned int sysclk; int regmap; struct pcm3168a_io_params* io_params; } ;
struct pcm3168a_io_params {int master_mode; unsigned int fmt; int slot_width; int tdm_slots; } ;


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
 size_t VAR_11 ;


 unsigned int VAR_12 ;

 unsigned int VAR_13 ;

 unsigned int VAR_14 ;
 unsigned int VAR_15 ;
 unsigned int VAR_16 ;
 unsigned int VAR_17 ;
 unsigned int VAR_18 ;
 int FUNC_0 (int ,char*,...) ;
 unsigned int FUNC_1 (struct snd_pcm_hw_params*) ;
 unsigned int FUNC_2 (struct snd_pcm_hw_params*) ;
 int FUNC_3 (struct snd_pcm_hw_params*) ;
 unsigned int* VAR_19 ;
 int FUNC_4 (int ,int,int,unsigned int) ;
 struct pcm3168a_priv* FUNC_5 (struct snd_soc_component*) ;

__attribute__((used)) static int FUNC_6(struct snd_pcm_substream *VAR_20,
        struct snd_pcm_hw_params *VAR_21,
        struct snd_soc_dai *VAR_22)
{
 struct snd_soc_component *VAR_23 = VAR_22->component;
 struct pcm3168a_priv *VAR_24 = FUNC_5(VAR_23);
 struct pcm3168a_io_params *VAR_25 = &VAR_24->io_params[VAR_22->id];
 bool VAR_26;
 u32 VAR_27, VAR_28, VAR_29, VAR_30;
 unsigned int VAR_31, VAR_32, VAR_33, VAR_34;
 unsigned int VAR_35;
 int VAR_36, VAR_37;

 VAR_31 = FUNC_2(VAR_21);

 VAR_33 = VAR_24->sysclk / VAR_31;

 if (VAR_22->id == VAR_11) {
  VAR_34 = VAR_18;
  VAR_30 = VAR_10;
  VAR_28 = VAR_8;
  VAR_29 = VAR_9;
 } else {
  VAR_34 = VAR_17;
  VAR_30 = VAR_5;
  VAR_28 = VAR_3;
  VAR_29 = VAR_4;
 }

 VAR_26 = VAR_25->master_mode;
 VAR_32 = VAR_25->fmt;

 for (VAR_36 = 0; VAR_36 < VAR_34; VAR_36++) {
  if (VAR_19[VAR_36] == VAR_33)
   break;
 }

 if (VAR_36 == VAR_34) {
  FUNC_0(VAR_23->dev, "unsupported sysclk ratio\n");
  return -VAR_0;
 }

 if (VAR_25->slot_width)
  VAR_37 = VAR_25->slot_width;
 else
  VAR_37 = FUNC_3(VAR_21);

 switch (VAR_37) {
 case 16:
  if (VAR_26 || (VAR_32 != VAR_15)) {
   FUNC_0(VAR_23->dev, "16-bit slots are supported only for slave mode using right justified\n");
   return -VAR_0;
  }
  VAR_32 = VAR_16;
  break;
 case 24:
  if (VAR_26 || (VAR_32 & VAR_12)) {
   FUNC_0(VAR_23->dev, "24-bit slots not supported in master mode, or slave mode using DSP\n");
   return -VAR_0;
  }
  break;
 case 32:
  break;
 default:
  FUNC_0(VAR_23->dev, "unsupported frame size: %d\n", VAR_37);
  return -VAR_0;
 }

 if (VAR_25->tdm_slots)
  VAR_35 = VAR_25->tdm_slots;
 else
  VAR_35 = FUNC_1(VAR_21);
 if (VAR_35 > 2) {
  switch (VAR_32) {
  case 129:
  case 131:
   VAR_32 = VAR_13;
   break;
  case 128:
  case 130:
   VAR_32 = VAR_14;
   break;
  default:
   FUNC_0(VAR_23->dev,
    "TDM is supported under DSP/I2S/Left_J only\n");
   return -VAR_0;
  }
 }

 if (VAR_26)
  VAR_27 = ((VAR_36 + 1) << VAR_29);
 else
  VAR_27 = 0;

 FUNC_4(VAR_24->regmap, VAR_30, VAR_28, VAR_27);

 if (VAR_22->id == VAR_11) {
  VAR_28 = VAR_6;
  VAR_29 = VAR_7;
 } else {
  VAR_28 = VAR_1;
  VAR_29 = VAR_2;
 }

 FUNC_4(VAR_24->regmap, VAR_30, VAR_28, VAR_32 << VAR_29);

 return 0;
}
