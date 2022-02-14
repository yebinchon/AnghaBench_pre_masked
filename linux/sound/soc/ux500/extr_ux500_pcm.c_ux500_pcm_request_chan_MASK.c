
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef void* u16 ;
struct ux500_msp_dma_params {int data_size; struct stedma40_chan_cfg* dma_cfg; } ;
struct TYPE_4__ {void* data_width; } ;
struct TYPE_3__ {void* data_width; } ;
struct stedma40_chan_cfg {TYPE_2__ dst_info; TYPE_1__ src_info; } ;
struct snd_soc_pcm_runtime {struct snd_soc_dai* cpu_dai; } ;
struct snd_soc_dai {int dummy; } ;
struct snd_pcm_substream {scalar_t__ stream; } ;
struct dma_chan {int dummy; } ;


 void* VAR_0 ;
 void* VAR_1 ;
 void* VAR_2 ;
 scalar_t__ VAR_3 ;
 struct dma_chan* FUNC_0 (int ,struct stedma40_chan_cfg*) ;
 struct ux500_msp_dma_params* FUNC_1 (struct snd_soc_dai*,struct snd_pcm_substream*) ;
 int VAR_4 ;

__attribute__((used)) static struct dma_chan *FUNC_2(struct snd_soc_pcm_runtime *VAR_5,
 struct snd_pcm_substream *VAR_6)
{
 struct snd_soc_dai *VAR_7 = VAR_5->cpu_dai;
 u16 VAR_8, VAR_9;
 struct stedma40_chan_cfg *VAR_10;
 struct ux500_msp_dma_params *VAR_11;

 VAR_11 = FUNC_1(VAR_7, VAR_6);
 VAR_10 = VAR_11->dma_cfg;

 VAR_9 = VAR_1;

 switch (VAR_11->data_size) {
 case 32:
  VAR_8 = VAR_2;
  break;
 case 16:
  VAR_8 = VAR_1;
  break;
 case 8:
  VAR_8 = VAR_0;
  break;
 default:
  VAR_8 = VAR_2;
 }

 if (VAR_6->stream == VAR_3) {
  VAR_10->src_info.data_width = VAR_9;
  VAR_10->dst_info.data_width = VAR_8;
 } else {
  VAR_10->src_info.data_width = VAR_8;
  VAR_10->dst_info.data_width = VAR_9;
 }

 return FUNC_0(VAR_4, VAR_10);
}
