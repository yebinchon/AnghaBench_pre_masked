
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct irqaction {unsigned long flags; char const* name; struct irqaction* secondary; void* dev_id; int (* thread_fn ) (unsigned int,void*) ;int (* handler ) (unsigned int,void*) ;} ;
struct irq_desc {int irq_data; } ;
typedef int (* irq_handler_t ) (unsigned int,void*) ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 unsigned long VAR_4 ;
 unsigned long VAR_5 ;
 unsigned long VAR_6 ;
 unsigned int VAR_7 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (unsigned int,struct irq_desc*,struct irqaction*) ;
 int FUNC_2 (unsigned int) ;
 int FUNC_3 (unsigned int) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (unsigned int,void*) ;
 int FUNC_7 (struct irq_desc*) ;
 int FUNC_8 (struct irq_desc*) ;
 struct irq_desc* FUNC_9 (unsigned int) ;
 int FUNC_10 (struct irqaction*) ;
 struct irqaction* FUNC_11 (int,int ) ;
 int FUNC_12 (unsigned long) ;
 int FUNC_13 (unsigned long) ;

int FUNC_14(unsigned int VAR_8, irq_handler_t VAR_9,
    irq_handler_t VAR_10, unsigned long VAR_11,
    const char *VAR_12, void *VAR_13)
{
 struct irqaction *VAR_14;
 struct irq_desc *VAR_15;
 int VAR_16;

 if (VAR_8 == VAR_7)
  return -VAR_2;
 if (((VAR_11 & VAR_6) && !VAR_13) ||
     (!(VAR_11 & VAR_6) && (VAR_11 & VAR_4)) ||
     ((VAR_11 & VAR_5) && (VAR_11 & VAR_4)))
  return -VAR_0;

 VAR_15 = FUNC_9(VAR_8);
 if (!VAR_15)
  return -VAR_0;

 if (!FUNC_7(VAR_15) ||
     FUNC_0(FUNC_8(VAR_15)))
  return -VAR_0;

 if (!VAR_9) {
  if (!VAR_10)
   return -VAR_0;
  VAR_9 = FUNC_6;
 }

 VAR_14 = FUNC_11(sizeof(struct irqaction), VAR_3);
 if (!VAR_14)
  return -VAR_1;

 VAR_14->handler = VAR_9;
 VAR_14->thread_fn = VAR_10;
 VAR_14->flags = VAR_11;
 VAR_14->name = VAR_12;
 VAR_14->dev_id = VAR_13;

 VAR_16 = FUNC_4(&VAR_15->irq_data);
 if (VAR_16 < 0) {
  FUNC_10(VAR_14);
  return VAR_16;
 }

 VAR_16 = FUNC_1(VAR_8, VAR_15, VAR_14);

 if (VAR_16) {
  FUNC_5(&VAR_15->irq_data);
  FUNC_10(VAR_14->secondary);
  FUNC_10(VAR_14);
 }
 return VAR_16;
}
