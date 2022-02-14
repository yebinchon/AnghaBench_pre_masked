
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u32 ;
struct snd_pcm_substream {struct snd_pcm_runtime* runtime; } ;
struct snd_pcm_runtime {int rate; int format; int buffer_size; int dma_addr; int dma_area; int periods; int period_size; int channels; struct snd_ca0106_pcm* private_data; } ;
struct snd_ca0106_pcm {int channel_id; } ;
struct TYPE_5__ {int addr; int bytes; int area; } ;
struct snd_ca0106 {TYPE_3__* details; scalar_t__ port; TYPE_2__ buffer; TYPE_1__* card; } ;
struct TYPE_6__ {int i2c_adc; } ;
struct TYPE_4__ {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;


 int FUNC_0 (int ,char*,int,int,int,...) ;
 int FUNC_1 (struct snd_pcm_runtime*,int) ;
 int FUNC_2 (scalar_t__) ;
 int FUNC_3 (int,scalar_t__) ;
 int FUNC_4 (struct snd_ca0106*,int ,int) ;
 int FUNC_5 (struct snd_ca0106*,int,int ) ;
 int FUNC_6 (struct snd_ca0106*,int,int,int) ;
 struct snd_ca0106* FUNC_7 (struct snd_pcm_substream*) ;
 int VAR_6 ;

__attribute__((used)) static int FUNC_8(struct snd_pcm_substream *VAR_7)
{
 struct snd_ca0106 *VAR_8 = FUNC_7(VAR_7);
 struct snd_pcm_runtime *VAR_9 = VAR_7->runtime;
 struct snd_ca0106_pcm *VAR_10 = VAR_9->private_data;
 int VAR_11 = VAR_10->channel_id;
 u32 VAR_12 = VAR_5;
 u32 VAR_13 = 0x00000000;
 u32 VAR_14;
 u32 VAR_15=0x2;
 u32 VAR_16 = 0x0000c000 ;
 u32 VAR_17 = 0;
 u32 VAR_18;
 switch (VAR_9->rate) {
 case 44100:
  VAR_17 = 0x00004000;
  break;
        case 48000:
  VAR_17 = 0;
  break;
 case 96000:
  VAR_17 = 0x00008000;
  VAR_15=0xa;
  break;
 case 192000:
  VAR_17 = 0x0000c000;
  VAR_15=0xa;
  break;
 default:
  VAR_17 = 0;
  break;
 }


 switch (VAR_9->format) {
 case 129:
  VAR_13 = 0;
  break;
 case 128:
  VAR_13 = VAR_5;
  break;
 default:
  VAR_13 = 0;
  break;
 }
 VAR_14 = FUNC_2(VAR_8->port + VAR_4) ;
 VAR_14 = (VAR_14 & ~VAR_12) | VAR_13;
 FUNC_3(VAR_14, VAR_8->port + VAR_4);
 VAR_18 = FUNC_5(VAR_8, 0x71, 0);
 VAR_18 = (VAR_18 & ~VAR_16) | VAR_17;
 FUNC_6(VAR_8, 0x71, 0, VAR_18);
        if (VAR_8->details->i2c_adc == 1) {
         FUNC_4(VAR_8, VAR_0, VAR_15);
 }
 FUNC_6(VAR_8, 0x13, VAR_11, 0);
 FUNC_6(VAR_8, VAR_2, VAR_11, VAR_9->dma_addr);
 FUNC_6(VAR_8, VAR_1, VAR_11, FUNC_1(VAR_9, VAR_9->buffer_size)<<16);
 FUNC_6(VAR_8, VAR_3, VAR_11, 0);

 return 0;
}
