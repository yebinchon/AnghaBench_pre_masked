
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct irq_desc {int threads_active; int wait_for_threads; } ;


 int FUNC_0 (struct irq_desc*,int) ;
 int FUNC_1 (int *) ;
 struct irq_desc* FUNC_2 (unsigned int) ;
 int FUNC_3 (int ,int) ;

void FUNC_4(unsigned int VAR_0)
{
 struct irq_desc *VAR_1 = FUNC_2(VAR_0);

 if (VAR_1) {
  FUNC_0(VAR_1, 1);





  FUNC_3(VAR_1->wait_for_threads,
      !FUNC_1(&VAR_1->threads_active));
 }
}
