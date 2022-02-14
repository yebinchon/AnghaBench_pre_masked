
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct irq_data {int dummy; } ;
struct irq_chip_generic {unsigned int irq_base; int installed; int domain; } ;


 unsigned int FUNC_0 (int ) ;
 unsigned int FUNC_1 (int ,unsigned int) ;
 struct irq_data* FUNC_2 (unsigned int) ;

__attribute__((used)) static struct irq_data *FUNC_3(struct irq_chip_generic *VAR_0)
{
 unsigned int VAR_1;

 if (!VAR_0->domain)
  return FUNC_2(VAR_0->irq_base);





 if (!VAR_0->installed)
  return ((void*)0);

 VAR_1 = FUNC_1(VAR_0->domain, VAR_0->irq_base + FUNC_0(VAR_0->installed));
 return VAR_1 ? FUNC_2(VAR_1) : ((void*)0);
}
