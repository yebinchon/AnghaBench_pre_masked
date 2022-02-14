
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int gpr_ctl; int irq_lock; } ;
struct snd_emu10k1 {scalar_t__ audigy; TYPE_1__ fx8010; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (struct snd_emu10k1*) ;
 int FUNC_2 (struct snd_emu10k1*) ;
 int FUNC_3 (int *) ;

int FUNC_4(struct snd_emu10k1 *VAR_0)
{
 FUNC_3(&VAR_0->fx8010.irq_lock);
 FUNC_0(&VAR_0->fx8010.gpr_ctl);
 if (VAR_0->audigy)
  return FUNC_1(VAR_0);
 else
  return FUNC_2(VAR_0);
}
