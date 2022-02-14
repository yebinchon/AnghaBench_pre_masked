
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_soc_pcm_runtime {int dev; } ;
struct snd_soc_component {int dummy; } ;
struct snd_pcm_substream {int stream; struct snd_pcm_runtime* runtime; struct snd_soc_pcm_runtime* private_data; } ;
struct snd_pcm_runtime {struct lpass_pcm_data* private_data; } ;
struct snd_pcm_hw_params {int dummy; } ;
struct lpass_variant {int dmactl_audif_start; } ;
struct lpass_pcm_data {int i2s_port; int dma_ch; } ;
struct lpass_data {int lpaif_map; struct lpass_variant* variant; } ;
typedef int snd_pcm_format_t ;


 int VAR_0 ;
 int VAR_1 ;
 unsigned int FUNC_0 (int) ;
 unsigned int VAR_2 ;
 unsigned int VAR_3 ;
 int FUNC_1 (struct lpass_variant*,int,int) ;
 unsigned int VAR_4 ;
 unsigned int VAR_5 ;
 unsigned int VAR_6 ;
 unsigned int VAR_7 ;
 unsigned int VAR_8 ;
 unsigned int VAR_9 ;
 int FUNC_2 (int ,char*,int,...) ;
 unsigned int FUNC_3 (struct snd_pcm_hw_params*) ;
 int FUNC_4 (struct snd_pcm_hw_params*) ;
 int FUNC_5 (int ,int ,unsigned int) ;
 int FUNC_6 (int ) ;
 struct lpass_data* FUNC_7 (struct snd_soc_component*) ;
 struct snd_soc_component* FUNC_8 (struct snd_soc_pcm_runtime*,int ) ;

__attribute__((used)) static int FUNC_9(struct snd_pcm_substream *VAR_10,
  struct snd_pcm_hw_params *VAR_11)
{
 struct snd_soc_pcm_runtime *VAR_12 = VAR_10->private_data;
 struct snd_soc_component *VAR_13 = FUNC_8(VAR_12, VAR_0);
 struct lpass_data *VAR_14 = FUNC_7(VAR_13);
 struct snd_pcm_runtime *VAR_15 = VAR_10->runtime;
 struct lpass_pcm_data *VAR_16 = VAR_15->private_data;
 struct lpass_variant *VAR_17 = VAR_14->variant;
 snd_pcm_format_t VAR_18 = FUNC_4(VAR_11);
 unsigned int VAR_19 = FUNC_3(VAR_11);
 unsigned int VAR_20;
 int VAR_21, VAR_22 = VAR_10->stream;
 int VAR_23;
 int VAR_24, VAR_25 = VAR_16->i2s_port + VAR_17->dmactl_audif_start;

 VAR_21 = VAR_16->dma_ch;

 VAR_23 = FUNC_6(VAR_18);
 if (VAR_23 < 0) {
  FUNC_2(VAR_12->dev, "invalid bit width given: %d\n",
    VAR_23);
  return VAR_23;
 }

 VAR_20 = VAR_2 |
   FUNC_0(VAR_25) |
   VAR_3;

 switch (VAR_23) {
 case 16:
  switch (VAR_19) {
  case 1:
  case 2:
   VAR_20 |= VAR_6;
   break;
  case 4:
   VAR_20 |= VAR_9;
   break;
  case 6:
   VAR_20 |= VAR_8;
   break;
  case 8:
   VAR_20 |= VAR_5;
   break;
  default:
   FUNC_2(VAR_12->dev,
    "invalid PCM config given: bw=%d, ch=%u\n",
    VAR_23, VAR_19);
   return -VAR_1;
  }
  break;
 case 24:
 case 32:
  switch (VAR_19) {
  case 1:
   VAR_20 |= VAR_6;
   break;
  case 2:
   VAR_20 |= VAR_9;
   break;
  case 4:
   VAR_20 |= VAR_5;
   break;
  case 6:
   VAR_20 |= VAR_7;
   break;
  case 8:
   VAR_20 |= VAR_4;
   break;
  default:
   FUNC_2(VAR_12->dev,
    "invalid PCM config given: bw=%d, ch=%u\n",
    VAR_23, VAR_19);
   return -VAR_1;
  }
  break;
 default:
  FUNC_2(VAR_12->dev, "invalid PCM config given: bw=%d, ch=%u\n",
   VAR_23, VAR_19);
  return -VAR_1;
 }

 VAR_24 = FUNC_5(VAR_14->lpaif_map,
   FUNC_1(VAR_17, VAR_21, VAR_22), VAR_20);
 if (VAR_24) {
  FUNC_2(VAR_12->dev, "error writing to rdmactl reg: %d\n",
   VAR_24);
  return VAR_24;
 }

 return 0;
}
