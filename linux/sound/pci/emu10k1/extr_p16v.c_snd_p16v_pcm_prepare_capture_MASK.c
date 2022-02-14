
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct snd_pcm_substream {TYPE_1__* pcm; struct snd_pcm_runtime* runtime; } ;
struct snd_pcm_runtime {int rate; int dma_addr; int buffer_size; } ;
struct snd_emu10k1 {int p16v_device_offset; } ;
struct TYPE_2__ {int device; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct snd_pcm_runtime*,int ) ;
 int FUNC_1 (struct snd_emu10k1*,int,int,int) ;
 int FUNC_2 (struct snd_emu10k1*,int ,int) ;
 int FUNC_3 (struct snd_emu10k1*,int ,int,int) ;
 struct snd_emu10k1* FUNC_4 (struct snd_pcm_substream*) ;

__attribute__((used)) static int FUNC_5(struct snd_pcm_substream *VAR_4)
{
 struct snd_emu10k1 *VAR_5 = FUNC_4(VAR_4);
 struct snd_pcm_runtime *VAR_6 = VAR_4->runtime;
 int VAR_7 = VAR_4->pcm->device - VAR_5->p16v_device_offset;
 u32 VAR_8;
 VAR_8 = FUNC_2(VAR_5, VAR_0, VAR_7);
        switch (VAR_6->rate) {
 case 44100:
   FUNC_3(VAR_5, VAR_0, VAR_7, (VAR_8 & ~0x0e00) | 0x0800);
   break;
 case 96000:
   FUNC_3(VAR_5, VAR_0, VAR_7, (VAR_8 & ~0x0e00) | 0x0400);
   break;
 case 192000:
   FUNC_3(VAR_5, VAR_0, VAR_7, (VAR_8 & ~0x0e00) | 0x0200);
   break;
 case 48000:
 default:
   FUNC_3(VAR_5, VAR_0, VAR_7, (VAR_8 & ~0x0e00) | 0x0000);
   break;
 }

 FUNC_1(VAR_5, 0x13, VAR_7, 0);
 FUNC_1(VAR_5, VAR_2, VAR_7, VAR_6->dma_addr);
 FUNC_1(VAR_5, VAR_1, VAR_7, FUNC_0(VAR_6, VAR_6->buffer_size) << 16);
 FUNC_1(VAR_5, VAR_3, VAR_7, 0);



 return 0;
}
