
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct irqaction {int flags; } ;
struct irq_desc {int cond_suspend_depth; int no_suspend_depth; int force_resume_depth; int nr_actions; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;

void FUNC_0(struct irq_desc *VAR_3, struct irqaction *VAR_4)
{
 VAR_3->nr_actions--;

 if (VAR_4->flags & VAR_1)
  VAR_3->force_resume_depth--;

 if (VAR_4->flags & VAR_2)
  VAR_3->no_suspend_depth--;
 else if (VAR_4->flags & VAR_0)
  VAR_3->cond_suspend_depth--;
}
