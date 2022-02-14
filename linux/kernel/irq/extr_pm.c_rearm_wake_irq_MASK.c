
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct irq_desc {int istate; int irq_data; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct irq_desc*) ;
 struct irq_desc* FUNC_1 (unsigned int,unsigned long*,int ) ;
 int FUNC_2 (struct irq_desc*,unsigned long) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *,int ) ;

void FUNC_5(unsigned int VAR_3)
{
 unsigned long VAR_4;
 struct irq_desc *VAR_5 = FUNC_1(VAR_3, &VAR_4, VAR_2);

 if (!VAR_5 || !(VAR_5->istate & VAR_1) ||
     !FUNC_3(&VAR_5->irq_data))
  return;

 VAR_5->istate &= ~VAR_1;
 FUNC_4(&VAR_5->irq_data, VAR_0);
 FUNC_0(VAR_5);

 FUNC_2(VAR_5, VAR_4);
}
