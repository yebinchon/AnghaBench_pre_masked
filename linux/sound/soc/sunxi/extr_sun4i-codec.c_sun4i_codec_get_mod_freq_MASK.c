
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_pcm_hw_params {int dummy; } ;


 unsigned int FUNC_0 (struct snd_pcm_hw_params*) ;

__attribute__((used)) static unsigned long FUNC_1(struct snd_pcm_hw_params *VAR_0)
{
 unsigned int VAR_1 = FUNC_0(VAR_0);

 switch (VAR_1) {
 case 176400:
 case 88200:
 case 44100:
 case 33075:
 case 22050:
 case 14700:
 case 11025:
 case 7350:
  return 22579200;

 case 192000:
 case 96000:
 case 48000:
 case 32000:
 case 24000:
 case 16000:
 case 12000:
 case 8000:
  return 24576000;

 default:
  return 0;
 }
}
