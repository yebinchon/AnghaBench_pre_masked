
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {TYPE_1__* chip; } ;
struct irq_desc {TYPE_2__ irq_data; } ;
struct TYPE_4__ {int (* irq_ack ) (TYPE_2__*) ;int (* irq_mask_ack ) (TYPE_2__*) ;} ;


 int FUNC_0 (struct irq_desc*) ;
 int FUNC_1 (struct irq_desc*) ;
 int FUNC_2 (TYPE_2__*) ;
 int FUNC_3 (TYPE_2__*) ;

__attribute__((used)) static inline void FUNC_4(struct irq_desc *VAR_0)
{
 if (VAR_0->irq_data.chip->irq_mask_ack) {
  VAR_0->irq_data.chip->irq_mask_ack(&VAR_0->irq_data);
  FUNC_0(VAR_0);
 } else {
  FUNC_1(VAR_0);
  if (VAR_0->irq_data.chip->irq_ack)
   VAR_0->irq_data.chip->irq_ack(&VAR_0->irq_data);
 }
}
