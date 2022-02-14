
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct snd_soc_pcm_runtime {int dummy; } ;
struct snd_soc_component {int dev; } ;
struct snd_pcm_substream {scalar_t__ stream; struct snd_soc_pcm_runtime* private_data; struct snd_pcm_runtime* runtime; } ;
struct snd_pcm_runtime {struct audio_substream_data* private_data; int hw; } ;
struct audio_substream_data {int acp_mmio; } ;
struct audio_drv_data {int asic_type; int acp_mmio; int capture_i2sbt_stream; int play_i2sbt_stream; int capture_i2ssp_stream; int play_i2ssp_stream; } ;



 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (int,int ,int ) ;
 int FUNC_1 (int ,int,int) ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_2 (int ,char*) ;
 struct audio_drv_data* FUNC_3 (int ) ;
 int FUNC_4 (struct audio_substream_data*) ;
 struct audio_substream_data* FUNC_5 (int,int ) ;
 int VAR_9 ;
 int FUNC_6 (struct snd_pcm_runtime*,int ) ;
 struct snd_soc_component* FUNC_7 (struct snd_soc_pcm_runtime*,int ) ;

__attribute__((used)) static int FUNC_8(struct snd_pcm_substream *VAR_10)
{
 u16 VAR_11;
 int VAR_12 = 0;
 struct snd_pcm_runtime *VAR_13 = VAR_10->runtime;
 struct snd_soc_pcm_runtime *VAR_14 = VAR_10->private_data;
 struct snd_soc_component *VAR_15 = FUNC_7(VAR_14,
            VAR_0);
 struct audio_drv_data *VAR_16 = FUNC_3(VAR_15->dev);
 struct audio_substream_data *VAR_17 =
  FUNC_5(sizeof(struct audio_substream_data), VAR_2);
 if (!VAR_17)
  return -VAR_1;

 if (VAR_10->stream == VAR_4) {
  switch (VAR_16->asic_type) {
  case 128:
   VAR_13->hw = VAR_8;
   break;
  default:
   VAR_13->hw = VAR_6;
  }
 } else {
  switch (VAR_16->asic_type) {
  case 128:
   VAR_13->hw = VAR_7;
   break;
  default:
   VAR_13->hw = VAR_5;
  }
 }

 VAR_12 = FUNC_6(VAR_13,
         VAR_3);
 if (VAR_12 < 0) {
  FUNC_2(VAR_15->dev, "set integer constraint failed\n");
  FUNC_4(VAR_17);
  return VAR_12;
 }

 VAR_17->acp_mmio = VAR_16->acp_mmio;
 VAR_13->private_data = VAR_17;







 if (!VAR_16->play_i2ssp_stream && !VAR_16->capture_i2ssp_stream &&
     !VAR_16->play_i2sbt_stream && !VAR_16->capture_i2sbt_stream)
  FUNC_0(1, VAR_17->acp_mmio, VAR_9);

 if (VAR_10->stream == VAR_4) {





  if (VAR_16->asic_type != 128) {
   for (VAR_11 = 1; VAR_11 <= 4; VAR_11++)
    FUNC_1(VAR_16->acp_mmio,
       VAR_11, 1);
  }
 } else {
  if (VAR_16->asic_type != 128) {
   for (VAR_11 = 5; VAR_11 <= 8; VAR_11++)
    FUNC_1(VAR_16->acp_mmio,
       VAR_11, 1);
  }
 }

 return 0;
}
