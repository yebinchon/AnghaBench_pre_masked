
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct irq_data {int mask; } ;
struct irq_chip_generic {int wake_enabled; int wake_active; } ;


 int VAR_0 ;
 struct irq_chip_generic* FUNC_0 (struct irq_data*) ;
 int FUNC_1 (struct irq_chip_generic*) ;
 int FUNC_2 (struct irq_chip_generic*) ;

int FUNC_3(struct irq_data *VAR_1, unsigned int VAR_2)
{
 struct irq_chip_generic *VAR_3 = FUNC_0(VAR_1);
 u32 VAR_4 = VAR_1->mask;

 if (!(VAR_4 & VAR_3->wake_enabled))
  return -VAR_0;

 FUNC_1(VAR_3);
 if (VAR_2)
  VAR_3->wake_active |= VAR_4;
 else
  VAR_3->wake_active &= ~VAR_4;
 FUNC_2(VAR_3);
 return 0;
}
