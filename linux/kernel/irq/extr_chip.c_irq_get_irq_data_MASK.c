
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct irq_data {int dummy; } ;
struct irq_desc {struct irq_data irq_data; } ;


 struct irq_desc* FUNC_0 (unsigned int) ;

struct irq_data *FUNC_1(unsigned int VAR_0)
{
 struct irq_desc *VAR_1 = FUNC_0(VAR_0);

 return VAR_1 ? &VAR_1->irq_data : ((void*)0);
}
