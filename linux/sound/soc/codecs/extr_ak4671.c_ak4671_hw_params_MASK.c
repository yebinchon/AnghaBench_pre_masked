
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
 int FUNC_0 (struct snd_pcm_hw_params*) ;
 int FUNC_1 (struct snd_soc_component*,int ) ;
 int FUNC_2 (struct snd_soc_component*,int ,int ) ;

__attribute__((used)) static int FUNC_3(struct snd_pcm_substream *VAR_12,
  struct snd_pcm_hw_params *VAR_13,
  struct snd_soc_dai *VAR_14)
{
 struct snd_soc_component *VAR_15 = VAR_14->component;
 u8 VAR_16;

 VAR_16 = FUNC_1(VAR_15, VAR_10);
 VAR_16 &= ~VAR_0;

 switch (FUNC_0(VAR_13)) {
 case 8000:
  VAR_16 |= VAR_9;
  break;
 case 12000:
  VAR_16 |= VAR_2;
  break;
 case 16000:
  VAR_16 |= VAR_3;
  break;
 case 24000:
  VAR_16 |= VAR_5;
  break;
 case 11025:
  VAR_16 |= VAR_1;
  break;
 case 22050:
  VAR_16 |= VAR_4;
  break;
 case 32000:
  VAR_16 |= VAR_6;
  break;
 case 44100:
  VAR_16 |= VAR_7;
  break;
 case 48000:
  VAR_16 |= VAR_8;
  break;
 default:
  return -VAR_11;
 }

 FUNC_2(VAR_15, VAR_10, VAR_16);

 return 0;
}
