
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct snd_pcm_substream {struct snd_pcm_runtime* runtime; } ;
struct snd_pcm_runtime {scalar_t__ dma_area; struct snd_cs46xx_pcm* private_data; } ;
struct snd_pcm_indirect {scalar_t__ sw_data; scalar_t__ hw_data; } ;
struct TYPE_2__ {scalar_t__ area; } ;
struct snd_cs46xx_pcm {TYPE_1__ hw_buf; } ;


 int FUNC_0 (scalar_t__,scalar_t__,size_t) ;

__attribute__((used)) static void FUNC_1(struct snd_pcm_substream *VAR_0,
         struct snd_pcm_indirect *VAR_1, size_t VAR_2)
{
 struct snd_pcm_runtime *VAR_3 = VAR_0->runtime;
 struct snd_cs46xx_pcm * VAR_4 = VAR_3->private_data;
 FUNC_0(VAR_4->hw_buf.area + VAR_1->hw_data, VAR_3->dma_area + VAR_1->sw_data, VAR_2);
}
