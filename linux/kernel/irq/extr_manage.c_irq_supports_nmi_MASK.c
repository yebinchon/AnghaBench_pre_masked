
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct irq_desc {int dummy; } ;
struct irq_data {TYPE_1__* chip; scalar_t__ parent_data; } ;
struct TYPE_2__ {int flags; scalar_t__ irq_bus_sync_unlock; scalar_t__ irq_bus_lock; } ;


 int VAR_0 ;
 struct irq_data* FUNC_0 (struct irq_desc*) ;

__attribute__((used)) static bool FUNC_1(struct irq_desc *VAR_1)
{
 struct irq_data *VAR_2 = FUNC_0(VAR_1);







 if (VAR_2->chip->irq_bus_lock || VAR_2->chip->irq_bus_sync_unlock)
  return 0;

 return VAR_2->chip->flags & VAR_0;
}
