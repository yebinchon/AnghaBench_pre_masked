
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct txx9aclc_dmadata {int buffer_bytes; int period_bytes; int frag_bytes; int frags; scalar_t__ pos; scalar_t__ frag_count; int dma_addr; } ;
struct snd_pcm_substream {struct snd_pcm_runtime* runtime; } ;
struct snd_pcm_runtime {int dma_addr; struct txx9aclc_dmadata* private_data; } ;


 int FUNC_0 (struct snd_pcm_substream*) ;
 int FUNC_1 (struct snd_pcm_substream*) ;

__attribute__((used)) static int FUNC_2(struct snd_pcm_substream *VAR_0)
{
 struct snd_pcm_runtime *VAR_1 = VAR_0->runtime;
 struct txx9aclc_dmadata *VAR_2 = VAR_1->private_data;

 VAR_2->dma_addr = VAR_1->dma_addr;
 VAR_2->buffer_bytes = FUNC_0(VAR_0);
 VAR_2->period_bytes = FUNC_1(VAR_0);

 if (VAR_2->buffer_bytes == VAR_2->period_bytes) {
  VAR_2->frag_bytes = VAR_2->period_bytes >> 1;
  VAR_2->frags = 2;
 } else {
  VAR_2->frag_bytes = VAR_2->period_bytes;
  VAR_2->frags = VAR_2->buffer_bytes / VAR_2->period_bytes;
 }
 VAR_2->frag_count = 0;
 VAR_2->pos = 0;
 return 0;
}
