
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_pcm_substream {struct snd_pcm_runtime* runtime; } ;
struct snd_pcm_runtime {struct idma_ctrl* private_data; } ;
struct idma_ctrl {unsigned long start; int lock; } ;
typedef int snd_pcm_uframes_t ;
typedef unsigned long dma_addr_t ;


 int FUNC_0 (struct snd_pcm_runtime*,unsigned long) ;
 int FUNC_1 (unsigned long*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static snd_pcm_uframes_t
 FUNC_4(struct snd_pcm_substream *VAR_0)
{
 struct snd_pcm_runtime *VAR_1 = VAR_0->runtime;
 struct idma_ctrl *VAR_2 = VAR_1->private_data;
 dma_addr_t VAR_3;
 unsigned long VAR_4;

 FUNC_2(&VAR_2->lock);

 FUNC_1(&VAR_3);
 VAR_4 = VAR_3 - VAR_2->start;

 FUNC_3(&VAR_2->lock);

 return FUNC_0(VAR_0->runtime, VAR_4);
}
