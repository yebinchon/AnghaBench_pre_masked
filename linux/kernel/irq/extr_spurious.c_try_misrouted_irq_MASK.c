
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct irqaction {int flags; } ;
struct irq_desc {struct irqaction* action; } ;
typedef scalar_t__ irqreturn_t ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 () ;
 int VAR_2 ;

__attribute__((used)) static inline int
FUNC_1(unsigned int VAR_3, struct irq_desc *VAR_4,
    irqreturn_t VAR_5)
{
 struct irqaction *VAR_6;

 if (!VAR_2)
  return 0;


 if (VAR_5 == VAR_1)
  return 1;






 if (VAR_2 < 2)
  return 0;

 if (!VAR_3)
  return 1;







 VAR_6 = VAR_4->action;
 FUNC_0();
 return VAR_6 && (VAR_6->flags & VAR_0);
}
