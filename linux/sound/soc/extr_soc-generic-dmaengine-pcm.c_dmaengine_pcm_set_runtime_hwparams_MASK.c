
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct snd_soc_pcm_runtime {int cpu_dai; } ;
struct snd_soc_component {int dummy; } ;
struct snd_pcm_substream {size_t stream; struct snd_soc_pcm_runtime* private_data; } ;
struct snd_pcm_hardware {int info; int periods_min; int period_bytes_min; int formats; int fifo_size; int buffer_bytes_max; int period_bytes_max; int periods_max; } ;
struct snd_dmaengine_dai_dma_data {int flags; int fifo_size; } ;
struct dmaengine_pcm {int flags; TYPE_1__* config; struct dma_chan** chan; } ;
struct dma_slave_caps {scalar_t__ residue_granularity; int dst_addr_widths; int src_addr_widths; scalar_t__ cmd_resume; scalar_t__ cmd_pause; } ;
struct dma_chan {int dummy; } ;
struct device {int dummy; } ;
typedef scalar_t__ snd_pcm_format_t ;
typedef int hw ;
struct TYPE_2__ {struct snd_pcm_hardware* pcm_hardware; } ;


 int FUNC_0 (int ) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 size_t VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int FUNC_1 (struct device*) ;
 int FUNC_2 (struct dma_chan*,struct dma_slave_caps*) ;
 struct device* FUNC_3 (struct dmaengine_pcm*,struct snd_pcm_substream*) ;
 int FUNC_4 (struct snd_pcm_hardware*,int ,int) ;
 int FUNC_5 (scalar_t__) ;
 int FUNC_6 (scalar_t__) ;
 struct snd_dmaengine_dai_dma_data* FUNC_7 (int ,struct snd_pcm_substream*) ;
 struct snd_soc_component* FUNC_8 (struct snd_soc_pcm_runtime*,int ) ;
 int FUNC_9 (struct snd_pcm_substream*,struct snd_pcm_hardware*) ;
 struct dmaengine_pcm* FUNC_10 (struct snd_soc_component*) ;

__attribute__((used)) static int FUNC_11(struct snd_pcm_substream *VAR_18)
{
 struct snd_soc_pcm_runtime *VAR_19 = VAR_18->private_data;
 struct snd_soc_component *VAR_20 =
  FUNC_8(VAR_19, VAR_15);
 struct dmaengine_pcm *VAR_21 = FUNC_10(VAR_20);
 struct device *VAR_22 = FUNC_3(VAR_21, VAR_18);
 struct dma_chan *VAR_23 = VAR_21->chan[VAR_18->stream];
 struct snd_dmaengine_dai_dma_data *VAR_24;
 struct dma_slave_caps VAR_25;
 struct snd_pcm_hardware VAR_26;
 u32 VAR_27 = FUNC_0(VAR_1) |
     FUNC_0(VAR_2) |
     FUNC_0(VAR_3);
 snd_pcm_format_t VAR_28;
 int VAR_29;

 if (VAR_21->config && VAR_21->config->pcm_hardware)
  return FUNC_9(VAR_18,
    VAR_21->config->pcm_hardware);

 VAR_24 = FUNC_7(VAR_19->cpu_dai, VAR_18);

 FUNC_4(&VAR_26, 0, sizeof(VAR_26));
 VAR_26.info = VAR_9 | VAR_10 |
   VAR_8;
 VAR_26.periods_min = 2;
 VAR_26.periods_max = VAR_17;
 VAR_26.period_bytes_min = 256;
 VAR_26.period_bytes_max = FUNC_1(VAR_22);
 VAR_26.buffer_bytes_max = VAR_4;
 VAR_26.fifo_size = VAR_24->fifo_size;

 if (VAR_21->flags & VAR_16)
  VAR_26.info |= VAR_7;

 VAR_29 = FUNC_2(VAR_23, &VAR_25);
 if (VAR_29 == 0) {
  if (VAR_25.cmd_pause && VAR_25.cmd_resume)
   VAR_26.info |= VAR_11 | VAR_12;
  if (VAR_25.residue_granularity <= VAR_0)
   VAR_26.info |= VAR_7;

  if (VAR_18->stream == VAR_13)
   VAR_27 = VAR_25.dst_addr_widths;
  else
   VAR_27 = VAR_25.src_addr_widths;
 }







 if (!(VAR_24->flags & VAR_14))
  for (VAR_28 = VAR_5; VAR_28 <= VAR_6; VAR_28++) {
   int VAR_30 = FUNC_6(VAR_28);





   switch (VAR_30) {
   case 8:
   case 16:
   case 24:
   case 32:
   case 64:
    if (VAR_27 & (1 << (VAR_30 / 8)))
     VAR_26.formats |= FUNC_5(VAR_28);
    break;
   default:

    break;
   }
  }

 return FUNC_9(VAR_18, &VAR_26);
}
