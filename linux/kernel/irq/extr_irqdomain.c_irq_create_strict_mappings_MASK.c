
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct irq_domain {int dummy; } ;
struct device_node {int dummy; } ;
typedef int irq_hw_number_t ;


 int FUNC_0 (unsigned int,unsigned int,int,int ) ;
 int FUNC_1 (struct irq_domain*,unsigned int,int ,int) ;
 struct device_node* FUNC_2 (struct irq_domain*) ;
 int FUNC_3 (struct device_node*) ;
 scalar_t__ FUNC_4 (int) ;

int FUNC_5(struct irq_domain *VAR_0, unsigned int VAR_1,
          irq_hw_number_t VAR_2, int VAR_3)
{
 struct device_node *VAR_4;
 int VAR_5;

 VAR_4 = FUNC_2(VAR_0);
 VAR_5 = FUNC_0(VAR_1, VAR_1, VAR_3,
         FUNC_3(VAR_4));
 if (FUNC_4(VAR_5 < 0))
  return VAR_5;

 FUNC_1(VAR_0, VAR_1, VAR_2, VAR_3);
 return 0;
}
