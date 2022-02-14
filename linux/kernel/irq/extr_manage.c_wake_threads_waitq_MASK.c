
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct irq_desc {int wait_for_threads; int threads_active; } ;


 scalar_t__ FUNC_0 (int *) ;
 int FUNC_1 (int *) ;

__attribute__((used)) static void FUNC_2(struct irq_desc *VAR_0)
{
 if (FUNC_0(&VAR_0->threads_active))
  FUNC_1(&VAR_0->wait_for_threads);
}
