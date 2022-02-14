
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_pcm_substream {struct snd_pcm_runtime* runtime; } ;
struct snd_pcm_runtime {struct gus_pcm_private* private_data; } ;
struct gus_pcm_private {int dma_size; int block_size; int blocks; scalar_t__ bpos; } ;


 int FUNC_0 (struct snd_pcm_substream*) ;
 int FUNC_1 (struct snd_pcm_substream*) ;

__attribute__((used)) static int FUNC_2(struct snd_pcm_substream *VAR_0)
{
 struct snd_pcm_runtime *VAR_1 = VAR_0->runtime;
 struct gus_pcm_private *VAR_2 = VAR_1->private_data;

 VAR_2->bpos = 0;
 VAR_2->dma_size = FUNC_0(VAR_0);
 VAR_2->block_size = FUNC_1(VAR_0);
 VAR_2->blocks = VAR_2->dma_size / VAR_2->block_size;
 return 0;
}
