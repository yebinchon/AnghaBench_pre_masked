
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct snd_emu10k1_fx8010_irq {unsigned char gpr_running; struct snd_emu10k1_fx8010_irq* next; void* private_data; int * handler; } ;
struct TYPE_2__ {int irq_lock; struct snd_emu10k1_fx8010_irq* irq_handlers; } ;
struct snd_emu10k1 {TYPE_1__ fx8010; int dsp_interrupt; } ;
typedef int snd_fx8010_irq_handler_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct snd_emu10k1*,int ) ;
 int FUNC_1 (int *,unsigned long) ;
 int FUNC_2 (int *,unsigned long) ;

int FUNC_3(struct snd_emu10k1 *VAR_2,
         snd_fx8010_irq_handler_t *VAR_3,
         unsigned char VAR_4,
         void *VAR_5,
         struct snd_emu10k1_fx8010_irq *VAR_6)
{
 unsigned long VAR_7;

 VAR_6->handler = VAR_3;
 VAR_6->gpr_running = VAR_4;
 VAR_6->private_data = VAR_5;
 VAR_6->next = ((void*)0);
 FUNC_1(&VAR_2->fx8010.irq_lock, VAR_7);
 if (VAR_2->fx8010.irq_handlers == ((void*)0)) {
  VAR_2->fx8010.irq_handlers = VAR_6;
  VAR_2->dsp_interrupt = VAR_1;
  FUNC_0(VAR_2, VAR_0);
 } else {
  VAR_6->next = VAR_2->fx8010.irq_handlers;
  VAR_2->fx8010.irq_handlers = VAR_6;
 }
 FUNC_2(&VAR_2->fx8010.irq_lock, VAR_7);
 return 0;
}
