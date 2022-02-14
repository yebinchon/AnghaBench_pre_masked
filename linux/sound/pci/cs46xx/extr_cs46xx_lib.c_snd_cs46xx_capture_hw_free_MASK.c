
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct snd_pcm_substream {struct snd_pcm_runtime* runtime; } ;
struct snd_pcm_runtime {scalar_t__ dma_bytes; scalar_t__ dma_addr; int * dma_area; } ;
struct TYPE_3__ {int * area; } ;
struct TYPE_4__ {TYPE_1__ hw_buf; } ;
struct snd_cs46xx {TYPE_2__ capt; } ;


 int FUNC_0 (struct snd_pcm_substream*) ;
 struct snd_cs46xx* FUNC_1 (struct snd_pcm_substream*) ;

__attribute__((used)) static int FUNC_2(struct snd_pcm_substream *VAR_0)
{
 struct snd_cs46xx *VAR_1 = FUNC_1(VAR_0);
 struct snd_pcm_runtime *VAR_2 = VAR_0->runtime;

 if (VAR_2->dma_area != VAR_1->capt.hw_buf.area)
  FUNC_0(VAR_0);
 VAR_2->dma_area = ((void*)0);
 VAR_2->dma_addr = 0;
 VAR_2->dma_bytes = 0;

 return 0;
}
