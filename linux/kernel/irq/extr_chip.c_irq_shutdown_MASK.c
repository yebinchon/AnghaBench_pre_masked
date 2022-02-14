
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {TYPE_1__* chip; } ;
struct irq_desc {int depth; TYPE_2__ irq_data; } ;
struct TYPE_4__ {int (* irq_shutdown ) (TYPE_2__*) ;} ;


 int FUNC_0 (struct irq_desc*,int) ;
 int FUNC_1 (struct irq_desc*) ;
 int FUNC_2 (struct irq_desc*) ;
 int FUNC_3 (struct irq_desc*) ;
 scalar_t__ FUNC_4 (TYPE_2__*) ;
 int FUNC_5 (TYPE_2__*) ;

void FUNC_6(struct irq_desc *VAR_0)
{
 if (FUNC_4(&VAR_0->irq_data)) {
  VAR_0->depth = 1;
  if (VAR_0->irq_data.chip->irq_shutdown) {
   VAR_0->irq_data.chip->irq_shutdown(&VAR_0->irq_data);
   FUNC_2(VAR_0);
   FUNC_3(VAR_0);
  } else {
   FUNC_0(VAR_0, 1);
  }
  FUNC_1(VAR_0);
 }
}
