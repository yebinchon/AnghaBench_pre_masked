
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct snd_pcm_substream {struct snd_pcm_runtime* runtime; } ;
struct snd_pcm_runtime {int channels; int dma_addr; int rate; int format; } ;
struct TYPE_3__ {int pclkdiv_lock; } ;
struct TYPE_4__ {TYPE_1__ es1370; } ;
struct ensoniq {int p2_dma_size; int p2_period_size; int ctrl; int sctrl; int reg_lock; TYPE_2__ u; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int VAR_5 ;
 int FUNC_2 (int ) ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_3 (int) ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int FUNC_4 (unsigned int) ;
 int VAR_13 ;
 int VAR_14 ;
 int FUNC_5 (int ) ;
 int VAR_15 ;
 int FUNC_6 (struct ensoniq*,int ) ;
 int VAR_16 ;
 int VAR_17 ;
 int FUNC_7 (int,int ) ;
 int* VAR_18 ;
 int FUNC_8 (struct ensoniq*,int ) ;
 int FUNC_9 (int ) ;
 int FUNC_10 (struct snd_pcm_substream*) ;
 int FUNC_11 (struct snd_pcm_substream*) ;
 struct ensoniq* FUNC_12 (struct snd_pcm_substream*) ;
 int FUNC_13 (int *) ;
 int FUNC_14 (int *) ;

__attribute__((used)) static int FUNC_15(struct snd_pcm_substream *VAR_19)
{
 struct ensoniq *VAR_20 = FUNC_12(VAR_19);
 struct snd_pcm_runtime *VAR_21 = VAR_19->runtime;
 unsigned int VAR_22 = 0;

 VAR_20->p2_dma_size = FUNC_10(VAR_19);
 VAR_20->p2_period_size = FUNC_11(VAR_19);
 if (FUNC_9(VAR_21->format) == 16)
  VAR_22 |= 0x02;
 if (VAR_21->channels > 1)
  VAR_22 |= 0x01;
 FUNC_13(&VAR_20->reg_lock);
 VAR_20->ctrl &= ~VAR_5;
 FUNC_7(VAR_20->ctrl, FUNC_6(VAR_20, VAR_0));
 FUNC_7(FUNC_2(VAR_15), FUNC_6(VAR_20, VAR_16));
 FUNC_7(VAR_21->dma_addr, FUNC_6(VAR_20, VAR_2));
 FUNC_7((VAR_20->p2_dma_size >> 2) - 1, FUNC_6(VAR_20, VAR_3));
 VAR_20->sctrl &= ~(VAR_11 | VAR_13 | VAR_8 |
       VAR_9 | VAR_14 | VAR_12);
 VAR_20->sctrl |= VAR_10 | FUNC_4(VAR_22) |
     FUNC_3(VAR_22 & 2 ? 2 : 1) | FUNC_5(0);
 FUNC_7(VAR_20->sctrl, FUNC_6(VAR_20, VAR_17));
 FUNC_7((VAR_20->p2_period_size >> VAR_18[VAR_22]) - 1,
      FUNC_6(VAR_20, VAR_1));







 FUNC_7(VAR_20->ctrl, FUNC_6(VAR_20, VAR_0));
 FUNC_14(&VAR_20->reg_lock);

 FUNC_8(VAR_20, VAR_21->rate);

 return 0;
}
