
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_pcm_substream {int runtime; } ;
struct dmaengine_pcm_runtime_data {int cookie; int dma_chan; } ;
struct dma_tx_state {unsigned int residue; } ;
typedef int snd_pcm_uframes_t ;
typedef enum dma_status { ____Placeholder_dma_status } dma_status ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,unsigned int) ;
 int FUNC_1 (int ,int ,struct dma_tx_state*) ;
 unsigned int FUNC_2 (struct snd_pcm_substream*) ;
 struct dmaengine_pcm_runtime_data* FUNC_3 (struct snd_pcm_substream*) ;

snd_pcm_uframes_t FUNC_4(struct snd_pcm_substream *VAR_2)
{
 struct dmaengine_pcm_runtime_data *VAR_3 = FUNC_3(VAR_2);
 struct dma_tx_state VAR_4;
 enum dma_status VAR_5;
 unsigned int VAR_6;
 unsigned int VAR_7 = 0;

 VAR_5 = FUNC_1(VAR_3->dma_chan, VAR_3->cookie, &VAR_4);
 if (VAR_5 == VAR_0 || VAR_5 == VAR_1) {
  VAR_6 = FUNC_2(VAR_2);
  if (VAR_4.residue > 0 && VAR_4.residue <= VAR_6)
   VAR_7 = VAR_6 - VAR_4.residue;
 }

 return FUNC_0(VAR_2->runtime, VAR_7);
}
