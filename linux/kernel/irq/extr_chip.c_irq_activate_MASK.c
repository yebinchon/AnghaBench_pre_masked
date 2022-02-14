
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct irq_desc {int dummy; } ;
struct irq_data {int dummy; } ;


 struct irq_data* FUNC_0 (struct irq_desc*) ;
 int FUNC_1 (struct irq_data*,int) ;
 int FUNC_2 (struct irq_data*) ;

int FUNC_3(struct irq_desc *VAR_0)
{
 struct irq_data *VAR_1 = FUNC_0(VAR_0);

 if (!FUNC_2(VAR_1))
  return FUNC_1(VAR_1, 0);
 return 0;
}
