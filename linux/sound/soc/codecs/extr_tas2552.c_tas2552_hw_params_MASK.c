
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct tas2552_data {int tdm_delay; } ;
struct snd_soc_dai {struct snd_soc_component* component; } ;
struct snd_soc_component {int dev; } ;
struct snd_pcm_substream {int dummy; } ;
struct snd_pcm_hw_params {int dummy; } ;


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
 int FUNC_0 (int ,char*,int) ;
 struct tas2552_data* FUNC_1 (int ) ;
 int FUNC_2 (struct snd_pcm_hw_params*) ;
 int FUNC_3 (struct snd_pcm_hw_params*) ;
 int FUNC_4 (struct snd_soc_component*,int ,int,int ) ;
 int FUNC_5 (struct snd_soc_component*,struct snd_pcm_hw_params*) ;

__attribute__((used)) static int FUNC_6(struct snd_pcm_substream *VAR_22,
        struct snd_pcm_hw_params *VAR_23,
        struct snd_soc_dai *VAR_24)
{
 struct snd_soc_component *VAR_25 = VAR_24->component;
 struct tas2552_data *VAR_26 = FUNC_1(VAR_25->dev);
 int VAR_27;
 u8 VAR_28, VAR_29;

 switch (FUNC_3(VAR_23)) {
 case 16:
  VAR_28 = VAR_17;
  VAR_27 = 32 + VAR_26->tdm_delay;
  break;
 case 20:
  VAR_28 = VAR_18;
  VAR_27 = 64 + VAR_26->tdm_delay;
  break;
 case 24:
  VAR_28 = VAR_19;
  VAR_27 = 64 + VAR_26->tdm_delay;
  break;
 case 32:
  VAR_28 = VAR_20;
  VAR_27 = 64 + VAR_26->tdm_delay;
  break;
 default:
  FUNC_0(VAR_25->dev, "Not supported sample size: %d\n",
   FUNC_3(VAR_23));
  return -VAR_0;
 }

 if (VAR_27 <= 32)
  VAR_28 |= VAR_4;
 else if (VAR_27 <= 64)
  VAR_28 |= VAR_5;
 else if (VAR_27 <= 128)
  VAR_28 |= VAR_2;
 else
  VAR_28 |= VAR_3;

 FUNC_4(VAR_25, VAR_7,
       VAR_21 | VAR_6,
       VAR_28);

 switch (FUNC_2(VAR_23)) {
 case 8000:
  VAR_29 = VAR_15;
  break;
 case 11025:
 case 12000:
  VAR_29 = VAR_8;
  break;
 case 16000:
  VAR_29 = VAR_9;
  break;
 case 22050:
 case 24000:
  VAR_29 = VAR_11;
  break;
 case 32000:
  VAR_29 = VAR_12;
  break;
 case 44100:
 case 48000:
  VAR_29 = VAR_13;
  break;
 case 88200:
 case 96000:
  VAR_29 = VAR_14;
  break;
 case 176400:
 case 192000:
  VAR_29 = VAR_10;
  break;
 default:
  FUNC_0(VAR_25->dev, "Not supported sample rate: %d\n",
   FUNC_2(VAR_23));
  return -VAR_0;
 }

 FUNC_4(VAR_25, VAR_1, VAR_16,
       VAR_29);

 return FUNC_5(VAR_25, VAR_23);
}
