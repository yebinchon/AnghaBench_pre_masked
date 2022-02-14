
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_soc_pcm_runtime {struct snd_soc_dai* cpu_dai; struct snd_soc_dai* codec_dai; } ;
struct snd_soc_dai {int dummy; } ;
struct snd_pcm_substream {struct snd_soc_pcm_runtime* private_data; } ;
struct snd_pcm_hw_params {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct snd_pcm_hw_params*) ;
 int FUNC_1 (struct snd_soc_dai*,int ,unsigned int,int ) ;

__attribute__((used)) static int FUNC_2(struct snd_pcm_substream *VAR_4,
 struct snd_pcm_hw_params *VAR_5)
{
 struct snd_soc_pcm_runtime *VAR_6 = VAR_4->private_data;
 struct snd_soc_dai *VAR_7 = VAR_6->codec_dai;
 struct snd_soc_dai *VAR_8 = VAR_6->cpu_dai;
 unsigned int VAR_9 = 0;
 int VAR_10;

 switch (FUNC_0(VAR_5)) {
 case 8000:
 case 16000:
 case 32000:
 case 48000:
 case 96000:
  VAR_9 = 12288000;
  break;
 case 11025:
 case 22050:
 case 44100:
 case 88200:
  VAR_9 = 11289600;
  break;
 }


 VAR_10 = FUNC_1(VAR_8, VAR_1,
     0, VAR_2);
 if (VAR_10 < 0)
  return VAR_10;


 VAR_10 = FUNC_1(VAR_8, VAR_0,
     0, VAR_2);
 if (VAR_10 < 0)
  return VAR_10;


 VAR_10 = FUNC_1(VAR_7, VAR_3, VAR_9,
         VAR_2);
 if (VAR_10 < 0)
  return VAR_10;

 return 0;
}
