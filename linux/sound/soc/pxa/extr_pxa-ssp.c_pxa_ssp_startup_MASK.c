
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ssp_priv {scalar_t__ extclk; struct ssp_device* ssp; } ;
struct ssp_device {scalar_t__ clk; } ;
struct snd_soc_dai {int active; } ;
struct snd_pcm_substream {scalar_t__ stream; } ;
struct snd_dmaengine_dai_dma_data {char* chan_name; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (scalar_t__) ;
 struct snd_dmaengine_dai_dma_data* FUNC_1 (int,int ) ;
 int FUNC_2 (struct ssp_device*) ;
 struct ssp_priv* FUNC_3 (struct snd_soc_dai*) ;
 int FUNC_4 (struct snd_soc_dai*,struct snd_pcm_substream*,struct snd_dmaengine_dai_dma_data*) ;

__attribute__((used)) static int FUNC_5(struct snd_pcm_substream *VAR_3,
      struct snd_soc_dai *VAR_4)
{
 struct ssp_priv *VAR_5 = FUNC_3(VAR_4);
 struct ssp_device *VAR_6 = VAR_5->ssp;
 struct snd_dmaengine_dai_dma_data *VAR_7;
 int VAR_8 = 0;

 if (!VAR_4->active) {
  FUNC_0(VAR_6->clk);
  FUNC_2(VAR_6);
 }

 if (VAR_5->extclk)
  FUNC_0(VAR_5->extclk);

 VAR_7 = FUNC_1(sizeof(struct snd_dmaengine_dai_dma_data), VAR_1);
 if (!VAR_7)
  return -VAR_0;
 VAR_7->chan_name = VAR_3->stream == VAR_2 ?
  "tx" : "rx";

 FUNC_4(VAR_4, VAR_3, VAR_7);

 return VAR_8;
}
