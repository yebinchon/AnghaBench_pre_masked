
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_pcm_hw_params {int dummy; } ;


 unsigned int VAR_0 ;
 unsigned int VAR_1 ;
 unsigned int VAR_2 ;
 unsigned int VAR_3 ;
 unsigned int VAR_4 ;
 unsigned int VAR_5 ;
 unsigned int VAR_6 ;
 unsigned int VAR_7 ;
 int FUNC_0 (struct snd_pcm_hw_params*) ;

__attribute__((used)) static unsigned int FUNC_1(struct snd_pcm_hw_params *VAR_8)
{
 switch (FUNC_0(VAR_8)) {
 case 32000:
  return VAR_2;
 case 44100:
  return VAR_3;
 default:
  return VAR_4;
 case 64000:
  return VAR_5;
 case 88200:
  return VAR_6;
 case 96000:
  return VAR_7;
 case 176400:
  return VAR_0;
 case 192000:
  return VAR_1;
 }
}
