
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct task_struct {int dummy; } ;
struct irqaction {unsigned int irq; unsigned int flags; scalar_t__ handler; unsigned long thread_mask; struct task_struct* thread; struct irqaction* secondary; int name; int * dir; struct irqaction* next; scalar_t__ thread_fn; } ;
struct TYPE_8__ {TYPE_1__* chip; } ;
struct irq_desc {int istate; int depth; int owner; int request_mutex; struct irqaction* action; int lock; scalar_t__ irqs_unhandled; scalar_t__ irq_count; TYPE_2__ irq_data; int wait_for_threads; } ;
struct TYPE_7__ {int flags; int name; } ;


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
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 unsigned int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int FUNC_0 (int) ;
 int FUNC_1 (struct irq_desc*) ;
 int FUNC_2 (struct irq_desc*,unsigned int) ;
 int FUNC_3 (struct irq_desc*) ;
 int FUNC_4 (struct irq_desc*) ;
 int FUNC_5 () ;
 unsigned long FUNC_6 (unsigned long) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (struct irq_desc*) ;
 scalar_t__ VAR_21 ;
 scalar_t__ VAR_22 ;
 int FUNC_9 (struct irq_desc*,struct irqaction*) ;
 int FUNC_10 (struct irq_desc*) ;
 int FUNC_11 (struct irq_desc*) ;
 scalar_t__ FUNC_12 (struct irq_desc*) ;
 scalar_t__ FUNC_13 (struct irq_desc*) ;
 int FUNC_14 (struct irq_desc*) ;
 int FUNC_15 (struct irq_desc*) ;
 int FUNC_16 (struct irq_desc*) ;
 int FUNC_17 (struct irqaction*) ;
 int FUNC_18 (struct irq_desc*,struct irqaction*) ;
 int FUNC_19 (struct irq_desc*,int ,int ) ;
 int FUNC_20 (TYPE_2__*,int ) ;
 unsigned int FUNC_21 (TYPE_2__*) ;
 int FUNC_22 (TYPE_2__*,int ) ;
 int FUNC_23 (TYPE_2__*,unsigned int) ;
 scalar_t__ FUNC_24 (TYPE_2__*) ;
 int FUNC_25 (struct task_struct*) ;
 int FUNC_26 (int ) ;
 int FUNC_27 (int *) ;
 int FUNC_28 (int *) ;
 TYPE_1__ VAR_23 ;
 int FUNC_29 (char*,unsigned int,...) ;
 int FUNC_30 (char*,unsigned int,unsigned int,unsigned int) ;
 int FUNC_31 (struct task_struct*) ;
 int FUNC_32 (int *,unsigned long) ;
 int FUNC_33 (int *,unsigned long) ;
 int FUNC_34 (unsigned int,struct irqaction*) ;
 int FUNC_35 (unsigned int,struct irq_desc*) ;
 int FUNC_36 (struct irqaction*,unsigned int,int) ;
 int FUNC_37 (int ) ;
 int FUNC_38 (struct task_struct*) ;

__attribute__((used)) static int
FUNC_39(unsigned int VAR_24, struct irq_desc *VAR_25, struct irqaction *VAR_26)
{
 struct irqaction *VAR_27, **VAR_28;
 unsigned long VAR_29, VAR_30 = 0;
 int VAR_31, VAR_32, VAR_33 = 0;

 if (!VAR_25)
  return -VAR_1;

 if (VAR_25->irq_data.chip == &VAR_23)
  return -VAR_3;
 if (!FUNC_37(VAR_25->owner))
  return -VAR_2;

 VAR_26->irq = VAR_24;





 if (!(VAR_26->flags & VAR_13))
  VAR_26->flags |= FUNC_21(&VAR_25->irq_data);





 VAR_32 = FUNC_14(VAR_25);
 if (VAR_32) {
  if (!VAR_26->thread_fn) {
   VAR_31 = -VAR_1;
   goto out_mput;
  }





  VAR_26->handler = VAR_22;
 } else {
  if (FUNC_13(VAR_25)) {
   VAR_31 = FUNC_17(VAR_26);
   if (VAR_31)
    goto out_mput;
  }
 }






 if (VAR_26->thread_fn && !VAR_32) {
  VAR_31 = FUNC_36(VAR_26, VAR_24, 0);
  if (VAR_31)
   goto out_mput;
  if (VAR_26->secondary) {
   VAR_31 = FUNC_36(VAR_26->secondary, VAR_24, 1);
   if (VAR_31)
    goto out_thread;
  }
 }
 if (VAR_25->irq_data.chip->flags & VAR_4)
  VAR_26->flags &= ~VAR_9;
 FUNC_27(&VAR_25->request_mutex);






 FUNC_3(VAR_25);


 if (!VAR_25->action) {
  VAR_31 = FUNC_11(VAR_25);
  if (VAR_31) {
   FUNC_29("Failed to request resources for %s (irq %d) on irqchip %s\n",
          VAR_26->name, VAR_24, VAR_25->irq_data.chip->name);
   goto out_bus_unlock;
  }
 }







 FUNC_32(&VAR_25->lock, VAR_29);
 VAR_28 = &VAR_25->action;
 VAR_27 = *VAR_28;
 if (VAR_27) {
  unsigned int VAR_34;

  if (VAR_25->istate & VAR_15) {
   FUNC_29("Invalid attempt to share NMI for %s (irq %d) on irqchip %s.\n",
    VAR_26->name, VAR_24, VAR_25->irq_data.chip->name);
   VAR_31 = -VAR_1;
   goto out_unlock;
  }





  if (FUNC_24(&VAR_25->irq_data)) {
   VAR_34 = FUNC_21(&VAR_25->irq_data);
  } else {
   VAR_34 = VAR_26->flags & VAR_13;
   FUNC_23(&VAR_25->irq_data, VAR_34);
  }

  if (!((VAR_27->flags & VAR_26->flags) & VAR_12) ||
      (VAR_34 != (VAR_26->flags & VAR_13)) ||
      ((VAR_27->flags ^ VAR_26->flags) & VAR_9))
   goto mismatch;


  if ((VAR_27->flags & VAR_10) !=
      (VAR_26->flags & VAR_10))
   goto mismatch;


  do {





   VAR_30 |= VAR_27->thread_mask;
   VAR_28 = &VAR_27->next;
   VAR_27 = *VAR_28;
  } while (VAR_27);
  VAR_33 = 1;
 }






 if (VAR_26->flags & VAR_9) {




  if (VAR_30 == ~0UL) {
   VAR_31 = -VAR_0;
   goto out_unlock;
  }
  VAR_26->thread_mask = 1UL << FUNC_6(VAR_30);

 } else if (VAR_26->handler == VAR_21 &&
     !(VAR_25->irq_data.chip->flags & VAR_4)) {
  FUNC_29("Threaded irq requested with handler=NULL and !ONESHOT for irq %d\n",
         VAR_24);
  VAR_31 = -VAR_1;
  goto out_unlock;
 }

 if (!VAR_33) {
  FUNC_7(&VAR_25->wait_for_threads);


  if (VAR_26->flags & VAR_13) {
   VAR_31 = FUNC_2(VAR_25,
      VAR_26->flags & VAR_13);

   if (VAR_31)
    goto out_unlock;
  }
  VAR_31 = FUNC_8(VAR_25);
  if (VAR_31)
   goto out_unlock;

  VAR_25->istate &= ~(VAR_14 | VAR_17 | VAR_16 | VAR_18);

  FUNC_20(&VAR_25->irq_data, VAR_5);

  if (VAR_26->flags & VAR_10) {
   FUNC_22(&VAR_25->irq_data, VAR_7);
   FUNC_16(VAR_25);
  }

  if (VAR_26->flags & VAR_9)
   VAR_25->istate |= VAR_16;


  if (VAR_26->flags & VAR_8) {
   FUNC_15(VAR_25);
   FUNC_22(&VAR_25->irq_data, VAR_6);
  }

  if (FUNC_12(VAR_25)) {
   FUNC_19(VAR_25, VAR_19, VAR_20);
  } else {






   FUNC_0(VAR_26->flags & VAR_12);

   VAR_25->depth = 1;
  }

 } else if (VAR_26->flags & VAR_13) {
  unsigned int VAR_35 = VAR_26->flags & VAR_13;
  unsigned int VAR_36 = FUNC_21(&VAR_25->irq_data);

  if (VAR_35 != VAR_36)

   FUNC_30("irq %d uses trigger mode %u; requested %u\n",
    VAR_24, VAR_36, VAR_35);
 }

 *VAR_28 = VAR_26;

 FUNC_9(VAR_25, VAR_26);


 VAR_25->irq_count = 0;
 VAR_25->irqs_unhandled = 0;





 if (VAR_33 && (VAR_25->istate & VAR_17)) {
  VAR_25->istate &= ~VAR_17;
  FUNC_1(VAR_25);
 }

 FUNC_33(&VAR_25->lock, VAR_29);
 FUNC_4(VAR_25);
 FUNC_28(&VAR_25->request_mutex);

 FUNC_18(VAR_25, VAR_26);





 if (VAR_26->thread)
  FUNC_38(VAR_26->thread);
 if (VAR_26->secondary)
  FUNC_38(VAR_26->secondary->thread);

 FUNC_35(VAR_24, VAR_25);
 VAR_26->dir = ((void*)0);
 FUNC_34(VAR_24, VAR_26);
 return 0;

mismatch:
 if (!(VAR_26->flags & VAR_11)) {
  FUNC_29("Flags mismatch irq %d. %08x (%s) vs. %08x (%s)\n",
         VAR_24, VAR_26->flags, VAR_26->name, VAR_27->flags, VAR_27->name);



 }
 VAR_31 = -VAR_0;

out_unlock:
 FUNC_33(&VAR_25->lock, VAR_29);

 if (!VAR_25->action)
  FUNC_10(VAR_25);
out_bus_unlock:
 FUNC_4(VAR_25);
 FUNC_28(&VAR_25->request_mutex);

out_thread:
 if (VAR_26->thread) {
  struct task_struct *VAR_37 = VAR_26->thread;

  VAR_26->thread = ((void*)0);
  FUNC_25(VAR_37);
  FUNC_31(VAR_37);
 }
 if (VAR_26->secondary && VAR_26->secondary->thread) {
  struct task_struct *VAR_38 = VAR_26->secondary->thread;

  VAR_26->secondary->thread = ((void*)0);
  FUNC_25(VAR_38);
  FUNC_31(VAR_38);
 }
out_mput:
 FUNC_26(VAR_25->owner);
 return VAR_31;
}
