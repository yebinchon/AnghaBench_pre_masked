
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct snd_pcm_substream {struct snd_pcm_runtime* runtime; } ;
struct snd_pcm_runtime {int channels; int rate; int dma_addr; int format; } ;
struct snd_ice1712 {int reg_lock; scalar_t__ ddma_port; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_0 (int,scalar_t__) ;
 int FUNC_1 (int ,scalar_t__) ;
 int FUNC_2 (int,scalar_t__) ;
 int FUNC_3 (struct snd_ice1712*,int ,int) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (struct snd_pcm_substream*) ;
 int FUNC_6 (struct snd_pcm_substream*) ;
 struct snd_ice1712* FUNC_7 (struct snd_pcm_substream*) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int *) ;

__attribute__((used)) static int FUNC_10(struct snd_pcm_substream *VAR_10)
{
 struct snd_ice1712 *VAR_11 = FUNC_7(VAR_10);
 struct snd_pcm_runtime *VAR_12 = VAR_10->runtime;
 u32 VAR_13, VAR_14, VAR_15, VAR_16;

 VAR_13 = (FUNC_6(VAR_10) >> 2) - 1;
 VAR_14 = FUNC_5(VAR_10) - 1;
 VAR_16 = 0x0000;
 if (FUNC_4(VAR_12->format) == 16)
  VAR_16 |= 0x10;
 if (VAR_12->channels == 2)
  VAR_16 |= 0x08;
 VAR_15 = (VAR_12->rate * 8192) / 375;
 if (VAR_15 > 0x000fffff)
  VAR_15 = 0x000fffff;
 FUNC_8(&VAR_11->reg_lock);
 FUNC_0(0, VAR_11->ddma_port + 15);
 FUNC_0(VAR_1 | VAR_0, VAR_11->ddma_port + 0x0b);
 FUNC_1(VAR_12->dma_addr, VAR_11->ddma_port + 0);
 FUNC_2(VAR_14, VAR_11->ddma_port + 4);
 FUNC_3(VAR_11, VAR_7, VAR_15 & 0xff);
 FUNC_3(VAR_11, VAR_8, (VAR_15 >> 8) & 0xff);
 FUNC_3(VAR_11, VAR_6, (VAR_15 >> 16) & 0xff);
 FUNC_3(VAR_11, VAR_4, VAR_16);
 FUNC_3(VAR_11, VAR_3, VAR_13 & 0xff);
 FUNC_3(VAR_11, VAR_2, VAR_13 >> 8);
 FUNC_3(VAR_11, VAR_5, 0);
 FUNC_3(VAR_11, VAR_9, 0);
 FUNC_9(&VAR_11->reg_lock);
 return 0;
}
