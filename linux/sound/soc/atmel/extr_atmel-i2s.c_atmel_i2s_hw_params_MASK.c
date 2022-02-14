
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_soc_dai {int dummy; } ;
struct snd_pcm_substream {scalar_t__ stream; } ;
struct snd_pcm_hw_params {int dummy; } ;
struct atmel_i2s_dev {int fmt; int regmap; int dev; int * gck_param; } ;


 int VAR_0 ;
 unsigned int VAR_1 ;
 unsigned int VAR_2 ;
 unsigned int VAR_3 ;
 unsigned int VAR_4 ;
 unsigned int VAR_5 ;
 unsigned int VAR_6 ;
 unsigned int VAR_7 ;
 unsigned int VAR_8 ;
 unsigned int VAR_9 ;
 unsigned int VAR_10 ;
 unsigned int VAR_11 ;
 unsigned int VAR_12 ;
 int VAR_13 ;







 scalar_t__ VAR_14 ;


 int VAR_15 ;

 int VAR_16 ;
 int FUNC_0 (struct atmel_i2s_dev*,int ) ;
 int FUNC_1 (int ,char*) ;
 int FUNC_2 (struct snd_pcm_hw_params*) ;
 int FUNC_3 (struct snd_pcm_hw_params*) ;
 int FUNC_4 (struct snd_pcm_hw_params*) ;
 int FUNC_5 (int ,int ,unsigned int) ;
 struct atmel_i2s_dev* FUNC_6 (struct snd_soc_dai*) ;

__attribute__((used)) static int FUNC_7(struct snd_pcm_substream *VAR_17,
          struct snd_pcm_hw_params *VAR_18,
          struct snd_soc_dai *VAR_19)
{
 struct atmel_i2s_dev *VAR_20 = FUNC_6(VAR_19);
 bool VAR_21 = (VAR_17->stream == VAR_14);
 unsigned int VAR_22 = 0;
 int VAR_23;

 switch (VAR_20->fmt & VAR_15) {
 case 128:
  VAR_22 |= VAR_7;
  break;

 default:
  FUNC_1(VAR_20->dev, "unsupported bus format\n");
  return -VAR_13;
 }

 switch (VAR_20->fmt & VAR_16) {
 case 129:

  VAR_22 |= VAR_9;
  VAR_23 = FUNC_0(VAR_20, FUNC_4(VAR_18));
  if (VAR_23)
   return VAR_23;
  break;

 case 130:

  VAR_22 |= VAR_10;
  VAR_20->gck_param = ((void*)0);
  break;

 default:
  FUNC_1(VAR_20->dev, "unsupported master/slave mode\n");
  return -VAR_13;
 }

 switch (FUNC_2(VAR_18)) {
 case 1:
  if (VAR_21)
   VAR_22 |= VAR_12;
  else
   VAR_22 |= VAR_11;
  break;
 case 2:
  break;
 default:
  FUNC_1(VAR_20->dev, "unsupported number of audio channels\n");
  return -VAR_13;
 }

 switch (FUNC_3(VAR_18)) {
 case 131:
  VAR_22 |= VAR_6;
  break;

 case 137:
  VAR_22 |= VAR_1;
  break;

 case 136:
  VAR_22 |= VAR_2 | VAR_8;
  break;

 case 135:
  VAR_22 |= VAR_3 | VAR_8;
  break;

 case 134:
  VAR_22 |= VAR_4 | VAR_8;
  break;

 case 133:
  VAR_22 |= VAR_4;
  break;

 case 132:
  VAR_22 |= VAR_5;
  break;

 default:
  FUNC_1(VAR_20->dev, "unsupported size/endianness for audio samples\n");
  return -VAR_13;
 }

 return FUNC_5(VAR_20->regmap, VAR_0, VAR_22);
}
