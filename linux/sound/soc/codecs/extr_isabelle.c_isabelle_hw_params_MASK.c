
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef unsigned int u16 ;
struct snd_soc_dai {struct snd_soc_component* component; } ;
struct snd_soc_component {int dummy; } ;
struct snd_pcm_substream {int dummy; } ;
struct snd_pcm_hw_params {int dummy; } ;


 int VAR_0 ;
 unsigned int VAR_1 ;
 unsigned int VAR_2 ;
 int VAR_3 ;
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
 int VAR_14 ;
 int VAR_15 ;
 int FUNC_0 (struct snd_pcm_hw_params*) ;
 int FUNC_1 (struct snd_pcm_hw_params*) ;
 int FUNC_2 (struct snd_soc_component*,int ,int ,unsigned int) ;

__attribute__((used)) static int FUNC_3(struct snd_pcm_substream *VAR_16,
         struct snd_pcm_hw_params *VAR_17,
         struct snd_soc_dai *VAR_18)
{
 struct snd_soc_component *VAR_19 = VAR_18->component;
 u16 VAR_20 = 0;
 unsigned int VAR_21 = 0;

 switch (FUNC_0(VAR_17)) {
 case 8000:
  VAR_21 = VAR_12;
  break;
 case 11025:
  VAR_21 = VAR_4;
  break;
 case 12000:
  VAR_21 = VAR_5;
  break;
 case 16000:
  VAR_21 = VAR_6;
  break;
 case 22050:
  VAR_21 = VAR_7;
  break;
 case 24000:
  VAR_21 = VAR_8;
  break;
 case 32000:
  VAR_21 = VAR_9;
  break;
 case 44100:
  VAR_21 = VAR_10;
  break;
 case 48000:
  VAR_21 = VAR_11;
  break;
 default:
  return -VAR_0;
 }

 FUNC_2(VAR_19, VAR_13,
   VAR_14, VAR_21);


 switch (FUNC_1(VAR_17)) {
 case 20:
  VAR_20 |= VAR_1;
  break;
 case 32:
  VAR_20 |= VAR_2;
  break;
 default:
  return -VAR_0;
 }

 FUNC_2(VAR_19, VAR_15,
   VAR_3, VAR_20);

 return 0;
}
