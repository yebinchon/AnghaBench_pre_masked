
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct snd_soc_dai {int dummy; } ;
struct snd_pcm_substream {scalar_t__ stream; TYPE_1__* runtime; } ;
struct snd_pcm_hw_params {int dummy; } ;
struct i2s_stream_instance {int xfer_resolution; scalar_t__ acp3x_base; } ;
struct TYPE_2__ {struct i2s_stream_instance* private_data; } ;


 int VAR_0 ;





 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (struct snd_pcm_hw_params*) ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (int,scalar_t__) ;

__attribute__((used)) static int FUNC_3(struct snd_pcm_substream *VAR_4,
      struct snd_pcm_hw_params *VAR_5,
      struct snd_soc_dai *VAR_6)
{
 u32 VAR_7 = 0;
 struct i2s_stream_instance *VAR_8 = VAR_4->runtime->private_data;

 switch (FUNC_0(VAR_5)) {
 case 128:
 case 129:
  VAR_8->xfer_resolution = 0x0;
  break;
 case 132:
  VAR_8->xfer_resolution = 0x02;
  break;
 case 131:
  VAR_8->xfer_resolution = 0x04;
  break;
 case 130:
  VAR_8->xfer_resolution = 0x05;
  break;
 default:
  return -VAR_0;
 }
 VAR_7 = FUNC_1(VAR_8->acp3x_base + VAR_3);
 VAR_7 = VAR_7 | (VAR_8->xfer_resolution << 3);
 if (VAR_4->stream == VAR_1)
  FUNC_2(VAR_7, VAR_8->acp3x_base + VAR_3);
 else
  FUNC_2(VAR_7, VAR_8->acp3x_base + VAR_2);

 return 0;
}
