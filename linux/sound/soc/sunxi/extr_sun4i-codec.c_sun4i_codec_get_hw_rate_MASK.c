
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_pcm_hw_params {int dummy; } ;


 int VAR_0 ;
 unsigned int FUNC_0 (struct snd_pcm_hw_params*) ;

__attribute__((used)) static int FUNC_1(struct snd_pcm_hw_params *VAR_1)
{
 unsigned int VAR_2 = FUNC_0(VAR_1);

 switch (VAR_2) {
 case 192000:
 case 176400:
  return 6;

 case 96000:
 case 88200:
  return 7;

 case 48000:
 case 44100:
  return 0;

 case 32000:
 case 33075:
  return 1;

 case 24000:
 case 22050:
  return 2;

 case 16000:
 case 14700:
  return 3;

 case 12000:
 case 11025:
  return 4;

 case 8000:
 case 7350:
  return 5;

 default:
  return -VAR_0;
 }
}
