
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct irq_fwspec {int dummy; } ;
struct irq_domain {int dummy; } ;
struct device_node {int dummy; } ;
typedef int irq_hw_number_t ;


 int FUNC_0 (struct irq_domain*,struct irq_fwspec*,int *,unsigned int*) ;
 int FUNC_1 (struct device_node*,int const*,unsigned int,struct irq_fwspec*) ;

int FUNC_2(struct irq_domain *VAR_0, struct device_node *VAR_1,
   const u32 *VAR_2, unsigned int VAR_3,
   irq_hw_number_t *VAR_4, unsigned int *VAR_5)
{
 struct irq_fwspec VAR_6;

 FUNC_1(VAR_1, VAR_2, VAR_3, &VAR_6);
 return FUNC_0(VAR_0, &VAR_6, VAR_4, VAR_5);
}
