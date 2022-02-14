
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_soc_pcm_runtime {struct snd_soc_dai* codec_dai; } ;
struct snd_soc_dai {int dummy; } ;
struct snd_pcm_substream {struct snd_soc_pcm_runtime* private_data; } ;
struct snd_pcm_hw_params {int dummy; } ;


 int FUNC_0 (struct snd_soc_dai*,int ) ;
 int FUNC_1 (struct snd_pcm_hw_params*) ;

__attribute__((used)) static int FUNC_2(struct snd_pcm_substream *VAR_0,
     struct snd_pcm_hw_params *VAR_1)
{
 struct snd_soc_pcm_runtime *VAR_2 = VAR_0->private_data;
 struct snd_soc_dai *VAR_3 = VAR_2->codec_dai;

 return FUNC_0(VAR_3, FUNC_1(VAR_1));
}
