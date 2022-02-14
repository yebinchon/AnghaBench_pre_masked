
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct irq_data {TYPE_1__* common; int domain; } ;
struct cpumask {int dummy; } ;
typedef int irq_hw_number_t ;
struct TYPE_2__ {unsigned int ipi_offset; } ;


 int VAR_0 ;
 int FUNC_0 (unsigned int,struct cpumask*) ;
 struct cpumask* FUNC_1 (struct irq_data*) ;
 scalar_t__ FUNC_2 (int ) ;
 struct irq_data* FUNC_3 (unsigned int) ;
 int FUNC_4 (struct irq_data*) ;
 unsigned int VAR_1 ;

irq_hw_number_t FUNC_5(unsigned int VAR_2, unsigned int VAR_3)
{
 struct irq_data *VAR_4 = FUNC_3(VAR_2);
 struct cpumask *VAR_5 = VAR_4 ? FUNC_1(VAR_4) : ((void*)0);

 if (!VAR_4 || !VAR_5 || VAR_3 >= VAR_1)
  return VAR_0;

 if (!FUNC_0(VAR_3, VAR_5))
  return VAR_0;







 if (FUNC_2(VAR_4->domain))
  VAR_4 = FUNC_3(VAR_2 + VAR_3 - VAR_4->common->ipi_offset);

 return VAR_4 ? FUNC_4(VAR_4) : VAR_0;
}
