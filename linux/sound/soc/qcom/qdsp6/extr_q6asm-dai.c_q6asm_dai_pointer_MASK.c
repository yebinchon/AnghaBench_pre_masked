
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_pcm_substream {struct snd_pcm_runtime* runtime; } ;
struct snd_pcm_runtime {struct q6asm_dai_rtd* private_data; } ;
struct q6asm_dai_rtd {scalar_t__ pcm_irq_pos; scalar_t__ pcm_size; } ;
typedef int snd_pcm_uframes_t ;


 int FUNC_0 (struct snd_pcm_runtime*,scalar_t__) ;

__attribute__((used)) static snd_pcm_uframes_t FUNC_1(struct snd_pcm_substream *VAR_0)
{

 struct snd_pcm_runtime *VAR_1 = VAR_0->runtime;
 struct q6asm_dai_rtd *VAR_2 = VAR_1->private_data;

 if (VAR_2->pcm_irq_pos >= VAR_2->pcm_size)
  VAR_2->pcm_irq_pos = 0;

 return FUNC_0(VAR_1, (VAR_2->pcm_irq_pos));
}
