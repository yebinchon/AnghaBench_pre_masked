
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int dma_shared; int * dma_data_synth_last; int dma_data_synth; int dma_data_pcm_last; int dma_data_pcm; int interrupt_handler_dma_write; } ;
struct snd_gus_card {int dma_mutex; TYPE_1__ gf1; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int VAR_0 ;

int FUNC_2(struct snd_gus_card * VAR_1)
{
 FUNC_0(&VAR_1->dma_mutex);
 VAR_1->gf1.dma_shared++;
 if (VAR_1->gf1.dma_shared > 1) {
  FUNC_1(&VAR_1->dma_mutex);
  return 0;
 }
 VAR_1->gf1.interrupt_handler_dma_write = VAR_0;
 VAR_1->gf1.dma_data_pcm =
 VAR_1->gf1.dma_data_pcm_last =
 VAR_1->gf1.dma_data_synth =
 *(VAR_1->gf1.dma_data_synth_last = ((void*)0));
 FUNC_1(&VAR_1->dma_mutex);
 return 0;
}
