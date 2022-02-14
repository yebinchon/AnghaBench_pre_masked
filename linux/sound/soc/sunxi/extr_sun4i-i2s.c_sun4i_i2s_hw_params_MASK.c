
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_3__ {int addr_width; } ;
struct sun4i_i2s {int slots; int slot_width; int field_fmt_sr; int field_fmt_wss; TYPE_2__* variant; TYPE_1__ playback_dma_data; } ;
struct snd_soc_dai {int dev; } ;
struct snd_pcm_substream {int dummy; } ;
struct snd_pcm_hw_params {int dummy; } ;
struct TYPE_4__ {int (* set_chan_cfg ) (struct sun4i_i2s*,struct snd_pcm_hw_params*) ;int (* get_sr ) (struct sun4i_i2s*,unsigned int) ;int (* get_wss ) (struct sun4i_i2s*,unsigned int) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,char*,...) ;
 unsigned int FUNC_1 (struct snd_pcm_hw_params*) ;
 int FUNC_2 (struct snd_pcm_hw_params*) ;
 int FUNC_3 (struct snd_pcm_hw_params*) ;
 unsigned int FUNC_4 (struct snd_pcm_hw_params*) ;
 int FUNC_5 (int ,int) ;
 struct sun4i_i2s* FUNC_6 (struct snd_soc_dai*) ;
 int FUNC_7 (struct sun4i_i2s*,struct snd_pcm_hw_params*) ;
 int FUNC_8 (struct sun4i_i2s*,unsigned int) ;
 int FUNC_9 (struct sun4i_i2s*,unsigned int) ;
 int FUNC_10 (struct snd_soc_dai*,int ,unsigned int,unsigned int) ;

__attribute__((used)) static int FUNC_11(struct snd_pcm_substream *VAR_2,
          struct snd_pcm_hw_params *VAR_3,
          struct snd_soc_dai *VAR_4)
{
 struct sun4i_i2s *VAR_5 = FUNC_6(VAR_4);
 unsigned int VAR_6 = FUNC_4(VAR_3);
 unsigned int VAR_7 = FUNC_2(VAR_3);
 unsigned int VAR_8 = FUNC_1(VAR_3);
 unsigned int VAR_9 = VAR_8;
 int VAR_10, VAR_11, VAR_12;
 u32 VAR_13;

 if (VAR_5->slots)
  VAR_9 = VAR_5->slots;

 if (VAR_5->slot_width)
  VAR_7 = VAR_5->slot_width;

 VAR_10 = VAR_5->variant->set_chan_cfg(VAR_5, VAR_3);
 if (VAR_10 < 0) {
  FUNC_0(VAR_4->dev, "Invalid channel configuration\n");
  return VAR_10;
 }

 switch (FUNC_2(VAR_3)) {
 case 16:
  VAR_13 = VAR_0;
  break;
 default:
  FUNC_0(VAR_4->dev, "Unsupported physical sample width: %d\n",
   FUNC_2(VAR_3));
  return -VAR_1;
 }
 VAR_5->playback_dma_data.addr_width = VAR_13;

 VAR_11 = VAR_5->variant->get_sr(VAR_5, VAR_6);
 if (VAR_11 < 0)
  return -VAR_1;

 VAR_12 = VAR_5->variant->get_wss(VAR_5, VAR_7);
 if (VAR_12 < 0)
  return -VAR_1;

 FUNC_5(VAR_5->field_fmt_wss, VAR_12);
 FUNC_5(VAR_5->field_fmt_sr, VAR_11);

 return FUNC_10(VAR_4, FUNC_3(VAR_3),
          VAR_9, VAR_7);
}
