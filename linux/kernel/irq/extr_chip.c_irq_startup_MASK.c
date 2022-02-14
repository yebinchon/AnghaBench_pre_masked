
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct irq_desc {scalar_t__ depth; } ;
struct irq_data {int dummy; } ;
struct cpumask {int dummy; } ;





 int FUNC_0 (struct irq_desc*) ;
 int FUNC_1 (struct irq_desc*,struct cpumask*,int) ;
 int FUNC_2 (struct irq_desc*) ;
 struct cpumask* FUNC_3 (struct irq_data*) ;
 struct irq_data* FUNC_4 (struct irq_desc*) ;
 int FUNC_5 (struct irq_data*,struct cpumask*,int) ;
 int FUNC_6 (struct irq_desc*) ;
 int FUNC_7 (struct irq_desc*) ;
 scalar_t__ FUNC_8 (struct irq_data*) ;
 int FUNC_9 (struct irq_data*) ;

int FUNC_10(struct irq_desc *VAR_0, bool VAR_1, bool VAR_2)
{
 struct irq_data *VAR_3 = FUNC_4(VAR_0);
 struct cpumask *VAR_4 = FUNC_3(VAR_3);
 int VAR_5 = 0;

 VAR_0->depth = 0;

 if (FUNC_8(VAR_3)) {
  FUNC_6(VAR_0);
 } else {
  switch (FUNC_1(VAR_0, VAR_4, VAR_2)) {
  case 128:
   VAR_5 = FUNC_0(VAR_0);
   FUNC_7(VAR_0);
   break;
  case 129:
   FUNC_5(VAR_3, VAR_4, 0);
   VAR_5 = FUNC_0(VAR_0);
   break;
  case 130:
   FUNC_9(VAR_3);
   return 0;
  }
 }
 if (VAR_1)
  FUNC_2(VAR_0);

 return VAR_5;
}
