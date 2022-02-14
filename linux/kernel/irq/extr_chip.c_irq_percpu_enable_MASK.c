
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {TYPE_1__* chip; } ;
struct irq_desc {int percpu_enabled; TYPE_2__ irq_data; } ;
struct TYPE_4__ {int (* irq_unmask ) (TYPE_2__*) ;int (* irq_enable ) (TYPE_2__*) ;} ;


 int FUNC_0 (unsigned int,int ) ;
 int FUNC_1 (TYPE_2__*) ;
 int FUNC_2 (TYPE_2__*) ;

void FUNC_3(struct irq_desc *VAR_0, unsigned int VAR_1)
{
 if (VAR_0->irq_data.chip->irq_enable)
  VAR_0->irq_data.chip->irq_enable(&VAR_0->irq_data);
 else
  VAR_0->irq_data.chip->irq_unmask(&VAR_0->irq_data);
 FUNC_0(VAR_1, VAR_0->percpu_enabled);
}
