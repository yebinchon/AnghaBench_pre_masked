
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_soc_pcm_runtime {struct snd_soc_dai* codec_dai; struct snd_soc_dai* cpu_dai; } ;
struct snd_soc_dai {int dummy; } ;
struct snd_pcm_substream {struct snd_soc_pcm_runtime* private_data; } ;
struct snd_pcm_hw_params {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct snd_soc_dai*,int ,int,int ) ;
 int FUNC_1 (struct snd_soc_dai*,int,int,int,int) ;

__attribute__((used)) static int FUNC_2(struct snd_pcm_substream *VAR_1,
 struct snd_pcm_hw_params *VAR_2)
{
 struct snd_soc_pcm_runtime *VAR_3 = VAR_1->private_data;
 struct snd_soc_dai *VAR_4 = VAR_3->cpu_dai;
 struct snd_soc_dai *VAR_5 = VAR_3->codec_dai;
 int VAR_6;

 VAR_6 = FUNC_1(VAR_5, 0x3, 0x3, 4, 16);
 if (VAR_6)
  return VAR_6;

 VAR_6 = FUNC_0(VAR_5, VAR_0, 26000000, 0);
 if (VAR_6)
  return VAR_6;

 return FUNC_1(VAR_4, 0x3, 0x3, 2, 16);
}
