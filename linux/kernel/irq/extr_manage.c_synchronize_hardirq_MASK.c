
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct irq_desc {int threads_active; } ;


 int FUNC_0 (struct irq_desc*,int) ;
 int FUNC_1 (int *) ;
 struct irq_desc* FUNC_2 (unsigned int) ;

bool FUNC_3(unsigned int VAR_0)
{
 struct irq_desc *VAR_1 = FUNC_2(VAR_0);

 if (VAR_1) {
  FUNC_0(VAR_1, 0);
  return !FUNC_1(&VAR_1->threads_active);
 }

 return 1;
}
