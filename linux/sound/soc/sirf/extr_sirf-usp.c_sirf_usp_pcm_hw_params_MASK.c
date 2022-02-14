
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct snd_soc_dai {int dev; } ;
struct snd_pcm_substream {scalar_t__ stream; } ;
struct snd_pcm_hw_params {int dummy; } ;
struct sirf_usp {int daifmt_format; int regmap; } ;


 int VAR_0 ;



 scalar_t__ VAR_1 ;

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
 int FUNC_0 (int ,char*) ;
 int FUNC_1 (struct snd_pcm_hw_params*) ;
 int FUNC_2 (struct snd_pcm_hw_params*) ;
 int FUNC_3 (int ,int ,int,int) ;
 struct sirf_usp* FUNC_4 (struct snd_soc_dai*) ;

__attribute__((used)) static int FUNC_5(struct snd_pcm_substream *VAR_24,
  struct snd_pcm_hw_params *VAR_25, struct snd_soc_dai *VAR_26)
{
 struct sirf_usp *VAR_27 = FUNC_4(VAR_26);
 u32 VAR_28, VAR_29, VAR_30;

 switch (FUNC_2(VAR_25)) {
 case 134:
  VAR_28 = 16;
  VAR_29 = 16;
  break;
 case 132:
  VAR_28 = 24;
  VAR_29 = 32;
  break;
 case 133:
  VAR_28 = 24;
  VAR_29 = 24;
  break;
 default:
  FUNC_0(VAR_26->dev, "Format unsupported\n");
  return -VAR_0;
 }

 VAR_30 = VAR_28;

 switch (VAR_27->daifmt_format & VAR_2) {
 case 130:
  FUNC_3(VAR_27->regmap, VAR_13,
   VAR_4, VAR_4);
  break;
 case 131:
  FUNC_3(VAR_27->regmap, VAR_13,
   VAR_4, 0);
  VAR_29 = VAR_28 * FUNC_1(VAR_25);
  VAR_28 = VAR_29;
  break;
 default:
  FUNC_0(VAR_26->dev, "Only support I2S and DSP_A mode\n");
  return -VAR_0;
 }

 switch (VAR_27->daifmt_format & VAR_3) {
 case 128:
  break;
 case 129:
  FUNC_3(VAR_27->regmap, VAR_5,
   VAR_12 | VAR_22,
   VAR_12);
  break;
 default:
  return -VAR_0;
 }

 if (VAR_24->stream == VAR_1)
  FUNC_3(VAR_27->regmap, VAR_23,
   VAR_15 | VAR_17
   | VAR_19 | VAR_21,
   ((VAR_28 - 1) << VAR_16)
   | ((VAR_29 - 1) << VAR_18)
   | ((VAR_30 - 1) << VAR_20)
   | VAR_21);
 else
  FUNC_3(VAR_27->regmap, VAR_13,
   VAR_6 | VAR_8
   | VAR_10 | VAR_14,
   ((VAR_28 - 1) << VAR_7)
   | ((VAR_29 - 1) << VAR_9)
   | ((VAR_30 - 1) << VAR_11)
   | VAR_14);

 return 0;
}
