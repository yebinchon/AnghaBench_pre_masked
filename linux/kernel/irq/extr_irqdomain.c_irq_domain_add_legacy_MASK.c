
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct irq_domain_ops {int dummy; } ;
struct irq_domain {int dummy; } ;
struct device_node {int dummy; } ;
typedef int irq_hw_number_t ;


 struct irq_domain* FUNC_0 (int ,int ,int ,int ,struct irq_domain_ops const*,void*) ;
 int FUNC_1 (struct irq_domain*,unsigned int,int ,unsigned int) ;
 int FUNC_2 (struct device_node*) ;

struct irq_domain *FUNC_3(struct device_node *VAR_0,
      unsigned int VAR_1,
      unsigned int VAR_2,
      irq_hw_number_t VAR_3,
      const struct irq_domain_ops *VAR_4,
      void *VAR_5)
{
 struct irq_domain *VAR_6;

 VAR_6 = FUNC_0(FUNC_2(VAR_0), VAR_3 + VAR_1,
      VAR_3 + VAR_1, 0, VAR_4, VAR_5);
 if (VAR_6)
  FUNC_1(VAR_6, VAR_2, VAR_3, VAR_1);

 return VAR_6;
}
