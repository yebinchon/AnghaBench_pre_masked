
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct irqaction {void* dev_id; int flags; TYPE_1__* secondary; scalar_t__ thread; int (* handler ) (unsigned int,void*) ;struct irqaction* next; } ;
struct TYPE_5__ {unsigned int irq; } ;
struct irq_desc {int owner; TYPE_2__ irq_data; int request_mutex; int lock; struct irqaction* action; int * affinity_hint; } ;
struct TYPE_4__ {scalar_t__ thread; } ;


 int VAR_0 ;
 int FUNC_0 (int,char*,unsigned int) ;
 scalar_t__ FUNC_1 (int *) ;
 int FUNC_2 (struct irq_desc*,int) ;
 int FUNC_3 (struct irq_desc*) ;
 int FUNC_4 (struct irq_desc*) ;
 int FUNC_5 () ;
 int FUNC_6 (TYPE_2__*) ;
 int FUNC_7 (TYPE_2__*) ;
 int FUNC_8 (struct irq_desc*,struct irqaction*) ;
 int FUNC_9 (struct irq_desc*) ;
 int FUNC_10 (struct irq_desc*) ;
 int FUNC_11 (struct irq_desc*) ;
 int FUNC_12 (struct irq_desc*) ;
 int FUNC_13 (TYPE_1__*) ;
 int FUNC_14 (scalar_t__) ;
 int FUNC_15 (unsigned long) ;
 int FUNC_16 (unsigned long) ;
 int FUNC_17 (int ) ;
 int FUNC_18 (int *) ;
 int FUNC_19 (int *) ;
 int FUNC_20 (scalar_t__) ;
 int FUNC_21 (int *,unsigned long) ;
 int FUNC_22 (int *,unsigned long) ;
 int FUNC_23 (unsigned int,void*) ;
 int FUNC_24 (unsigned int,struct irqaction*) ;

__attribute__((used)) static struct irqaction *FUNC_25(struct irq_desc *VAR_1, void *VAR_2)
{
 unsigned VAR_3 = VAR_1->irq_data.irq;
 struct irqaction *VAR_4, **VAR_5;
 unsigned long VAR_6;

 FUNC_0(FUNC_5(), "Trying to free IRQ %d from IRQ context!\n", VAR_3);

 FUNC_18(&VAR_1->request_mutex);
 FUNC_3(VAR_1);
 FUNC_21(&VAR_1->lock, VAR_6);





 VAR_5 = &VAR_1->action;
 for (;;) {
  VAR_4 = *VAR_5;

  if (!VAR_4) {
   FUNC_0(1, "Trying to free already-free IRQ %d\n", VAR_3);
   FUNC_22(&VAR_1->lock, VAR_6);
   FUNC_4(VAR_1);
   FUNC_19(&VAR_1->request_mutex);
   return ((void*)0);
  }

  if (VAR_4->dev_id == VAR_2)
   break;
  VAR_5 = &VAR_4->next;
 }


 *VAR_5 = VAR_4->next;

 FUNC_8(VAR_1, VAR_4);


 if (!VAR_1->action) {
  FUNC_11(VAR_1);

  FUNC_12(VAR_1);
 }







 FUNC_22(&VAR_1->lock, VAR_6);
 FUNC_4(VAR_1);

 FUNC_24(VAR_3, VAR_4);






 FUNC_2(VAR_1, 1);
 if (VAR_4->thread) {
  FUNC_14(VAR_4->thread);
  FUNC_20(VAR_4->thread);
  if (VAR_4->secondary && VAR_4->secondary->thread) {
   FUNC_14(VAR_4->secondary->thread);
   FUNC_20(VAR_4->secondary->thread);
  }
 }


 if (!VAR_1->action) {




  FUNC_3(VAR_1);




  FUNC_21(&VAR_1->lock, VAR_6);
  FUNC_7(&VAR_1->irq_data);
  FUNC_22(&VAR_1->lock, VAR_6);

  FUNC_9(VAR_1);
  FUNC_4(VAR_1);
  FUNC_10(VAR_1);
 }

 FUNC_19(&VAR_1->request_mutex);

 FUNC_6(&VAR_1->irq_data);
 FUNC_17(VAR_1->owner);
 FUNC_13(VAR_4->secondary);
 return VAR_4;
}
