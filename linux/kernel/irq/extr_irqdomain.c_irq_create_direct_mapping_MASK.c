
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct irq_domain {unsigned int revmap_direct_max_irq; } ;
struct device_node {int dummy; } ;


 unsigned int FUNC_0 (int,int ) ;
 struct irq_domain* VAR_0 ;
 scalar_t__ FUNC_1 (struct irq_domain*,unsigned int,unsigned int) ;
 struct device_node* FUNC_2 (struct irq_domain*) ;
 int FUNC_3 (unsigned int) ;
 int FUNC_4 (struct device_node*) ;
 int FUNC_5 (char*,...) ;
 int FUNC_6 (char*,unsigned int) ;

unsigned int FUNC_7(struct irq_domain *VAR_1)
{
 struct device_node *VAR_2;
 unsigned int VAR_3;

 if (VAR_1 == ((void*)0))
  VAR_1 = VAR_0;

 VAR_2 = FUNC_2(VAR_1);
 VAR_3 = FUNC_0(1, FUNC_4(VAR_2));
 if (!VAR_3) {
  FUNC_5("create_direct virq allocation failed\n");
  return 0;
 }
 if (VAR_3 >= VAR_1->revmap_direct_max_irq) {
  FUNC_6("ERROR: no free irqs available below %i maximum\n",
   VAR_1->revmap_direct_max_irq);
  FUNC_3(VAR_3);
  return 0;
 }
 FUNC_5("create_direct obtained virq %d\n", VAR_3);

 if (FUNC_1(VAR_1, VAR_3, VAR_3)) {
  FUNC_3(VAR_3);
  return 0;
 }

 return VAR_3;
}
