
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct irq_desc {int threads_oneshot; int irq_data; } ;


 int FUNC_0 (int *) ;
 scalar_t__ FUNC_1 (int *) ;
 int FUNC_2 (struct irq_desc*) ;

__attribute__((used)) static void FUNC_3(struct irq_desc *VAR_0)
{







 if (!FUNC_0(&VAR_0->irq_data) &&
     FUNC_1(&VAR_0->irq_data) && !VAR_0->threads_oneshot)
  FUNC_2(VAR_0);
}
