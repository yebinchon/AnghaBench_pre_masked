
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int * area; } ;
struct snd_pcm_substream {TYPE_1__ dma_buffer; } ;


 int FUNC_0 (TYPE_1__*) ;

__attribute__((used)) static void FUNC_1(struct snd_pcm_substream *VAR_0)
{
 if (VAR_0->dma_buffer.area == ((void*)0))
  return;
 FUNC_0(&VAR_0->dma_buffer);
 VAR_0->dma_buffer.area = ((void*)0);
}
