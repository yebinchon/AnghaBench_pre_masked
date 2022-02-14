
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct irq_desc {int istate; } ;


 int VAR_0 ;
 int FUNC_0 (struct irq_desc*) ;

__attribute__((used)) static bool FUNC_1(struct irq_desc *VAR_1)
{
 if (!(VAR_1->istate & VAR_0))
  return 0;
 return FUNC_0(VAR_1);
}
