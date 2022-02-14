
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int irq; } ;
struct irq_desc {TYPE_1__ irq_data; } ;
typedef int irqreturn_t ;


 int FUNC_0 (struct irq_desc*,unsigned int*) ;
 int FUNC_1 (int ,unsigned int) ;
 int VAR_0 ;
 int FUNC_2 (struct irq_desc*,int ) ;

irqreturn_t FUNC_3(struct irq_desc *VAR_1)
{
 irqreturn_t VAR_2;
 unsigned int VAR_3 = 0;

 VAR_2 = FUNC_0(VAR_1, &VAR_3);

 FUNC_1(VAR_1->irq_data.irq, VAR_3);

 if (!VAR_0)
  FUNC_2(VAR_1, VAR_2);
 return VAR_2;
}
