
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct irq_desc {int istate; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int) ;
 struct irq_desc* FUNC_1 (unsigned int,unsigned long*,int ) ;
 int FUNC_2 (struct irq_desc*) ;
 int FUNC_3 (struct irq_desc*,unsigned long) ;
 int FUNC_4 () ;

void FUNC_5(unsigned int VAR_2)
{
 unsigned long VAR_3;
 struct irq_desc *VAR_4;

 FUNC_0(FUNC_4());

 VAR_4 = FUNC_1(VAR_2, &VAR_3,
     VAR_1);
 if (!VAR_4)
  return;

 if (FUNC_0(!(VAR_4->istate & VAR_0)))
  goto out;

 FUNC_2(VAR_4);
out:
 FUNC_3(VAR_4, VAR_3);
}
