
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct snd_pcm_substream {TYPE_1__* runtime; } ;
struct TYPE_2__ {scalar_t__ dma_bytes; } ;


 int FUNC_0 (struct snd_pcm_substream*,int *) ;

__attribute__((used)) static int FUNC_1(struct snd_pcm_substream *VAR_0)
{
 FUNC_0(VAR_0, ((void*)0));
 VAR_0->runtime->dma_bytes = 0;

 return 0;
}
