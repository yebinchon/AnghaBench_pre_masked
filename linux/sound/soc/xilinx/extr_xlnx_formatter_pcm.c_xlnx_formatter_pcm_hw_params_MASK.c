
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u64 ;
typedef int u32 ;
struct xlnx_pcm_stream_param {int ch_limit; scalar_t__ xfer_mode; scalar_t__ mmio; int buffer_size; } ;
struct snd_soc_pcm_runtime {int dummy; } ;
struct snd_soc_component {int dev; } ;
struct TYPE_2__ {int addr; } ;
struct snd_pcm_substream {scalar_t__ stream; TYPE_1__ dma_buffer; struct snd_pcm_runtime* runtime; struct snd_soc_pcm_runtime* private_data; } ;
struct snd_pcm_runtime {struct xlnx_pcm_stream_param* private_data; } ;
struct snd_pcm_hw_params {int dummy; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_0 (int,int) ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 scalar_t__ VAR_12 ;
 scalar_t__ VAR_13 ;
 scalar_t__ VAR_14 ;
 scalar_t__ VAR_15 ;
 scalar_t__ VAR_16 ;
 scalar_t__ VAR_17 ;
 scalar_t__ VAR_18 ;
 scalar_t__ VAR_19 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct snd_pcm_hw_params*) ;
 int FUNC_3 (struct snd_pcm_hw_params*) ;
 int FUNC_4 (struct snd_pcm_hw_params*) ;
 int FUNC_5 (struct snd_pcm_hw_params*) ;
 int FUNC_6 (struct snd_pcm_hw_params*) ;
 int FUNC_7 (scalar_t__) ;
 int FUNC_8 (struct snd_pcm_substream*,int ) ;
 struct snd_soc_component* FUNC_9 (struct snd_soc_pcm_runtime*,int ) ;
 int FUNC_10 (int ) ;
 int FUNC_11 (int,scalar_t__) ;
 int FUNC_12 (int,int,int ) ;

__attribute__((used)) static int FUNC_13(struct snd_pcm_substream *VAR_20,
     struct snd_pcm_hw_params *VAR_21)
{
 u32 VAR_22, VAR_23, VAR_24, VAR_25, VAR_26, VAR_27;
 u32 VAR_28, VAR_29;
 int VAR_30;
 u64 VAR_31;
 struct snd_soc_pcm_runtime *VAR_32 = VAR_20->private_data;
 struct snd_soc_component *VAR_33 = FUNC_9(VAR_32,
            VAR_9);
 struct snd_pcm_runtime *VAR_34 = VAR_20->runtime;
 struct xlnx_pcm_stream_param *VAR_35 = VAR_34->private_data;

 VAR_24 = FUNC_3(VAR_21);
 if (VAR_24 > VAR_35->ch_limit)
  return -VAR_10;

 if (VAR_20->stream == VAR_12 &&
     VAR_35->xfer_mode == VAR_0) {
  VAR_25 = FUNC_7(VAR_35->mmio + VAR_18);
  if (VAR_25 & VAR_3) {
   VAR_28 = FUNC_7(VAR_35->mmio +
          VAR_15);
   VAR_29 = FUNC_7(VAR_35->mmio +
          VAR_15 + 0x4);

   FUNC_12(VAR_28, VAR_29,
           VAR_33->dev);
  }
 }

 VAR_31 = FUNC_2(VAR_21);
 VAR_30 = FUNC_8(VAR_20, VAR_31);
 if (VAR_30 < 0)
  return VAR_30;

 VAR_35->buffer_size = VAR_31;

 VAR_22 = FUNC_1(VAR_20->dma_buffer.addr);
 VAR_23 = FUNC_10(VAR_20->dma_buffer.addr);
 FUNC_11(VAR_22, VAR_35->mmio + VAR_13);
 FUNC_11(VAR_23, VAR_35->mmio + VAR_14);

 VAR_25 = FUNC_7(VAR_35->mmio + VAR_16);
 VAR_27 = FUNC_6(VAR_21);
 switch (VAR_27) {
 case 8:
  VAR_25 |= (VAR_8 << VAR_2);
  break;
 case 16:
  VAR_25 |= (VAR_4 << VAR_2);
  break;
 case 20:
  VAR_25 |= (VAR_5 << VAR_2);
  break;
 case 24:
  VAR_25 |= (VAR_6 << VAR_2);
  break;
 case 32:
  VAR_25 |= (VAR_7 << VAR_2);
  break;
 default:
  return -VAR_10;
 }

 VAR_25 |= VAR_24 << VAR_1;
 FUNC_11(VAR_25, VAR_35->mmio + VAR_16);

 VAR_25 = (FUNC_5(VAR_21) << VAR_11)
  | FUNC_4(VAR_21);
 FUNC_11(VAR_25, VAR_35->mmio + VAR_17);
 VAR_26 = FUNC_0(FUNC_4(VAR_21), VAR_24);
 FUNC_11(VAR_26, VAR_35->mmio + VAR_19);

 return 0;
}
