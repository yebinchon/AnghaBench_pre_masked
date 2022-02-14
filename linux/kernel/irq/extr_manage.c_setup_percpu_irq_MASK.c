
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct irqaction {int dummy; } ;
struct irq_desc {int irq_data; } ;


 int VAR_0 ;
 int FUNC_0 (unsigned int,struct irq_desc*,struct irqaction*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (struct irq_desc*) ;
 struct irq_desc* FUNC_4 (unsigned int) ;

int FUNC_5(unsigned int VAR_1, struct irqaction *VAR_2)
{
 struct irq_desc *VAR_3 = FUNC_4(VAR_1);
 int VAR_4;

 if (!VAR_3 || !FUNC_3(VAR_3))
  return -VAR_0;

 VAR_4 = FUNC_1(&VAR_3->irq_data);
 if (VAR_4 < 0)
  return VAR_4;

 VAR_4 = FUNC_0(VAR_1, VAR_3, VAR_2);

 if (VAR_4)
  FUNC_2(&VAR_3->irq_data);

 return VAR_4;
}
