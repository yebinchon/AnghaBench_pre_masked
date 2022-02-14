
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int irq_ok; int interrupt_sleeper; int irq_lock; int irq_cnt; } ;
typedef TYPE_1__ snd_wavefront_t ;
struct TYPE_6__ {TYPE_1__ wavefront; } ;
typedef TYPE_2__ snd_wavefront_card_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (TYPE_1__*) ;

void
FUNC_4 (snd_wavefront_card_t *VAR_2)
{
 snd_wavefront_t *VAR_3 = &VAR_2->wavefront;
 if ((FUNC_3(VAR_3) & (VAR_0|VAR_1)) == 0) {
  return;
 }

 FUNC_0(&VAR_3->irq_lock);
 VAR_3->irq_ok = 1;
 VAR_3->irq_cnt++;
 FUNC_1(&VAR_3->irq_lock);
 FUNC_2(&VAR_3->interrupt_sleeper);
}
