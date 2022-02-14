
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct snd_pcm_substream {struct snd_pcm_runtime* runtime; } ;
struct snd_pcm_runtime {scalar_t__ dma_area; } ;
struct snd_pcm_indirect {scalar_t__ hw_data; scalar_t__ sw_data; } ;
struct TYPE_3__ {scalar_t__ area; } ;
struct TYPE_4__ {TYPE_1__ hw_buf; } ;
struct snd_cs46xx {TYPE_2__ capt; } ;


 int FUNC_0 (scalar_t__,scalar_t__,size_t) ;
 struct snd_cs46xx* FUNC_1 (struct snd_pcm_substream*) ;

__attribute__((used)) static void FUNC_2(struct snd_pcm_substream *VAR_0,
         struct snd_pcm_indirect *VAR_1, size_t VAR_2)
{
 struct snd_cs46xx *VAR_3 = FUNC_1(VAR_0);
 struct snd_pcm_runtime *VAR_4 = VAR_0->runtime;
 FUNC_0(VAR_4->dma_area + VAR_1->sw_data,
        VAR_3->capt.hw_buf.area + VAR_1->hw_data, VAR_2);
}
