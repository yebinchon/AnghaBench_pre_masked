
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_pcm_runtime {int dummy; } ;
struct rsnd_mod {int dummy; } ;
struct rsnd_dmaen {scalar_t__ dma_len; int cookie; int chan; } ;
struct rsnd_dma {int dummy; } ;
struct rsnd_dai_stream {int dummy; } ;
struct dma_tx_state {scalar_t__ residue; } ;
typedef int snd_pcm_uframes_t ;
typedef enum dma_status { ____Placeholder_dma_status } dma_status ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct snd_pcm_runtime*,unsigned int) ;
 int FUNC_1 (int ,int ,struct dma_tx_state*) ;
 struct rsnd_dmaen* FUNC_2 (struct rsnd_dma*) ;
 struct snd_pcm_runtime* FUNC_3 (struct rsnd_dai_stream*) ;
 struct rsnd_dma* FUNC_4 (struct rsnd_mod*) ;

__attribute__((used)) static int FUNC_5(struct rsnd_mod *VAR_2,
         struct rsnd_dai_stream *VAR_3,
         snd_pcm_uframes_t *VAR_4)
{
 struct snd_pcm_runtime *VAR_5 = FUNC_3(VAR_3);
 struct rsnd_dma *VAR_6 = FUNC_4(VAR_2);
 struct rsnd_dmaen *VAR_7 = FUNC_2(VAR_6);
 struct dma_tx_state VAR_8;
 enum dma_status VAR_9;
 unsigned int VAR_10 = 0;

 VAR_9 = FUNC_1(VAR_7->chan, VAR_7->cookie, &VAR_8);
 if (VAR_9 == VAR_0 || VAR_9 == VAR_1) {
  if (VAR_8.residue > 0 && VAR_8.residue <= VAR_7->dma_len)
   VAR_10 = VAR_7->dma_len - VAR_8.residue;
 }
 *VAR_4 = FUNC_0(VAR_5, VAR_10);

 return 0;
}
