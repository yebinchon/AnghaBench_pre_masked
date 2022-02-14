
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
 int FUNC_0 (unsigned int) ;
 scalar_t__ VAR_4 ;
 int FUNC_1 (struct snd_pcm_hw_params*) ;
 int FUNC_2 (struct snd_soc_dai*,int ,int ) ;
 int FUNC_3 (struct snd_soc_dai*,int ,int ,int) ;

__attribute__((used)) static int FUNC_4(struct snd_pcm_substream *VAR_5,
        struct snd_pcm_hw_params *VAR_6)
{
 struct snd_soc_pcm_runtime *VAR_7 = VAR_5->private_data;
 struct snd_soc_dai *VAR_8 = VAR_7->codec_dai;
 struct snd_soc_dai *VAR_9 = VAR_7->cpu_dai;
 unsigned int VAR_10 = 0;
 int VAR_11 = 0;
 int VAR_12 = FUNC_1(VAR_6);






 switch (VAR_12) {
 case 8000:
  VAR_10 = 12;
  break;
 case 16000:
  VAR_10 = 6;
  break;
 case 48000:
  VAR_10 = 2;
  break;
 default:

  return -VAR_0;
 }

 VAR_11 = FUNC_3(VAR_9, VAR_1, 0, 1);
 if (VAR_11 < 0)
  return VAR_11;

 if (VAR_4)
  VAR_11 = FUNC_2(VAR_8, VAR_3,
          FUNC_0(VAR_10));
 else
  VAR_11 = FUNC_2(VAR_8, VAR_2,
          FUNC_0(VAR_10));
 if (VAR_11 < 0)
  return VAR_11;

 return 0;
}
