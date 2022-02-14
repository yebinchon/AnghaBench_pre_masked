
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct irqaction {unsigned long flags; char const* name; void* dev_id; scalar_t__ handler; } ;
struct irq_desc {int irq_data; int lock; int istate; } ;
typedef scalar_t__ irq_handler_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 unsigned long VAR_4 ;
 unsigned long VAR_5 ;
 unsigned long VAR_6 ;
 unsigned long VAR_7 ;
 unsigned long VAR_8 ;
 unsigned long VAR_9 ;
 int VAR_10 ;
 unsigned int VAR_11 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (unsigned int,struct irq_desc*) ;
 int FUNC_2 (unsigned int,struct irq_desc*,struct irqaction*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (struct irq_desc*) ;
 scalar_t__ FUNC_6 (struct irq_desc*) ;
 int FUNC_7 (struct irq_desc*) ;
 int FUNC_8 (struct irq_desc*) ;
 int FUNC_9 (struct irq_desc*) ;
 struct irq_desc* FUNC_10 (unsigned int) ;
 int FUNC_11 (struct irqaction*) ;
 struct irqaction* FUNC_12 (int,int ) ;
 int FUNC_13 (int *,unsigned long) ;
 int FUNC_14 (int *,unsigned long) ;

int FUNC_15(unsigned int VAR_12, irq_handler_t VAR_13,
  unsigned long VAR_14, const char *VAR_15, void *VAR_16)
{
 struct irqaction *VAR_17;
 struct irq_desc *VAR_18;
 unsigned long VAR_19;
 int VAR_20;

 if (VAR_12 == VAR_11)
  return -VAR_2;


 if (VAR_14 & (VAR_9 | VAR_4 | VAR_5))
  return -VAR_0;

 if (!(VAR_14 & VAR_8))
  return -VAR_0;

 if (!VAR_13)
  return -VAR_0;

 VAR_18 = FUNC_10(VAR_12);

 if (!VAR_18 || FUNC_6(VAR_18) ||
     !FUNC_7(VAR_18) ||
     FUNC_0(FUNC_8(VAR_18)) ||
     !FUNC_9(VAR_18))
  return -VAR_0;

 VAR_17 = FUNC_12(sizeof(struct irqaction), VAR_3);
 if (!VAR_17)
  return -VAR_1;

 VAR_17->handler = VAR_13;
 VAR_17->flags = VAR_14 | VAR_7 | VAR_6;
 VAR_17->name = VAR_15;
 VAR_17->dev_id = VAR_16;

 VAR_20 = FUNC_3(&VAR_18->irq_data);
 if (VAR_20 < 0)
  goto err_out;

 VAR_20 = FUNC_2(VAR_12, VAR_18, VAR_17);
 if (VAR_20)
  goto err_irq_setup;

 FUNC_13(&VAR_18->lock, VAR_19);


 VAR_18->istate |= VAR_10;
 VAR_20 = FUNC_5(VAR_18);
 if (VAR_20) {
  FUNC_1(VAR_12, VAR_18);
  FUNC_14(&VAR_18->lock, VAR_19);
  return -VAR_0;
 }

 FUNC_14(&VAR_18->lock, VAR_19);

 return 0;

err_irq_setup:
 FUNC_4(&VAR_18->irq_data);
err_out:
 FUNC_11(VAR_17);

 return VAR_20;
}
