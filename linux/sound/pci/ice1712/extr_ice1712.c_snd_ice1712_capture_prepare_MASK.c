
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
struct snd_pcm_substream {struct snd_pcm_runtime* runtime; } ;
struct snd_pcm_runtime {int channels; int rate; int dma_addr; int format; } ;
struct snd_ice1712 {int ac97; int reg_lock; int capture_con_virt_addr; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (struct snd_ice1712*,int ) ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (int,int ) ;
 int FUNC_3 (int ,int ,int ) ;
 int FUNC_4 (struct snd_ice1712*,int ,int) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (struct snd_pcm_substream*) ;
 int FUNC_7 (struct snd_pcm_substream*) ;
 struct snd_ice1712* FUNC_8 (struct snd_pcm_substream*) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (int *) ;

__attribute__((used)) static int FUNC_11(struct snd_pcm_substream *VAR_6)
{
 struct snd_ice1712 *VAR_7 = FUNC_8(VAR_6);
 struct snd_pcm_runtime *VAR_8 = VAR_6->runtime;
 u32 VAR_9, VAR_10;
 u8 VAR_11;

 VAR_9 = (FUNC_7(VAR_6) >> 2) - 1;
 VAR_10 = FUNC_6(VAR_6) - 1;
 VAR_11 = 0x06;
 if (FUNC_5(VAR_8->format) == 16)
  VAR_11 &= ~0x04;
 if (VAR_8->channels == 2)
  VAR_11 &= ~0x02;
 FUNC_9(&VAR_7->reg_lock);
 FUNC_1(VAR_7->capture_con_virt_addr = VAR_8->dma_addr, FUNC_0(VAR_7, VAR_1));
 FUNC_2(VAR_10, FUNC_0(VAR_7, VAR_2));
 FUNC_4(VAR_7, VAR_3, VAR_9 >> 8);
 FUNC_4(VAR_7, VAR_4, VAR_9 & 0xff);
 FUNC_4(VAR_7, VAR_5, VAR_11);
 FUNC_10(&VAR_7->reg_lock);
 FUNC_3(VAR_7->ac97, VAR_0, VAR_8->rate);
 return 0;
}
