
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {TYPE_1__* chip; } ;
struct irq_desc {TYPE_2__ irq_data; } ;
struct TYPE_4__ {int (* irq_bus_sync_unlock ) (TYPE_2__*) ;} ;


 int FUNC_0 (TYPE_2__*) ;
 scalar_t__ FUNC_1 (int (*) (TYPE_2__*)) ;

__attribute__((used)) static inline void FUNC_2(struct irq_desc *VAR_0)
{
 if (FUNC_1(VAR_0->irq_data.chip->irq_bus_sync_unlock))
  VAR_0->irq_data.chip->irq_bus_sync_unlock(&VAR_0->irq_data);
}
