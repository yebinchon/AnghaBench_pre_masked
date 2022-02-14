
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct irq_desc {int istate; int irq_data; int threads_oneshot; } ;
struct irq_chip {int flags; int (* irq_eoi ) (int *) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;
 scalar_t__ FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (struct irq_desc*) ;

__attribute__((used)) static void FUNC_6(struct irq_desc *VAR_2, struct irq_chip *VAR_3)
{
 if (!(VAR_2->istate & VAR_1)) {
  VAR_3->irq_eoi(&VAR_2->irq_data);
  return;
 }






 if (!FUNC_0(&VAR_2->irq_data) &&
     FUNC_1(&VAR_2->irq_data) && !VAR_2->threads_oneshot) {
  VAR_3->irq_eoi(&VAR_2->irq_data);
  FUNC_5(VAR_2);
 } else if (!(VAR_3->flags & VAR_0)) {
  VAR_3->irq_eoi(&VAR_2->irq_data);
 }
}
