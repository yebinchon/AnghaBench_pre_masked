
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct snd_pcm_substream {struct snd_pcm_runtime* runtime; } ;
struct snd_pcm_runtime {scalar_t__ dma_bytes; scalar_t__ dma_addr; int * dma_area; struct snd_cs46xx_pcm* private_data; } ;
struct TYPE_2__ {int * area; } ;
struct snd_cs46xx_pcm {TYPE_1__ hw_buf; } ;


 int VAR_0 ;
 int FUNC_0 (struct snd_pcm_substream*) ;

__attribute__((used)) static int FUNC_1(struct snd_pcm_substream *VAR_1)
{

 struct snd_pcm_runtime *VAR_2 = VAR_1->runtime;
 struct snd_cs46xx_pcm *VAR_3;

 VAR_3 = VAR_2->private_data;



 if (!VAR_3) return -VAR_0;

 if (VAR_2->dma_area != VAR_3->hw_buf.area)
  FUNC_0(VAR_1);

 VAR_2->dma_area = ((void*)0);
 VAR_2->dma_addr = 0;
 VAR_2->dma_bytes = 0;

 return 0;
}
