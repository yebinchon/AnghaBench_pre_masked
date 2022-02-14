
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct irq_data {struct irq_chip* chip; } ;
struct irq_desc {struct irq_data irq_data; } ;
struct irq_chip {int (* irq_request_resources ) (struct irq_data*) ;} ;


 int FUNC_0 (struct irq_data*) ;

__attribute__((used)) static int FUNC_1(struct irq_desc *VAR_0)
{
 struct irq_data *VAR_1 = &VAR_0->irq_data;
 struct irq_chip *VAR_2 = VAR_1->chip;

 return VAR_2->irq_request_resources ? VAR_2->irq_request_resources(VAR_1) : 0;
}
