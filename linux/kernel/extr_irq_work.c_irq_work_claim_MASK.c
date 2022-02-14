
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct irq_work {unsigned long flags; } ;


 unsigned long VAR_0 ;
 unsigned long VAR_1 ;
 unsigned long FUNC_0 (unsigned long*,unsigned long,unsigned long) ;
 int FUNC_1 () ;

__attribute__((used)) static bool FUNC_2(struct irq_work *VAR_2)
{
 unsigned long VAR_3, VAR_4, VAR_5;





 VAR_3 = VAR_2->flags & ~VAR_1;
 for (;;) {
  VAR_5 = VAR_3 | VAR_0;
  VAR_4 = FUNC_0(&VAR_2->flags, VAR_3, VAR_5);
  if (VAR_4 == VAR_3)
   break;
  if (VAR_4 & VAR_1)
   return 0;
  VAR_3 = VAR_4;
  FUNC_1();
 }

 return 1;
}
