
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_soc_pcm_runtime {struct snd_soc_dai* codec_dai; struct snd_soc_dai* cpu_dai; } ;
struct snd_soc_dai {int dev; } ;
struct snd_pcm_substream {struct snd_soc_pcm_runtime* private_data; } ;
struct snd_pcm_hw_params {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,char*,int) ;
 int FUNC_1 (struct snd_pcm_hw_params*) ;
 int FUNC_2 (struct snd_soc_dai*,int ,int,int ) ;

__attribute__((used)) static int FUNC_3(struct snd_pcm_substream *VAR_3,
        struct snd_pcm_hw_params *VAR_4)
{
 int VAR_5 = 0;
 struct snd_soc_pcm_runtime *VAR_6 = VAR_3->private_data;
 struct snd_soc_dai *VAR_7 = VAR_6->cpu_dai;
 struct snd_soc_dai *VAR_8 = VAR_6->codec_dai;
 int VAR_9;

 switch (FUNC_1(VAR_4)) {
 case 8000:
 case 16000:
 case 24000:
 case 32000:
 case 48000:
 case 64000:
 case 96000:
  VAR_9 = 12288000;
  break;
 case 11025:
 case 22050:
 case 44100:
 case 88200:
  VAR_9 = 11289600;
  break;
 default:
  return -VAR_0;
 }

 VAR_5 = FUNC_2(VAR_7, 0, VAR_9,
         VAR_2);
 if (VAR_5 < 0) {
  FUNC_0(VAR_8->dev, "Can't set codec clock %d\n", VAR_5);
  return VAR_5;
 }

 VAR_5 = FUNC_2(VAR_8, 0, VAR_9,
         VAR_1);
 if (VAR_5 < 0) {
  FUNC_0(VAR_8->dev, "Can't set codec clock %d\n", VAR_5);
  return VAR_5;
 }

 return VAR_5;
}
