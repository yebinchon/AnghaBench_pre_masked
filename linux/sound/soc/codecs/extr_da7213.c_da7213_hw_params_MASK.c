
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct snd_soc_dai {struct snd_soc_component* component; } ;
struct snd_soc_component {int dummy; } ;
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
 int FUNC_0 (struct snd_pcm_hw_params*) ;
 int FUNC_1 (struct snd_pcm_hw_params*) ;
 int FUNC_2 (struct snd_soc_component*,int ,int ,int ) ;
 int FUNC_3 (struct snd_soc_component*,int ,int ) ;

__attribute__((used)) static int FUNC_4(struct snd_pcm_substream *VAR_18,
       struct snd_pcm_hw_params *VAR_19,
       struct snd_soc_dai *VAR_20)
{
 struct snd_soc_component *VAR_21 = VAR_20->component;
 u8 VAR_22 = 0;
 u8 VAR_23;


 switch (FUNC_1(VAR_19)) {
 case 16:
  VAR_22 |= VAR_2;
  break;
 case 20:
  VAR_22 |= VAR_3;
  break;
 case 24:
  VAR_22 |= VAR_4;
  break;
 case 32:
  VAR_22 |= VAR_5;
  break;
 default:
  return -VAR_17;
 }


 switch (FUNC_0(VAR_19)) {
 case 8000:
  VAR_23 = VAR_14;
  break;
 case 11025:
  VAR_23 = VAR_7;
  break;
 case 12000:
  VAR_23 = VAR_8;
  break;
 case 16000:
  VAR_23 = VAR_9;
  break;
 case 22050:
  VAR_23 = VAR_10;
  break;
 case 32000:
  VAR_23 = VAR_11;
  break;
 case 44100:
  VAR_23 = VAR_12;
  break;
 case 48000:
  VAR_23 = VAR_13;
  break;
 case 88200:
  VAR_23 = VAR_15;
  break;
 case 96000:
  VAR_23 = VAR_16;
  break;
 default:
  return -VAR_17;
 }

 FUNC_2(VAR_21, VAR_0, VAR_1,
       VAR_22);
 FUNC_3(VAR_21, VAR_6, VAR_23);

 return 0;
}
