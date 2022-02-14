
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct snd_soc_dai {size_t id; int dev; } ;
struct snd_pcm_substream {int dummy; } ;
struct snd_pcm_hw_params {int dummy; } ;
struct q6afe_hdmi_cfg {int bit_width; int channel_allocation; int sample_rate; } ;
struct q6afe_dai_data {TYPE_1__* port_config; } ;
struct TYPE_2__ {struct q6afe_hdmi_cfg hdmi; } ;


 int VAR_0 ;


 int FUNC_0 (int ,char*,int) ;
 struct q6afe_dai_data* FUNC_1 (int ) ;
 int FUNC_2 (struct snd_pcm_hw_params*) ;
 int FUNC_3 (struct snd_pcm_hw_params*) ;
 int FUNC_4 (struct snd_pcm_hw_params*) ;

__attribute__((used)) static int FUNC_5(struct snd_pcm_substream *VAR_1,
    struct snd_pcm_hw_params *VAR_2,
    struct snd_soc_dai *VAR_3)
{
 struct q6afe_dai_data *VAR_4 = FUNC_1(VAR_3->dev);
 int VAR_5 = FUNC_2(VAR_2);
 struct q6afe_hdmi_cfg *VAR_6 = &VAR_4->port_config[VAR_3->id].hdmi;

 VAR_6->sample_rate = FUNC_4(VAR_2);
 switch (FUNC_3(VAR_2)) {
 case 129:
  VAR_6->bit_width = 16;
  break;
 case 128:
  VAR_6->bit_width = 24;
  break;
 }


 switch (VAR_5) {
 case 2:
  VAR_6->channel_allocation = 0;
  break;
 case 3:
  VAR_6->channel_allocation = 0x02;
  break;
 case 4:
  VAR_6->channel_allocation = 0x06;
  break;
 case 5:
  VAR_6->channel_allocation = 0x0A;
  break;
 case 6:
  VAR_6->channel_allocation = 0x0B;
  break;
 case 7:
  VAR_6->channel_allocation = 0x12;
  break;
 case 8:
  VAR_6->channel_allocation = 0x13;
  break;
 default:
  FUNC_0(VAR_3->dev, "invalid Channels = %u\n", VAR_5);
  return -VAR_0;
 }

 return 0;
}
