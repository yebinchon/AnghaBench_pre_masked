
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct irqaction {int dummy; } ;
struct irq_desc {int irq_data; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (unsigned int,struct irq_desc*,struct irqaction*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (struct irq_desc*) ;
 struct irq_desc* FUNC_5 (unsigned int) ;

int FUNC_6(unsigned int VAR_1, struct irqaction *VAR_2)
{
 int VAR_3;
 struct irq_desc *VAR_4 = FUNC_5(VAR_1);

 if (!VAR_4 || FUNC_0(FUNC_4(VAR_4)))
  return -VAR_0;

 VAR_3 = FUNC_2(&VAR_4->irq_data);
 if (VAR_3 < 0)
  return VAR_3;

 VAR_3 = FUNC_1(VAR_1, VAR_4, VAR_2);

 if (VAR_3)
  FUNC_3(&VAR_4->irq_data);

 return VAR_3;
}
