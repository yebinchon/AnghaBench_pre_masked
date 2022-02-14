
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct snd_pcm_runtime {long period_size; int periods; long channels; scalar_t__ dma_addr; } ;
struct snd_at73c213 {int period; TYPE_2__* substream; int lock; TYPE_1__* ssc; } ;
typedef int irqreturn_t ;
struct TYPE_4__ {struct snd_pcm_runtime* runtime; } ;
struct TYPE_3__ {int regs; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (struct snd_pcm_runtime*,long) ;
 int FUNC_2 (TYPE_2__*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int ,int ) ;
 int FUNC_6 (int ,int ,long) ;

__attribute__((used)) static irqreturn_t FUNC_7(int VAR_6, void *VAR_7)
{
 struct snd_at73c213 *VAR_8 = VAR_7;
 struct snd_pcm_runtime *VAR_9 = VAR_8->substream->runtime;
 u32 VAR_10;
 int VAR_11;
 int VAR_12;
 int VAR_13;
 int VAR_14 = VAR_3;

 FUNC_3(&VAR_8->lock);

 VAR_12 = FUNC_1(VAR_9, VAR_9->period_size);
 VAR_10 = FUNC_5(VAR_8->ssc->regs, VAR_0);

 if (VAR_10 & FUNC_0(VAR_1)) {
  VAR_8->period++;
  if (VAR_8->period == VAR_9->periods)
   VAR_8->period = 0;
  VAR_13 = VAR_8->period + 1;
  if (VAR_13 == VAR_9->periods)
   VAR_13 = 0;

  VAR_11 = VAR_12 * VAR_13;

  FUNC_6(VAR_8->ssc->regs, VAR_5,
    (long)VAR_9->dma_addr + VAR_11);
  FUNC_6(VAR_8->ssc->regs, VAR_4,
    VAR_9->period_size * VAR_9->channels);
  VAR_14 = VAR_2;
 }

 FUNC_5(VAR_8->ssc->regs, VAR_0);
 FUNC_4(&VAR_8->lock);

 if (VAR_10 & FUNC_0(VAR_1))
  FUNC_2(VAR_8->substream);

 return VAR_14;
}
