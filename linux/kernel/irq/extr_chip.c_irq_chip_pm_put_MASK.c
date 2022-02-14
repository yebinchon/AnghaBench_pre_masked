
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct irq_data {TYPE_1__* chip; } ;
struct TYPE_2__ {scalar_t__ parent_device; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (scalar_t__) ;

int FUNC_2(struct irq_data *VAR_1)
{
 int VAR_2 = 0;

 if (FUNC_0(VAR_0) && VAR_1->chip->parent_device)
  VAR_2 = FUNC_1(VAR_1->chip->parent_device);

 return (VAR_2 < 0) ? VAR_2 : 0;
}
