
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct irq_desc {int dummy; } ;
struct irq_data {struct irq_chip* chip; } ;
struct irq_chip {int (* irq_nmi_setup ) (struct irq_data*) ;} ;


 int VAR_0 ;
 struct irq_data* FUNC_0 (struct irq_desc*) ;
 int FUNC_1 (struct irq_data*) ;

__attribute__((used)) static int FUNC_2(struct irq_desc *VAR_1)
{
 struct irq_data *VAR_2 = FUNC_0(VAR_1);
 struct irq_chip *VAR_3 = VAR_2->chip;

 return VAR_3->irq_nmi_setup ? VAR_3->irq_nmi_setup(VAR_2) : -VAR_0;
}
