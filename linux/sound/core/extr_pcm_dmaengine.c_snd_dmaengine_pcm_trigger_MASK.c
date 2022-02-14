
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_pcm_substream {struct snd_pcm_runtime* runtime; } ;
struct snd_pcm_runtime {int info; } ;
struct dmaengine_pcm_runtime_data {int dma_chan; } ;


 int VAR_0 ;
 int VAR_1 ;






 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct snd_pcm_substream*) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 struct dmaengine_pcm_runtime_data* FUNC_5 (struct snd_pcm_substream*) ;

int FUNC_6(struct snd_pcm_substream *VAR_2, int VAR_3)
{
 struct dmaengine_pcm_runtime_data *VAR_4 = FUNC_5(VAR_2);
 struct snd_pcm_runtime *VAR_5 = VAR_2->runtime;
 int VAR_6;

 switch (VAR_3) {
 case 130:
  VAR_6 = FUNC_2(VAR_2);
  if (VAR_6)
   return VAR_6;
  FUNC_0(VAR_4->dma_chan);
  break;
 case 131:
 case 132:
  FUNC_3(VAR_4->dma_chan);
  break;
 case 128:
  if (VAR_5->info & VAR_1)
   FUNC_1(VAR_4->dma_chan);
  else
   FUNC_4(VAR_4->dma_chan);
  break;
 case 133:
  FUNC_1(VAR_4->dma_chan);
  break;
 case 129:
  FUNC_4(VAR_4->dma_chan);
  break;
 default:
  return -VAR_0;
 }

 return 0;
}
