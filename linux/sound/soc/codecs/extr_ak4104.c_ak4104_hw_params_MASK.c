
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_soc_dai {struct snd_soc_component* component; } ;
struct snd_soc_component {int dev; } ;
struct snd_pcm_substream {int dummy; } ;
struct snd_pcm_hw_params {int dummy; } ;
struct ak4104_private {int regmap; } ;


 int FUNC_0 (int) ;
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
 int FUNC_1 (int ,char*) ;
 int FUNC_2 (struct snd_pcm_hw_params*) ;
 int FUNC_3 (int ,int ,int) ;
 struct ak4104_private* FUNC_4 (struct snd_soc_component*) ;

__attribute__((used)) static int FUNC_5(struct snd_pcm_substream *VAR_11,
       struct snd_pcm_hw_params *VAR_12,
       struct snd_soc_dai *VAR_13)
{
 struct snd_soc_component *VAR_14 = VAR_13->component;
 struct ak4104_private *VAR_15 = FUNC_4(VAR_14);
 int VAR_16, VAR_17 = 0;


 VAR_17 |= VAR_1;
 FUNC_3(VAR_15->regmap, FUNC_0(0), VAR_17);

 VAR_17 = 0;

 switch (FUNC_2(VAR_12)) {
 case 22050:
  VAR_17 |= VAR_4;
  break;
 case 24000:
  VAR_17 |= VAR_5;
  break;
 case 32000:
  VAR_17 |= VAR_6;
  break;
 case 44100:
  VAR_17 |= VAR_7;
  break;
 case 48000:
  VAR_17 |= VAR_8;
  break;
 case 88200:
  VAR_17 |= VAR_9;
  break;
 case 96000:
  VAR_17 |= VAR_10;
  break;
 case 176400:
  VAR_17 |= VAR_2;
  break;
 case 192000:
  VAR_17 |= VAR_3;
  break;
 default:
  FUNC_1(VAR_14->dev, "unsupported sampling rate\n");
  return -VAR_0;
 }

 VAR_16 = FUNC_3(VAR_15->regmap, FUNC_0(3), VAR_17);
 if (VAR_16 < 0)
  return VAR_16;

 return 0;
}
