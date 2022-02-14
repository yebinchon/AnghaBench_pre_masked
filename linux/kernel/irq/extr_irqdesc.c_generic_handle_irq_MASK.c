
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct irq_desc {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct irq_desc*) ;
 struct irq_desc* FUNC_1 (unsigned int) ;

int FUNC_2(unsigned int VAR_1)
{
 struct irq_desc *VAR_2 = FUNC_1(VAR_1);

 if (!VAR_2)
  return -VAR_0;
 FUNC_0(VAR_2);
 return 0;
}
