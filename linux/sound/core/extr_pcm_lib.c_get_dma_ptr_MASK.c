
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_pcm_runtime {void* dma_area; int dma_bytes; int channels; } ;



__attribute__((used)) static void *FUNC_0(struct snd_pcm_runtime *VAR_0,
      int VAR_1, unsigned long VAR_2)
{
 return VAR_0->dma_area + VAR_2 +
  VAR_1 * (VAR_0->dma_bytes / VAR_0->channels);
}
