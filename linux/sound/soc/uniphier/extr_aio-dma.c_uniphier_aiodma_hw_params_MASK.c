
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct snd_pcm_substream {TYPE_1__* runtime; int dma_buffer; } ;
struct snd_pcm_hw_params {int dummy; } ;
struct TYPE_2__ {int dma_bytes; } ;


 int FUNC_0 (struct snd_pcm_hw_params*) ;
 int FUNC_1 (struct snd_pcm_substream*,int *) ;

__attribute__((used)) static int FUNC_2(struct snd_pcm_substream *VAR_0,
         struct snd_pcm_hw_params *VAR_1)
{
 FUNC_1(VAR_0, &VAR_0->dma_buffer);
 VAR_0->runtime->dma_bytes = FUNC_0(VAR_1);

 return 0;
}
