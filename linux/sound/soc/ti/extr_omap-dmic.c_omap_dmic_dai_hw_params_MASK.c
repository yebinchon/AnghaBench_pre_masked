
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_soc_dai {int dummy; } ;
struct snd_pcm_substream {int dummy; } ;
struct snd_pcm_hw_params {int dummy; } ;
struct snd_dmaengine_dai_dma_data {int maxburst; } ;
struct omap_dmic {scalar_t__ clk_div; int threshold; int latency; int dev; scalar_t__ ch_enabled; int fclk_freq; int out_freq; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int ,char*,...) ;
 scalar_t__ FUNC_1 (struct omap_dmic*,int) ;
 int FUNC_2 (struct snd_pcm_hw_params*) ;
 int FUNC_3 (struct snd_pcm_hw_params*) ;
 struct snd_dmaengine_dai_dma_data* FUNC_4 (struct snd_soc_dai*,struct snd_pcm_substream*) ;
 struct omap_dmic* FUNC_5 (struct snd_soc_dai*) ;

__attribute__((used)) static int FUNC_6(struct snd_pcm_substream *VAR_6,
        struct snd_pcm_hw_params *VAR_7,
        struct snd_soc_dai *VAR_8)
{
 struct omap_dmic *VAR_9 = FUNC_5(VAR_8);
 struct snd_dmaengine_dai_dma_data *VAR_10;
 int VAR_11;

 VAR_9->clk_div = FUNC_1(VAR_9, FUNC_3(VAR_7));
 if (VAR_9->clk_div < 0) {
  FUNC_0(VAR_9->dev, "no valid divider for %dHz from %dHz\n",
   VAR_9->out_freq, VAR_9->fclk_freq);
  return -VAR_0;
 }

 VAR_9->ch_enabled = 0;
 VAR_11 = FUNC_2(VAR_7);
 switch (VAR_11) {
 case 6:
  VAR_9->ch_enabled |= VAR_4;

 case 4:
  VAR_9->ch_enabled |= VAR_3;

 case 2:
  VAR_9->ch_enabled |= VAR_2;
  break;
 default:
  FUNC_0(VAR_9->dev, "invalid number of legacy channels\n");
  return -VAR_0;
 }


 VAR_10 = FUNC_4(VAR_8, VAR_6);
 VAR_10->maxburst = VAR_9->threshold * VAR_11;
 VAR_9->latency = (VAR_1 - VAR_9->threshold) * VAR_5 /
   FUNC_3(VAR_7);

 return 0;
}
