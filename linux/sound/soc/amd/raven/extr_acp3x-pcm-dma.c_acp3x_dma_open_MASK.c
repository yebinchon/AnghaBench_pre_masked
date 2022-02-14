
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_soc_pcm_runtime {int dummy; } ;
struct snd_soc_component {int dev; } ;
struct snd_pcm_substream {scalar_t__ stream; struct snd_soc_pcm_runtime* private_data; struct snd_pcm_runtime* runtime; } ;
struct snd_pcm_runtime {struct i2s_stream_instance* private_data; int hw; } ;
struct i2s_stream_instance {scalar_t__ acp3x_base; } ;
struct i2s_dev_data {scalar_t__ acp3x_base; struct snd_pcm_substream* capture_stream; struct snd_pcm_substream* play_stream; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (int ,char*) ;
 struct i2s_dev_data* FUNC_1 (int ) ;
 int FUNC_2 (struct i2s_stream_instance*) ;
 struct i2s_stream_instance* FUNC_3 (int,int ) ;
 scalar_t__ VAR_7 ;
 int FUNC_4 (int,scalar_t__) ;
 int FUNC_5 (struct snd_pcm_runtime*,int ) ;
 struct snd_soc_component* FUNC_6 (struct snd_soc_pcm_runtime*,int ) ;

__attribute__((used)) static int FUNC_7(struct snd_pcm_substream *VAR_8)
{
 int VAR_9 = 0;

 struct snd_pcm_runtime *VAR_10 = VAR_8->runtime;
 struct snd_soc_pcm_runtime *VAR_11 = VAR_8->private_data;
 struct snd_soc_component *VAR_12 = FUNC_6(VAR_11,
            VAR_0);
 struct i2s_dev_data *VAR_13 = FUNC_1(VAR_12->dev);

 struct i2s_stream_instance *VAR_14 = FUNC_3(sizeof(struct i2s_stream_instance),
             VAR_2);
 if (!VAR_14)
  return -VAR_1;

 if (VAR_8->stream == VAR_4)
  VAR_10->hw = VAR_6;
 else
  VAR_10->hw = VAR_5;

 VAR_9 = FUNC_5(VAR_10,
         VAR_3);
 if (VAR_9 < 0) {
  FUNC_0(VAR_12->dev, "set integer constraint failed\n");
  FUNC_2(VAR_14);
  return VAR_9;
 }

 if (!VAR_13->play_stream && !VAR_13->capture_stream)
  FUNC_4(1, VAR_13->acp3x_base + VAR_7);

 if (VAR_8->stream == VAR_4)
  VAR_13->play_stream = VAR_8;
 else
  VAR_13->capture_stream = VAR_8;

 VAR_14->acp3x_base = VAR_13->acp3x_base;
 VAR_10->private_data = VAR_14;
 return 0;
}
