
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int work; int pending; } ;
struct irq_sim {scalar_t__ irq_base; unsigned int irq_count; TYPE_1__ work_ctx; TYPE_2__* irqs; } ;
struct TYPE_6__ {int irqnum; int enabled; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (unsigned int,int ) ;
 int VAR_5 ;
 int FUNC_1 (int *,int ) ;
 scalar_t__ FUNC_2 (int,int ,unsigned int,int ) ;
 int FUNC_3 (int,unsigned int) ;
 int FUNC_4 (int,int,int ) ;
 int FUNC_5 (int,int *) ;
 int FUNC_6 (int,TYPE_2__*) ;
 int FUNC_7 (int,int *) ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_8 (TYPE_2__*) ;
 TYPE_2__* FUNC_9 (unsigned int,int,int ) ;

int FUNC_10(struct irq_sim *VAR_8, unsigned int VAR_9)
{
 int VAR_10;

 VAR_8->irqs = FUNC_9(VAR_9, sizeof(*VAR_8->irqs), VAR_1);
 if (!VAR_8->irqs)
  return -VAR_0;

 VAR_8->irq_base = FUNC_2(-1, 0, VAR_9, 0);
 if (VAR_8->irq_base < 0) {
  FUNC_8(VAR_8->irqs);
  return VAR_8->irq_base;
 }

 VAR_8->work_ctx.pending = FUNC_0(VAR_9, VAR_1);
 if (!VAR_8->work_ctx.pending) {
  FUNC_8(VAR_8->irqs);
  FUNC_3(VAR_8->irq_base, VAR_9);
  return -VAR_0;
 }

 for (VAR_10 = 0; VAR_10 < VAR_9; VAR_10++) {
  VAR_8->irqs[VAR_10].irqnum = VAR_8->irq_base + VAR_10;
  VAR_8->irqs[VAR_10].enabled = 0;
  FUNC_5(VAR_8->irq_base + VAR_10, &VAR_7);
  FUNC_6(VAR_8->irq_base + VAR_10, &VAR_8->irqs[VAR_10]);
  FUNC_7(VAR_8->irq_base + VAR_10, &VAR_5);
  FUNC_4(VAR_8->irq_base + VAR_10,
      VAR_4 | VAR_2, VAR_3);
 }

 FUNC_1(&VAR_8->work_ctx.work, VAR_6);
 VAR_8->irq_count = VAR_9;

 return VAR_8->irq_base;
}
