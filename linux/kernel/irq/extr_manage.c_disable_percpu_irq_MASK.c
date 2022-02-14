
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct irq_desc {int dummy; } ;


 int VAR_0 ;
 struct irq_desc* FUNC_0 (unsigned int,unsigned long*,int ) ;
 int FUNC_1 (struct irq_desc*,unsigned int) ;
 int FUNC_2 (struct irq_desc*,unsigned long) ;
 unsigned int FUNC_3 () ;

void FUNC_4(unsigned int VAR_1)
{
 unsigned int VAR_2 = FUNC_3();
 unsigned long VAR_3;
 struct irq_desc *VAR_4 = FUNC_0(VAR_1, &VAR_3, VAR_0);

 if (!VAR_4)
  return;

 FUNC_1(VAR_4, VAR_2);
 FUNC_2(VAR_4, VAR_3);
}
