
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct irq_work {int flags; } ;


 int VAR_0 ;
 int FUNC_0 () ;
 int FUNC_1 () ;

void FUNC_2(struct irq_work *VAR_1)
{
 FUNC_1();

 while (VAR_1->flags & VAR_0)
  FUNC_0();
}
