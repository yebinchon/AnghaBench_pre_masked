
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int pending; int work; } ;
struct irq_sim {int irqs; int irq_count; int irq_base; TYPE_1__ work_ctx; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int ) ;

void FUNC_4(struct irq_sim *VAR_0)
{
 FUNC_2(&VAR_0->work_ctx.work);
 FUNC_0(VAR_0->work_ctx.pending);
 FUNC_1(VAR_0->irq_base, VAR_0->irq_count);
 FUNC_3(VAR_0->irqs);
}
