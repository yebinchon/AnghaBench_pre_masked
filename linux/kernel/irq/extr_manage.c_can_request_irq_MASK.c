
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct irq_desc {TYPE_1__* action; } ;
struct TYPE_2__ {unsigned long flags; } ;


 unsigned long VAR_0 ;
 struct irq_desc* FUNC_0 (unsigned int,unsigned long*,int ) ;
 int FUNC_1 (struct irq_desc*,unsigned long) ;
 scalar_t__ FUNC_2 (struct irq_desc*) ;

int FUNC_3(unsigned int VAR_1, unsigned long VAR_2)
{
 unsigned long VAR_3;
 struct irq_desc *VAR_4 = FUNC_0(VAR_1, &VAR_3, 0);
 int VAR_5 = 0;

 if (!VAR_4)
  return 0;

 if (FUNC_2(VAR_4)) {
  if (!VAR_4->action ||
      VAR_2 & VAR_4->action->flags & VAR_0)
   VAR_5 = 1;
 }
 FUNC_1(VAR_4, VAR_3);
 return VAR_5;
}
