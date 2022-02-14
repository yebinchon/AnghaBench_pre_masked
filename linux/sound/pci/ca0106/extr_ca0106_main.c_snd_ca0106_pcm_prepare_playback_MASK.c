
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct snd_pcm_substream {struct snd_pcm_runtime* runtime; } ;
struct snd_pcm_runtime {int period_size; int rate; int format; int periods; int dma_addr; scalar_t__ dma_area; int buffer_size; int channels; struct snd_ca0106_pcm* private_data; } ;
struct snd_ca0106_pcm {int channel_id; } ;
struct TYPE_4__ {int addr; int* bytes; scalar_t__ area; } ;
struct snd_ca0106 {TYPE_2__ buffer; scalar_t__ port; TYPE_1__* card; } ;
struct TYPE_3__ {int dev; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;


 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int FUNC_0 (int ,char*,int,int,...) ;
 int FUNC_1 (struct snd_pcm_runtime*,int) ;
 int FUNC_2 (scalar_t__) ;
 int FUNC_3 (int,scalar_t__) ;
 int FUNC_4 (struct snd_ca0106*,int,int ) ;
 int FUNC_5 (struct snd_ca0106*,int,int,int) ;
 struct snd_ca0106* FUNC_6 (struct snd_pcm_substream*) ;

__attribute__((used)) static int FUNC_7(struct snd_pcm_substream *VAR_17)
{
 struct snd_ca0106 *VAR_18 = FUNC_6(VAR_17);
 struct snd_pcm_runtime *VAR_19 = VAR_17->runtime;
 struct snd_ca0106_pcm *VAR_20 = VAR_19->private_data;
 int VAR_21 = VAR_20->channel_id;
 u32 *VAR_22 = (u32 *)(VAR_18->buffer.area+(8*16*VAR_21));
 u32 VAR_23 = FUNC_1(VAR_19, VAR_19->period_size);
 u32 VAR_24 = VAR_1;
 u32 VAR_25 = 0x00000000;
 u32 VAR_26;
 u32 VAR_27 = 0x30000 << (VAR_21<<1);
 u32 VAR_28 = 0;
 u32 VAR_29;

 u32 VAR_30 = 0x03030000 ;
 u32 VAR_31 = 0;
 u32 VAR_32;
 int VAR_33;
 switch (VAR_19->rate) {
 case 44100:
  VAR_28 = 0x10000 << (VAR_21<<1);
  VAR_31 = 0x01010000;
  break;
        case 48000:
  VAR_28 = 0;
  VAR_31 = 0;
  break;
 case 96000:
  VAR_28 = 0x20000 << (VAR_21<<1);
  VAR_31 = 0x02020000;
  break;
 case 192000:
  VAR_28 = 0x30000 << (VAR_21<<1);
  VAR_31 = 0x03030000;
  break;
 default:
  VAR_28 = 0;
  VAR_31 = 0;
  break;
 }


 switch (VAR_19->format) {
 case 129:
  VAR_25 = 0;
  break;
 case 128:
  VAR_25 = VAR_1;
  break;
 default:
  VAR_25 = 0;
  break;
 }
 VAR_26 = FUNC_2(VAR_18->port + VAR_0) ;
 VAR_26 = (VAR_26 & ~VAR_24) | VAR_25;
 FUNC_3(VAR_26, VAR_18->port + VAR_0);
 VAR_29 = FUNC_4(VAR_18, 0x40, 0);
 VAR_29 = (VAR_29 & ~VAR_27) | VAR_28;
 FUNC_5(VAR_18, 0x40, 0, VAR_29);
 VAR_32 = FUNC_4(VAR_18, 0x71, 0);
 VAR_32 = (VAR_32 & ~VAR_30) | VAR_31;
 FUNC_5(VAR_18, 0x71, 0, VAR_32);


        for(VAR_33=0; VAR_33 < VAR_19->periods; VAR_33++) {
  VAR_22[VAR_33*2] = VAR_19->dma_addr + (VAR_33 * VAR_23);
  VAR_22[VAR_33*2+1] = VAR_23 << 16;
 }

 FUNC_5(VAR_18, VAR_3, VAR_21, VAR_18->buffer.addr+(8*16*VAR_21));
 FUNC_5(VAR_18, VAR_5, VAR_21, (VAR_19->periods - 1) << 19);
 FUNC_5(VAR_18, VAR_4, VAR_21, 0);
 FUNC_5(VAR_18, VAR_2, VAR_21, VAR_19->dma_addr);
 FUNC_5(VAR_18, VAR_7, VAR_21, FUNC_1(VAR_19, VAR_19->period_size)<<16);

 FUNC_5(VAR_18, VAR_7, VAR_21, 0);
 FUNC_5(VAR_18, VAR_8, VAR_21, 0);
 FUNC_5(VAR_18, 0x07, VAR_21, 0x0);
 FUNC_5(VAR_18, 0x08, VAR_21, 0);
        FUNC_5(VAR_18, VAR_6, 0x0, 0x0);
 return 0;
}
