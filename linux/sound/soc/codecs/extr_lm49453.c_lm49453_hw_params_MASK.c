
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct snd_soc_dai {struct snd_soc_component* component; } ;
struct snd_soc_component {int dummy; } ;
struct snd_pcm_substream {int dummy; } ;
struct snd_pcm_hw_params {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct snd_pcm_hw_params*) ;
 int FUNC_1 (struct snd_soc_component*,int ,int) ;

__attribute__((used)) static int FUNC_2(struct snd_pcm_substream *VAR_3,
        struct snd_pcm_hw_params *VAR_4,
        struct snd_soc_dai *VAR_5)
{
 struct snd_soc_component *VAR_6 = VAR_5->component;
 u16 VAR_7 = 0;


 switch (FUNC_0(VAR_4)) {
 case 8000:
 case 16000:
 case 32000:
 case 24000:
 case 48000:
  VAR_7 = 256;
  break;
 case 11025:
 case 22050:
 case 44100:
  VAR_7 = 216;
  break;
 case 96000:
  VAR_7 = 127;
  break;
 default:
  return -VAR_0;
 }

 FUNC_1(VAR_6, VAR_1, VAR_7);
 FUNC_1(VAR_6, VAR_2, VAR_7);

 return 0;
}
