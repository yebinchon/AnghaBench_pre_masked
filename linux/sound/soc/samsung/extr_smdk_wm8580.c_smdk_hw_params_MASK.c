
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_soc_pcm_runtime {struct snd_soc_dai* codec_dai; } ;
struct snd_soc_dai {int dummy; } ;
struct snd_pcm_substream {struct snd_soc_pcm_runtime* private_data; } ;
struct snd_pcm_hw_params {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (struct snd_pcm_hw_params*) ;
 int FUNC_1 (struct snd_pcm_hw_params*) ;
 int FUNC_2 (struct snd_soc_dai*,int ,int ) ;
 int FUNC_3 (struct snd_soc_dai*,int ,int ,int ,unsigned int) ;
 int FUNC_4 (struct snd_soc_dai*,int ,unsigned int,int ) ;

__attribute__((used)) static int FUNC_5(struct snd_pcm_substream *VAR_6,
 struct snd_pcm_hw_params *VAR_7)
{
 struct snd_soc_pcm_runtime *VAR_8 = VAR_6->private_data;
 struct snd_soc_dai *VAR_9 = VAR_8->codec_dai;
 unsigned int VAR_10;
 int VAR_11, VAR_12;

 switch (FUNC_1(VAR_7)) {
 case 8:
 case 16:
  break;
 default:
  return -VAR_0;
 }
 switch (FUNC_0(VAR_7)) {
 case 16000:
 case 22050:
 case 32000:
 case 44100:
 case 48000:
 case 88200:
 case 96000:
  VAR_11 = 256;
  break;
 case 64000:
  VAR_11 = 384;
  break;
 case 8000:
 case 11025:
  VAR_11 = 512;
  break;
 default:
  return -VAR_0;
 }
 VAR_10 = FUNC_0(VAR_7) * VAR_11;


 VAR_12 = FUNC_2(VAR_9, VAR_4,
     VAR_3);
 if (VAR_12 < 0)
  return VAR_12;

 VAR_12 = FUNC_3(VAR_9, VAR_5, 0,
     VAR_1, VAR_10);
 if (VAR_12 < 0)
  return VAR_12;

 VAR_12 = FUNC_4(VAR_9, VAR_3,
         VAR_10, VAR_2);
 if (VAR_12 < 0)
  return VAR_12;

 return 0;
}
