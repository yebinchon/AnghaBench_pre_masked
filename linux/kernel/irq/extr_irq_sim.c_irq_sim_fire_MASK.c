
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int work; int pending; } ;
struct irq_sim {TYPE_2__ work_ctx; TYPE_1__* irqs; } ;
struct TYPE_3__ {scalar_t__ enabled; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (unsigned int,int ) ;

void FUNC_2(struct irq_sim *VAR_0, unsigned int VAR_1)
{
 if (VAR_0->irqs[VAR_1].enabled) {
  FUNC_1(VAR_1, VAR_0->work_ctx.pending);
  FUNC_0(&VAR_0->work_ctx.work);
 }
}
