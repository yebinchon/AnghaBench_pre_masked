
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_pcm_substream {struct snd_pcm_runtime* runtime; } ;
struct snd_pcm_runtime {struct fsl_asrc_pair* private_data; } ;
struct fsl_asrc_pair {int ** dma_chan; } ;


 size_t VAR_0 ;
 size_t VAR_1 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (struct snd_pcm_substream*,int *) ;

__attribute__((used)) static int FUNC_2(struct snd_pcm_substream *VAR_2)
{
 struct snd_pcm_runtime *VAR_3 = VAR_2->runtime;
 struct fsl_asrc_pair *VAR_4 = VAR_3->private_data;

 FUNC_1(VAR_2, ((void*)0));

 if (VAR_4->dma_chan[VAR_0])
  FUNC_0(VAR_4->dma_chan[VAR_0]);

 if (VAR_4->dma_chan[VAR_1])
  FUNC_0(VAR_4->dma_chan[VAR_1]);

 VAR_4->dma_chan[VAR_0] = ((void*)0);
 VAR_4->dma_chan[VAR_1] = ((void*)0);

 return 0;
}
