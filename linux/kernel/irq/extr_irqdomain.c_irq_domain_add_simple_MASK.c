
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct irq_domain_ops {int dummy; } ;
struct irq_domain {int dummy; } ;
struct device_node {int dummy; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int ) ;
 struct irq_domain* FUNC_1 (int ,unsigned int,unsigned int,int ,struct irq_domain_ops const*,void*) ;
 int FUNC_2 (unsigned int,unsigned int,unsigned int,int ) ;
 int FUNC_3 (struct irq_domain*,unsigned int,int ,unsigned int) ;
 int FUNC_4 (struct device_node*) ;
 int FUNC_5 (struct device_node*) ;
 int FUNC_6 (char*,unsigned int) ;

struct irq_domain *FUNC_7(struct device_node *VAR_1,
      unsigned int VAR_2,
      unsigned int VAR_3,
      const struct irq_domain_ops *VAR_4,
      void *VAR_5)
{
 struct irq_domain *VAR_6;

 VAR_6 = FUNC_1(FUNC_4(VAR_1), VAR_2, VAR_2, 0, VAR_4, VAR_5);
 if (!VAR_6)
  return ((void*)0);

 if (VAR_3 > 0) {
  if (FUNC_0(VAR_0)) {

   int VAR_7 = FUNC_2(VAR_3, VAR_3, VAR_2,
       FUNC_5(VAR_1));
   if (VAR_7 < 0)
    FUNC_6("Cannot allocate irq_descs @ IRQ%d, assuming pre-allocated\n",
     VAR_3);
  }
  FUNC_3(VAR_6, VAR_3, 0, VAR_2);
 }

 return VAR_6;
}
