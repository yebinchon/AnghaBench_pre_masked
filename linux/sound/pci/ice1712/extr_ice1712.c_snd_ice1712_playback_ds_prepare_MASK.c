
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct snd_pcm_substream {size_t number; struct snd_pcm_runtime* runtime; } ;
struct snd_pcm_runtime {int channels; int rate; int dma_addr; int periods; int format; } ;
struct snd_ice1712 {int* playback_con_virt_addr; int reg_lock; scalar_t__* playback_con_active_buf; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (struct snd_ice1712*,int,int ,int) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct snd_pcm_substream*) ;
 struct snd_ice1712* FUNC_3 (struct snd_pcm_substream*) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;

__attribute__((used)) static int FUNC_6(struct snd_pcm_substream *VAR_7)
{
 struct snd_ice1712 *VAR_8 = FUNC_3(VAR_7);
 struct snd_pcm_runtime *VAR_9 = VAR_7->runtime;
 u32 VAR_10, VAR_11, VAR_12, VAR_13;

 VAR_10 = FUNC_2(VAR_7) - 1;
 VAR_12 = 0x0064;
 if (FUNC_1(VAR_9->format) == 16)
  VAR_12 &= ~0x04;
 if (VAR_9->channels == 2)
  VAR_12 |= 0x08;
 VAR_11 = (VAR_9->rate * 8192) / 375;
 if (VAR_11 > 0x000fffff)
  VAR_11 = 0x000fffff;
 VAR_8->playback_con_active_buf[VAR_7->number] = 0;
 VAR_8->playback_con_virt_addr[VAR_7->number] = VAR_9->dma_addr;
 VAR_13 = VAR_7->number * 2;
 FUNC_4(&VAR_8->reg_lock);
 FUNC_0(VAR_8, VAR_13, VAR_0, VAR_9->dma_addr);
 FUNC_0(VAR_8, VAR_13, VAR_3, VAR_10);
 FUNC_0(VAR_8, VAR_13, VAR_1, VAR_9->dma_addr + (VAR_9->periods > 1 ? VAR_10 + 1 : 0));
 FUNC_0(VAR_8, VAR_13, VAR_4, VAR_10);
 FUNC_0(VAR_8, VAR_13, VAR_5, VAR_11);
 FUNC_0(VAR_8, VAR_13, VAR_6, 0);
 FUNC_0(VAR_8, VAR_13, VAR_2, VAR_12);
 if (VAR_9->channels == 2) {
  FUNC_0(VAR_8, VAR_13 + 1, VAR_5, VAR_11);
  FUNC_0(VAR_8, VAR_13 + 1, VAR_6, 0);
 }
 FUNC_5(&VAR_8->reg_lock);
 return 0;
}
