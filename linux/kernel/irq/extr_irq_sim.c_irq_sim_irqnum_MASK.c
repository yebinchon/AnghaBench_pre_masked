
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct irq_sim {TYPE_1__* irqs; } ;
struct TYPE_2__ {int irqnum; } ;



int FUNC_0(struct irq_sim *VAR_0, unsigned int VAR_1)
{
 return VAR_0->irqs[VAR_1].irqnum;
}
