
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {TYPE_1__* chip; } ;
struct irq_desc {TYPE_2__ irq_data; } ;
struct TYPE_4__ {int (* irq_disable ) (TYPE_2__*) ;} ;


 int FUNC_0 (struct irq_desc*) ;
 int FUNC_1 (struct irq_desc*) ;
 scalar_t__ FUNC_2 (TYPE_2__*) ;
 int FUNC_3 (struct irq_desc*) ;
 int FUNC_4 (TYPE_2__*) ;

__attribute__((used)) static void FUNC_5(struct irq_desc *VAR_0, bool VAR_1)
{
 if (FUNC_2(&VAR_0->irq_data)) {
  if (VAR_1)
   FUNC_3(VAR_0);
 } else {
  FUNC_0(VAR_0);
  if (VAR_0->irq_data.chip->irq_disable) {
   VAR_0->irq_data.chip->irq_disable(&VAR_0->irq_data);
   FUNC_1(VAR_0);
  } else if (VAR_1) {
   FUNC_3(VAR_0);
  }
 }
}
