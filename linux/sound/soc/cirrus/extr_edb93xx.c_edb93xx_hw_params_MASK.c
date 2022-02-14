
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
 unsigned int FUNC_0 (struct snd_pcm_hw_params*) ;
 int FUNC_1 (struct snd_soc_dai*,int ,unsigned int,int ) ;

__attribute__((used)) static int FUNC_2(struct snd_pcm_substream *VAR_2,
        struct snd_pcm_hw_params *VAR_3)
{
 struct snd_soc_pcm_runtime *VAR_4 = VAR_2->private_data;
 struct snd_soc_dai *VAR_5 = VAR_4->codec_dai;
 struct snd_soc_dai *VAR_6 = VAR_4->cpu_dai;
 int VAR_7;
 unsigned int VAR_8;
 unsigned int VAR_9 = FUNC_0(VAR_3);





 if (VAR_9 < 50000)
  VAR_8 = VAR_9 * 64 * 4;
 else
  VAR_8 = VAR_9 * 64 * 2;

 VAR_7 = FUNC_1(VAR_5, 0, VAR_8,
         VAR_0);
 if (VAR_7)
  return VAR_7;

 return FUNC_1(VAR_6, 0, VAR_8,
          VAR_1);
}
