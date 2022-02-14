
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_soc_dai {int dummy; } ;
struct snd_pcm_hw_params {int dummy; } ;
struct adau {int mclk; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct snd_soc_dai*,int ,int ,int ,unsigned int) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct snd_pcm_hw_params*) ;
 struct adau* FUNC_3 (struct snd_soc_dai*) ;

__attribute__((used)) static int FUNC_4(struct snd_soc_dai *VAR_3,
 struct snd_pcm_hw_params *VAR_4)
{
 struct adau *VAR_5 = FUNC_3(VAR_3);
 unsigned int VAR_6;

 switch (FUNC_2(VAR_4)) {
 case 48000:
 case 8000:
 case 12000:
 case 16000:
 case 24000:
 case 32000:
 case 96000:
  VAR_6 = 48000 * 1024;
  break;
 case 44100:
 case 7350:
 case 11025:
 case 14700:
 case 22050:
 case 29400:
 case 88200:
  VAR_6 = 44100 * 1024;
  break;
 default:
  return -VAR_2;
 }

 return FUNC_0(VAR_3, VAR_0, VAR_1,
  FUNC_1(VAR_5->mclk), VAR_6);
}
