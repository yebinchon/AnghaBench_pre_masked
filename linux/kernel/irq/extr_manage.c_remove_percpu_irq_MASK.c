
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct irqaction {int percpu_dev_id; } ;
struct irq_desc {int dummy; } ;


 int FUNC_0 (unsigned int,int ) ;
 scalar_t__ FUNC_1 (struct irq_desc*) ;
 struct irq_desc* FUNC_2 (unsigned int) ;

void FUNC_3(unsigned int VAR_0, struct irqaction *VAR_1)
{
 struct irq_desc *VAR_2 = FUNC_2(VAR_0);

 if (VAR_2 && FUNC_1(VAR_2))
     FUNC_0(VAR_0, VAR_1->percpu_dev_id);
}
