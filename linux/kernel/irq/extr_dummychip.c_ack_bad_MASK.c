
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct irq_desc {int dummy; } ;
struct irq_data {int irq; } ;


 int FUNC_0 (int ) ;
 struct irq_desc* FUNC_1 (struct irq_data*) ;
 int FUNC_2 (int ,struct irq_desc*) ;

__attribute__((used)) static void FUNC_3(struct irq_data *VAR_0)
{
 struct irq_desc *VAR_1 = FUNC_1(VAR_0);

 FUNC_2(VAR_0->irq, VAR_1);
 FUNC_0(VAR_0->irq);
}
