
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct irq_domain {int dummy; } ;
struct irq_data {TYPE_1__* common; struct irq_domain* domain; } ;
struct cpumask {int dummy; } ;
struct TYPE_2__ {unsigned int ipi_offset; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int) ;
 unsigned int FUNC_1 (struct cpumask const*) ;
 int FUNC_2 (struct cpumask const*,struct cpumask*) ;
 unsigned int FUNC_3 (struct cpumask const*) ;
 struct cpumask* FUNC_4 (struct irq_data*) ;
 int FUNC_5 (unsigned int,unsigned int) ;
 int FUNC_6 (struct irq_domain*) ;
 scalar_t__ FUNC_7 (struct irq_domain*) ;
 struct irq_data* FUNC_8 (unsigned int) ;
 int FUNC_9 (char*) ;

int FUNC_10(unsigned int VAR_1, const struct cpumask *VAR_2)
{
 struct irq_data *VAR_3 = FUNC_8(VAR_1);
 struct cpumask *VAR_4 = VAR_3 ? FUNC_4(VAR_3) : ((void*)0);
 struct irq_domain *VAR_5;
 unsigned int VAR_6;

 if (!VAR_1 || !VAR_3 || !VAR_4)
  return -VAR_0;

 VAR_5 = VAR_3->domain;
 if (FUNC_0(VAR_5 == ((void*)0)))
  return -VAR_0;

 if (!FUNC_6(VAR_5)) {
  FUNC_9("Trying to destroy a non IPI domain!\n");
  return -VAR_0;
 }

 if (FUNC_0(!FUNC_2(VAR_2, VAR_4)))




  return -VAR_0;

 if (FUNC_7(VAR_5)) {
  VAR_1 = VAR_1 + FUNC_1(VAR_2) - VAR_3->common->ipi_offset;
  VAR_6 = FUNC_3(VAR_2);
 } else {
  VAR_6 = 1;
 }

 FUNC_5(VAR_1, VAR_6);
 return 0;
}
