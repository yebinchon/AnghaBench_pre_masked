
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct snd_soc_pcm_runtime {int dummy; } ;
struct snd_soc_component {int dev; } ;
struct snd_pcm_substream {scalar_t__ stream; struct snd_soc_pcm_runtime* private_data; struct snd_pcm_runtime* runtime; } ;
struct snd_pcm_runtime {struct audio_substream_data* private_data; } ;
struct audio_substream_data {int i2s_instance; } ;
struct audio_drv_data {int acp_mmio; int * capture_i2sbt_stream; int * play_i2sbt_stream; int * capture_i2ssp_stream; int * play_i2ssp_stream; int asic_type; } ;


 int VAR_0 ;
 int VAR_1 ;


 scalar_t__ VAR_2 ;
 int FUNC_0 (int ,int ,int ) ;
 int FUNC_1 (int ,int,int) ;
 struct audio_drv_data* FUNC_2 (int ) ;
 int FUNC_3 (struct audio_substream_data*) ;
 int VAR_3 ;
 struct snd_soc_component* FUNC_4 (struct snd_soc_pcm_runtime*,int ) ;

__attribute__((used)) static int FUNC_5(struct snd_pcm_substream *VAR_4)
{
 u16 VAR_5;
 struct snd_pcm_runtime *VAR_6 = VAR_4->runtime;
 struct audio_substream_data *VAR_7 = VAR_6->private_data;
 struct snd_soc_pcm_runtime *VAR_8 = VAR_4->private_data;
 struct snd_soc_component *VAR_9 = FUNC_4(VAR_8,
            VAR_1);
 struct audio_drv_data *VAR_10 = FUNC_2(VAR_9->dev);

 if (VAR_4->stream == VAR_2) {
  switch (VAR_7->i2s_instance) {
  case 129:
   VAR_10->play_i2sbt_stream = ((void*)0);
   break;
  case 128:
  default:
   VAR_10->play_i2ssp_stream = ((void*)0);







   if (VAR_10->asic_type != VAR_0) {
    for (VAR_5 = 1; VAR_5 <= 4; VAR_5++)
     FUNC_1(VAR_10->acp_mmio,
        VAR_5, 0);
   }
  }
 } else {
  switch (VAR_7->i2s_instance) {
  case 129:
   VAR_10->capture_i2sbt_stream = ((void*)0);
   break;
  case 128:
  default:
   VAR_10->capture_i2ssp_stream = ((void*)0);
   if (VAR_10->asic_type != VAR_0) {
    for (VAR_5 = 5; VAR_5 <= 8; VAR_5++)
     FUNC_1(VAR_10->acp_mmio,
        VAR_5, 0);
   }
  }
 }





 if (!VAR_10->play_i2ssp_stream && !VAR_10->capture_i2ssp_stream &&
     !VAR_10->play_i2sbt_stream && !VAR_10->capture_i2sbt_stream)
  FUNC_0(0, VAR_10->acp_mmio, VAR_3);
 FUNC_3(VAR_7);
 return 0;
}
