
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sprd_pcm_dma_private {struct snd_pcm_substream* substream; } ;
struct snd_pcm_substream {int dummy; } ;


 int FUNC_0 (struct snd_pcm_substream*) ;

__attribute__((used)) static void FUNC_1(void *VAR_0)
{
 struct sprd_pcm_dma_private *VAR_1 = VAR_0;
 struct snd_pcm_substream *VAR_2 = VAR_1->substream;

 FUNC_0(VAR_2);
}
