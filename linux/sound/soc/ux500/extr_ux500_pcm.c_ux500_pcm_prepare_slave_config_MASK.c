
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct ux500_msp_dma_params {void* tx_rx_addr; } ;
struct snd_soc_pcm_runtime {TYPE_2__* cpu_dai; } ;
struct snd_pcm_substream {scalar_t__ stream; struct snd_soc_pcm_runtime* private_data; } ;
struct snd_pcm_hw_params {int dummy; } ;
struct snd_dmaengine_dai_dma_data {void* addr; } ;
struct msp_i2s_platform_data {int dummy; } ;
struct dma_slave_config {int dst_maxburst; int src_maxburst; void* src_addr; void* dst_addr; void* dst_addr_width; void* src_addr_width; } ;
typedef void* dma_addr_t ;
struct TYPE_4__ {TYPE_1__* dev; } ;
struct TYPE_3__ {struct msp_i2s_platform_data* platform_data; } ;


 void* VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (struct snd_pcm_substream*,struct snd_pcm_hw_params*,struct dma_slave_config*) ;
 void* FUNC_1 (TYPE_2__*,struct snd_pcm_substream*) ;

__attribute__((used)) static int FUNC_2(struct snd_pcm_substream *VAR_2,
  struct snd_pcm_hw_params *VAR_3,
  struct dma_slave_config *VAR_4)
{
 struct snd_soc_pcm_runtime *VAR_5 = VAR_2->private_data;
 struct msp_i2s_platform_data *VAR_6 = VAR_5->cpu_dai->dev->platform_data;
 struct snd_dmaengine_dai_dma_data *VAR_7;
 struct ux500_msp_dma_params *VAR_8;
 dma_addr_t VAR_9;
 int VAR_10;

 if (VAR_6) {
  VAR_8 =
   FUNC_1(VAR_5->cpu_dai, VAR_2);
  VAR_9 = VAR_8->tx_rx_addr;
 } else {
  VAR_7 =
   FUNC_1(VAR_5->cpu_dai, VAR_2);
  VAR_9 = VAR_7->addr;
 }

 VAR_10 = FUNC_0(VAR_2, VAR_3, VAR_4);
 if (VAR_10)
  return VAR_10;

 VAR_4->dst_maxburst = 4;
 VAR_4->src_maxburst = 4;

 VAR_4->src_addr_width = VAR_0;
 VAR_4->dst_addr_width = VAR_0;

 if (VAR_2->stream == VAR_1)
  VAR_4->dst_addr = VAR_9;
 else
  VAR_4->src_addr = VAR_9;

 return 0;
}
