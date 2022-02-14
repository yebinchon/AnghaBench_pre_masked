
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u32 ;
struct snd_pcm_substream {TYPE_1__* pcm; struct snd_pcm_runtime* runtime; } ;
struct snd_pcm_runtime {int period_size; int rate; int periods; int dma_addr; scalar_t__ dma_area; int buffer_size; int channels; int format; } ;
struct TYPE_6__ {int addr; int* bytes; scalar_t__ area; } ;
struct snd_emu10k1 {int p16v_device_offset; TYPE_3__ p16v_buffer; TYPE_2__* card; } ;
struct TYPE_5__ {int dev; } ;
struct TYPE_4__ {int device; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (int ,char*,int,int,int*,...) ;
 int FUNC_1 (struct snd_pcm_runtime*,int) ;
 int FUNC_2 (struct snd_emu10k1*,int,int,int) ;
 int FUNC_3 (struct snd_emu10k1*,int ,int) ;
 int FUNC_4 (struct snd_emu10k1*,int ,int,int) ;
 struct snd_emu10k1* FUNC_5 (struct snd_pcm_substream*) ;

__attribute__((used)) static int FUNC_6(struct snd_pcm_substream *VAR_7)
{
 struct snd_emu10k1 *VAR_8 = FUNC_5(VAR_7);
 struct snd_pcm_runtime *VAR_9 = VAR_7->runtime;
 int VAR_10 = VAR_7->pcm->device - VAR_8->p16v_device_offset;
 u32 *VAR_11 = (u32 *)(VAR_8->p16v_buffer.area+(8*16*VAR_10));
 u32 VAR_12 = FUNC_1(VAR_9, VAR_9->period_size);
 int VAR_13;
 u32 VAR_14;
 VAR_14 = FUNC_3(VAR_8, VAR_0, VAR_10);
        switch (VAR_9->rate) {
 case 44100:
   FUNC_4(VAR_8, VAR_0, VAR_10, (VAR_14 & ~0xe0e0) | 0x8080);
   break;
 case 96000:
   FUNC_4(VAR_8, VAR_0, VAR_10, (VAR_14 & ~0xe0e0) | 0x4040);
   break;
 case 192000:
   FUNC_4(VAR_8, VAR_0, VAR_10, (VAR_14 & ~0xe0e0) | 0x2020);
   break;
 case 48000:
 default:
   FUNC_4(VAR_8, VAR_0, VAR_10, (VAR_14 & ~0xe0e0) | 0x0000);
   break;
 }

 for(VAR_13 = 0; VAR_13 < VAR_9->periods; VAR_13++) {
  VAR_11[VAR_13*2]=VAR_9->dma_addr+(VAR_13*VAR_12);
  VAR_11[(VAR_13*2)+1]=VAR_12<<16;
 }

 FUNC_2(VAR_8, VAR_2, VAR_10, VAR_8->p16v_buffer.addr+(8*16*VAR_10));
 FUNC_2(VAR_8, VAR_4, VAR_10, (VAR_9->periods - 1) << 19);
 FUNC_2(VAR_8, VAR_3, VAR_10, 0);
 FUNC_2(VAR_8, VAR_1, VAR_10, VAR_9->dma_addr);

 FUNC_2(VAR_8, VAR_5, VAR_10, 0);
 FUNC_2(VAR_8, VAR_6, VAR_10, 0);
 FUNC_2(VAR_8, 0x07, VAR_10, 0x0);
 FUNC_2(VAR_8, 0x08, VAR_10, 0);

 return 0;
}
