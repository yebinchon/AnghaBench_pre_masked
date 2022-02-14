
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sprd_pcm_dma_private {struct sprd_pcm_dma_data* data; } ;
struct sprd_pcm_dma_data {int * chan; } ;
struct snd_pcm_substream {struct snd_pcm_runtime* runtime; } ;
struct snd_pcm_runtime {struct sprd_pcm_dma_private* private_data; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;

__attribute__((used)) static void FUNC_1(struct snd_pcm_substream *VAR_1)
{
 struct snd_pcm_runtime *VAR_2 = VAR_1->runtime;
 struct sprd_pcm_dma_private *VAR_3 = VAR_2->private_data;
 int VAR_4;

 for (VAR_4 = 0; VAR_4 < VAR_0; VAR_4++) {
  struct sprd_pcm_dma_data *VAR_5 = &VAR_3->data[VAR_4];

  if (VAR_5->chan) {
   FUNC_0(VAR_5->chan);
   VAR_5->chan = ((void*)0);
  }
 }
}
