
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct snd_soc_pcm_runtime {int dummy; } ;
struct snd_soc_component {int dev; } ;
struct snd_pcm_substream {scalar_t__ stream; TYPE_1__* runtime; struct snd_soc_pcm_runtime* private_data; } ;
struct i2s_stream_instance {int dummy; } ;
struct i2s_dev_data {scalar_t__ acp3x_base; int * capture_stream; int * play_stream; } ;
struct TYPE_2__ {struct i2s_stream_instance* private_data; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 struct i2s_dev_data* FUNC_0 (int ) ;
 int FUNC_1 (struct i2s_stream_instance*) ;
 scalar_t__ VAR_2 ;
 int FUNC_2 (int ,scalar_t__) ;
 struct snd_soc_component* FUNC_3 (struct snd_soc_pcm_runtime*,int ) ;

__attribute__((used)) static int FUNC_4(struct snd_pcm_substream *VAR_3)
{
 struct snd_soc_pcm_runtime *VAR_4 = VAR_3->private_data;
 struct i2s_stream_instance *VAR_5 = VAR_3->runtime->private_data;
 struct snd_soc_component *VAR_6 = FUNC_3(VAR_4,
            VAR_0);
 struct i2s_dev_data *VAR_7 = FUNC_0(VAR_6->dev);

 if (VAR_3->stream == VAR_1)
  VAR_7->play_stream = ((void*)0);
 else
  VAR_7->capture_stream = ((void*)0);




 if (!VAR_7->play_stream && !VAR_7->capture_stream)
  FUNC_2(0, VAR_7->acp3x_base + VAR_2);
 FUNC_1(VAR_5);
 return 0;
}
