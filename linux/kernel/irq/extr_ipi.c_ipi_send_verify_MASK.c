
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct irq_data {int dummy; } ;
struct irq_chip {int ipi_send_mask; int ipi_send_single; } ;
struct cpumask {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct cpumask const*,struct cpumask*) ;
 int FUNC_1 (unsigned int,struct cpumask*) ;
 struct cpumask* FUNC_2 (struct irq_data*) ;
 unsigned int VAR_1 ;

__attribute__((used)) static int FUNC_3(struct irq_chip *VAR_2, struct irq_data *VAR_3,
      const struct cpumask *VAR_4, unsigned int VAR_5)
{
 struct cpumask *VAR_6 = FUNC_2(VAR_3);

 if (!VAR_2 || !VAR_6)
  return -VAR_0;

 if (!VAR_2->ipi_send_single && !VAR_2->ipi_send_mask)
  return -VAR_0;

 if (VAR_5 >= VAR_1)
  return -VAR_0;

 if (VAR_4) {
  if (!FUNC_0(VAR_4, VAR_6))
   return -VAR_0;
 } else {
  if (!FUNC_1(VAR_5, VAR_6))
   return -VAR_0;
 }
 return 0;
}
