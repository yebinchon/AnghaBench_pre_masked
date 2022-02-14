
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u32 ;
struct snd_soc_dai {TYPE_3__* driver; int dev; scalar_t__ capture_dma_data; scalar_t__ playback_dma_data; } ;
struct axg_tdm_stream {int * mask; } ;
struct axg_tdm_iface {unsigned int slots; unsigned int slot_width; } ;
struct TYPE_5__ {unsigned int channels_max; unsigned int formats; } ;
struct TYPE_4__ {unsigned int channels_max; unsigned int formats; } ;
struct TYPE_6__ {TYPE_2__ capture; TYPE_1__ playback; } ;


 int VAR_0 ;
 unsigned int VAR_1 ;
 unsigned int VAR_2 ;
 unsigned int VAR_3 ;
 unsigned int VAR_4 ;
 unsigned int VAR_5 ;
 unsigned int FUNC_0 (int *) ;
 int FUNC_1 (int ,char*,...) ;
 struct axg_tdm_iface* FUNC_2 (struct snd_soc_dai*) ;

int FUNC_3(struct snd_soc_dai *VAR_6, u32 *VAR_7,
     u32 *VAR_8, unsigned int VAR_9,
     unsigned int VAR_10)
{
 struct axg_tdm_iface *VAR_11 = FUNC_2(VAR_6);
 struct axg_tdm_stream *VAR_12 = (struct axg_tdm_stream *)
  VAR_6->playback_dma_data;
 struct axg_tdm_stream *VAR_13 = (struct axg_tdm_stream *)
  VAR_6->capture_dma_data;
 unsigned int VAR_14, VAR_15;
 unsigned int VAR_16 = 0;

 VAR_14 = FUNC_0(VAR_7);
 VAR_15 = FUNC_0(VAR_8);


 if (!VAR_14 && !VAR_15) {
  FUNC_1(VAR_6->dev, "interface has no slot\n");
  return -VAR_0;
 }

 VAR_11->slots = VAR_9;

 switch (VAR_10) {
 case 0:
  VAR_10 = 32;

 case 32:
  VAR_16 |= VAR_4;

 case 24:
  VAR_16 |= VAR_3;
  VAR_16 |= VAR_2;

 case 16:
  VAR_16 |= VAR_1;

 case 8:
  VAR_16 |= VAR_5;
  break;
 default:
  FUNC_1(VAR_6->dev, "unsupported slot width: %d\n", VAR_10);
  return -VAR_0;
 }

 VAR_11->slot_width = VAR_10;


 if (VAR_12) {
  VAR_12->mask = VAR_7;
  VAR_6->driver->playback.channels_max = VAR_14;
  VAR_6->driver->playback.formats = VAR_16;
 }

 if (VAR_13) {
  VAR_13->mask = VAR_8;
  VAR_6->driver->capture.channels_max = VAR_15;
  VAR_6->driver->capture.formats = VAR_16;
 }

 return 0;
}
