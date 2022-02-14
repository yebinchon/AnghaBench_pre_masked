
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct irq_desc {int dummy; } ;
struct irq_data {int dummy; } ;
typedef enum irqchip_irq_state { ____Placeholder_irqchip_irq_state } irqchip_irq_state ;


 int VAR_0 ;
 int FUNC_0 (struct irq_data*,int,int*) ;
 struct irq_data* FUNC_1 (struct irq_desc*) ;
 struct irq_desc* FUNC_2 (unsigned int,unsigned long*,int ) ;
 int FUNC_3 (struct irq_desc*,unsigned long) ;

int FUNC_4(unsigned int VAR_1, enum irqchip_irq_state VAR_2,
     bool *VAR_3)
{
 struct irq_desc *VAR_4;
 struct irq_data *VAR_5;
 unsigned long VAR_6;
 int VAR_7 = -VAR_0;

 VAR_4 = FUNC_2(VAR_1, &VAR_6, 0);
 if (!VAR_4)
  return VAR_7;

 VAR_5 = FUNC_1(VAR_4);

 VAR_7 = FUNC_0(VAR_5, VAR_2, VAR_3);

 FUNC_3(VAR_4, VAR_6);
 return VAR_7;
}
