
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct snd_pcm_substream {struct snd_pcm_runtime* runtime; } ;
struct snd_pcm_runtime {int periods; int dma_addr; int period_size; struct emu10k1x_pcm* private_data; } ;
struct emu10k1x_pcm {TYPE_1__* voice; } ;
struct TYPE_4__ {int addr; scalar_t__ area; } ;
struct emu10k1x {TYPE_2__ dma_buffer; } ;
struct TYPE_3__ {int number; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (struct snd_pcm_runtime*,int ) ;
 int FUNC_1 (struct emu10k1x*,int ,int,int) ;
 struct emu10k1x* FUNC_2 (struct snd_pcm_substream*) ;

__attribute__((used)) static int FUNC_3(struct snd_pcm_substream *VAR_8)
{
 struct emu10k1x *VAR_9 = FUNC_2(VAR_8);
 struct snd_pcm_runtime *VAR_10 = VAR_8->runtime;
 struct emu10k1x_pcm *VAR_11 = VAR_10->private_data;
 int VAR_12 = VAR_11->voice->number;
 u32 *VAR_13 = (u32 *)(VAR_9->dma_buffer.area+1024*VAR_12);
 u32 VAR_14 = FUNC_0(VAR_10, VAR_10->period_size);
 int VAR_15;

 for(VAR_15 = 0; VAR_15 < VAR_10->periods; VAR_15++) {
  *VAR_13++=VAR_10->dma_addr+(VAR_15*VAR_14);
  *VAR_13++=VAR_14<<16;
 }

 FUNC_1(VAR_9, VAR_1, VAR_12, VAR_9->dma_buffer.addr+1024*VAR_12);
 FUNC_1(VAR_9, VAR_3, VAR_12, (VAR_10->periods - 1) << 19);
 FUNC_1(VAR_9, VAR_2, VAR_12, 0);
 FUNC_1(VAR_9, VAR_5, VAR_12, 0);
 FUNC_1(VAR_9, VAR_6, VAR_12, 0);
 FUNC_1(VAR_9, VAR_7, VAR_12, 0);
 FUNC_1(VAR_9, VAR_0, VAR_12, VAR_10->dma_addr);

 FUNC_1(VAR_9, VAR_4, VAR_12, FUNC_0(VAR_10, VAR_10->period_size)<<16);

 return 0;
}
