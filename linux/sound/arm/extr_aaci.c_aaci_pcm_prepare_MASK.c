
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_pcm_substream {struct snd_pcm_runtime* runtime; } ;
struct snd_pcm_runtime {scalar_t__ dma_area; struct aaci_runtime* private_data; } ;
struct aaci_runtime {int period; int bytes; scalar_t__ start; scalar_t__ ptr; scalar_t__ end; } ;


 scalar_t__ FUNC_0 (struct snd_pcm_substream*) ;
 int FUNC_1 (struct snd_pcm_substream*) ;

__attribute__((used)) static int FUNC_2(struct snd_pcm_substream *VAR_0)
{
 struct snd_pcm_runtime *VAR_1 = VAR_0->runtime;
 struct aaci_runtime *VAR_2 = VAR_1->private_data;

 VAR_2->period = FUNC_1(VAR_0);
 VAR_2->start = VAR_1->dma_area;
 VAR_2->end = VAR_2->start + FUNC_0(VAR_0);
 VAR_2->ptr = VAR_2->start;
 VAR_2->bytes = VAR_2->period;

 return 0;
}
