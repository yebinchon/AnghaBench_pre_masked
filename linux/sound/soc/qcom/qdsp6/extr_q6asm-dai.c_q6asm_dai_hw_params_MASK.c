
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_pcm_substream {struct snd_pcm_runtime* runtime; } ;
struct snd_pcm_runtime {struct q6asm_dai_rtd* private_data; } ;
struct snd_pcm_hw_params {int dummy; } ;
struct q6asm_dai_rtd {int bits_per_sample; int periods; int pcm_size; } ;




 int FUNC_0 (struct snd_pcm_hw_params*) ;
 int FUNC_1 (struct snd_pcm_hw_params*) ;
 int FUNC_2 (struct snd_pcm_hw_params*) ;

__attribute__((used)) static int FUNC_3(struct snd_pcm_substream *VAR_0,
    struct snd_pcm_hw_params *VAR_1)
{
 struct snd_pcm_runtime *VAR_2 = VAR_0->runtime;
 struct q6asm_dai_rtd *VAR_3 = VAR_2->private_data;

 VAR_3->pcm_size = FUNC_0(VAR_1);
 VAR_3->periods = FUNC_2(VAR_1);

 switch (FUNC_1(VAR_1)) {
 case 129:
  VAR_3->bits_per_sample = 16;
  break;
 case 128:
  VAR_3->bits_per_sample = 24;
  break;
 }

 return 0;
}
