
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct snd_pcm_substream {TYPE_1__* runtime; } ;
struct snd_pcm_indirect {scalar_t__ hw_data; scalar_t__ sw_data; } ;
struct rme32 {scalar_t__ iobase; } ;
struct TYPE_2__ {scalar_t__ dma_area; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (scalar_t__,scalar_t__,size_t) ;
 struct rme32* FUNC_1 (struct snd_pcm_substream*) ;

__attribute__((used)) static void FUNC_2(struct snd_pcm_substream *VAR_1,
        struct snd_pcm_indirect *VAR_2, size_t VAR_3)
{
 struct rme32 *VAR_4 = FUNC_1(VAR_1);
 FUNC_0(VAR_1->runtime->dma_area + VAR_2->sw_data,
        VAR_4->iobase + VAR_0 + VAR_2->hw_data,
        VAR_3);
}
