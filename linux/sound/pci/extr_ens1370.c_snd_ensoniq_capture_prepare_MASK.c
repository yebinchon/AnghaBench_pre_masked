
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
struct ensoniq {int c_dma_size; int c_period_size; int ctrl; int sctrl; int reg_lock; TYPE_2__ u; } ;


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
 int VAR_10 ;
 int VAR_11 ;
 int FUNC_3 (unsigned int) ;
 int FUNC_4 (struct ensoniq*,int ) ;
 int VAR_12 ;
 int VAR_13 ;
 int FUNC_5 (int,int ) ;
 int* VAR_14 ;
 int FUNC_6 (struct ensoniq*,int ) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (struct snd_pcm_substream*) ;
 int FUNC_9 (struct snd_pcm_substream*) ;
 struct ensoniq* FUNC_10 (struct snd_pcm_substream*) ;
 int FUNC_11 (int *) ;
 int FUNC_12 (int *) ;

__attribute__((used)) static int FUNC_13(struct snd_pcm_substream *VAR_15)
{
 struct ensoniq *VAR_16 = FUNC_10(VAR_15);
 struct snd_pcm_runtime *VAR_17 = VAR_15->runtime;
 unsigned int VAR_18 = 0;

 VAR_16->c_dma_size = FUNC_8(VAR_15);
 VAR_16->c_period_size = FUNC_9(VAR_15);
 if (FUNC_7(VAR_17->format) == 16)
  VAR_18 |= 0x02;
 if (VAR_17->channels > 1)
  VAR_18 |= 0x01;
 FUNC_11(&VAR_16->reg_lock);
 VAR_16->ctrl &= ~VAR_5;
 FUNC_5(VAR_16->ctrl, FUNC_4(VAR_16, VAR_3));
 FUNC_5(FUNC_2(VAR_8), FUNC_4(VAR_16, VAR_12));
 FUNC_5(VAR_17->dma_addr, FUNC_4(VAR_16, VAR_1));
 FUNC_5((VAR_16->c_dma_size >> 2) - 1, FUNC_4(VAR_16, VAR_2));
 VAR_16->sctrl &= ~(VAR_10 | VAR_11);
 VAR_16->sctrl |= VAR_9 | FUNC_3(VAR_18);
 FUNC_5(VAR_16->sctrl, FUNC_4(VAR_16, VAR_13));
 FUNC_5((VAR_16->c_period_size >> VAR_14[VAR_18]) - 1,
      FUNC_4(VAR_16, VAR_0));







 FUNC_5(VAR_16->ctrl, FUNC_4(VAR_16, VAR_3));
 FUNC_12(&VAR_16->reg_lock);

 FUNC_6(VAR_16, VAR_17->rate);

 return 0;
}
