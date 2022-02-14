
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct snd_pdacf {int chip_status; unsigned long port; int pcm_frame; int pcm_hwptr; int pcm_size; int pcm_tdone; int pcm_period; int reg_lock; TYPE_1__* pcm_substream; } ;
typedef int irqreturn_t ;
struct TYPE_3__ {int * runtime; } ;


 int VAR_0 ;
 unsigned long VAR_1 ;
 unsigned long VAR_2 ;
 unsigned long VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (unsigned long) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (struct snd_pdacf*,int,int) ;
 int FUNC_4 (TYPE_1__*) ;
 int FUNC_5 (TYPE_1__*) ;

irqreturn_t FUNC_6(int VAR_6, void *VAR_7)
{
 struct snd_pdacf *VAR_8 = VAR_7;
 int VAR_9, VAR_10, VAR_11, VAR_12, VAR_13;

 if ((VAR_8->chip_status & (VAR_5|VAR_4)) != VAR_4)
  return VAR_0;

 if (VAR_8->pcm_substream == ((void*)0) || VAR_8->pcm_substream->runtime == ((void*)0) || !FUNC_5(VAR_8->pcm_substream))
  return VAR_0;

 VAR_12 = FUNC_0(VAR_8->port + VAR_2);
 VAR_13 = FUNC_0(VAR_8->port + VAR_3);

 VAR_9 = VAR_13 - VAR_12;
 if (VAR_9 < 0)
  VAR_9 += 0x10000;
 if (VAR_9 == 0)
  VAR_9 = 0x10000;
 VAR_9 /= VAR_8->pcm_frame;
 if (VAR_9 > 64)
  VAR_9 -= 32;
 VAR_10 = VAR_8->pcm_hwptr + VAR_8->pcm_tdone;
 VAR_10 %= VAR_8->pcm_size;
 VAR_8->pcm_tdone += VAR_9;
 while (VAR_9 > 0) {
  VAR_11 = VAR_8->pcm_size - VAR_10;
  if (VAR_11 > VAR_9)
   VAR_11 = VAR_9;
  FUNC_3(VAR_8, VAR_11, VAR_10);
  VAR_10 += VAR_11;
  VAR_10 %= VAR_8->pcm_size;
  VAR_9 -= VAR_11;
 }

 FUNC_1(&VAR_8->reg_lock);
 while (VAR_8->pcm_tdone >= VAR_8->pcm_period) {
  VAR_8->pcm_hwptr += VAR_8->pcm_period;
  VAR_8->pcm_hwptr %= VAR_8->pcm_size;
  VAR_8->pcm_tdone -= VAR_8->pcm_period;
  FUNC_2(&VAR_8->reg_lock);
  FUNC_4(VAR_8->pcm_substream);
  FUNC_1(&VAR_8->reg_lock);
 }
 FUNC_2(&VAR_8->reg_lock);
 return VAR_0;
}
