
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct irq_desc {int dummy; } ;
struct irq_data {int dummy; } ;
struct irq_chip {int dummy; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (struct irq_desc*,unsigned int) ;
 int FUNC_2 (struct irq_chip*,struct irq_data*,int *,unsigned int) ;
 struct irq_chip* FUNC_3 (struct irq_data*) ;
 struct irq_data* FUNC_4 (struct irq_desc*) ;
 struct irq_desc* FUNC_5 (unsigned int) ;

int FUNC_6(unsigned int VAR_1, unsigned int VAR_2)
{
 struct irq_desc *VAR_3 = FUNC_5(VAR_1);
 struct irq_data *VAR_4 = VAR_3 ? FUNC_4(VAR_3) : ((void*)0);
 struct irq_chip *VAR_5 = VAR_4 ? FUNC_3(VAR_4) : ((void*)0);

 if (FUNC_0(FUNC_2(VAR_5, VAR_4, ((void*)0), VAR_2)))
  return -VAR_0;

 return FUNC_1(VAR_3, VAR_2);
}
