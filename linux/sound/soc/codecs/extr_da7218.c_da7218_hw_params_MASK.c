
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef unsigned int u8 ;
struct snd_soc_dai {struct snd_soc_component* component; } ;
struct snd_soc_component {int dev; } ;
struct snd_pcm_substream {int dummy; } ;
struct snd_pcm_hw_params {int dummy; } ;


 int VAR_0 ;
 unsigned int VAR_1 ;
 unsigned int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 unsigned int VAR_5 ;
 unsigned int VAR_6 ;
 unsigned int VAR_7 ;
 unsigned int VAR_8 ;
 int VAR_9 ;
 unsigned int VAR_10 ;
 unsigned int VAR_11 ;
 unsigned int VAR_12 ;
 unsigned int VAR_13 ;
 unsigned int VAR_14 ;
 unsigned int VAR_15 ;
 unsigned int VAR_16 ;
 unsigned int VAR_17 ;
 unsigned int VAR_18 ;
 unsigned int VAR_19 ;
 unsigned int VAR_20 ;
 unsigned int VAR_21 ;
 unsigned int VAR_22 ;
 int VAR_23 ;
 int FUNC_0 (int ,char*,unsigned int) ;
 unsigned int FUNC_1 (struct snd_pcm_hw_params*) ;
 int FUNC_2 (struct snd_pcm_hw_params*) ;
 int FUNC_3 (struct snd_pcm_hw_params*) ;
 int FUNC_4 (struct snd_soc_component*,int ,int,unsigned int) ;
 int FUNC_5 (struct snd_soc_component*,int ,unsigned int) ;

__attribute__((used)) static int FUNC_6(struct snd_pcm_substream *VAR_24,
       struct snd_pcm_hw_params *VAR_25,
       struct snd_soc_dai *VAR_26)
{
 struct snd_soc_component *VAR_27 = VAR_26->component;
 u8 VAR_28 = 0, VAR_29;
 unsigned int VAR_30;

 switch (FUNC_3(VAR_25)) {
 case 16:
  VAR_28 |= VAR_5;
  break;
 case 20:
  VAR_28 |= VAR_6;
  break;
 case 24:
  VAR_28 |= VAR_7;
  break;
 case 32:
  VAR_28 |= VAR_8;
  break;
 default:
  return -VAR_23;
 }

 VAR_30 = FUNC_1(VAR_25);
 if ((VAR_30 < 1) || (VAR_30 > VAR_1)) {
  FUNC_0(VAR_27->dev,
   "Invalid number of channels, only 1 to %d supported\n",
   VAR_1);
  return -VAR_23;
 }
 VAR_28 |= VAR_30 << VAR_2;

 switch (FUNC_2(VAR_25)) {
 case 8000:
  VAR_29 = VAR_18;
  break;
 case 11025:
  VAR_29 = VAR_10;
  break;
 case 12000:
  VAR_29 = VAR_11;
  break;
 case 16000:
  VAR_29 = VAR_12;
  break;
 case 22050:
  VAR_29 = VAR_13;
  break;
 case 24000:
  VAR_29 = VAR_14;
  break;
 case 32000:
  VAR_29 = VAR_15;
  break;
 case 44100:
  VAR_29 = VAR_16;
  break;
 case 48000:
  VAR_29 = VAR_17;
  break;
 case 88200:
  VAR_29 = VAR_19;
  break;
 case 96000:
  VAR_29 = VAR_20;
  break;
 default:
  return -VAR_23;
 }

 FUNC_4(VAR_27, VAR_3,
       VAR_4 | VAR_0,
       VAR_28);

 FUNC_5(VAR_27, VAR_9,
        (VAR_29 << VAR_22) | (VAR_29 << VAR_21));

 return 0;
}
