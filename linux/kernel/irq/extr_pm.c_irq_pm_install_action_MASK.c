
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct irqaction {int flags; } ;
struct irq_desc {scalar_t__ nr_actions; scalar_t__ force_resume_depth; scalar_t__ no_suspend_depth; scalar_t__ cond_suspend_depth; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int) ;

void FUNC_1(struct irq_desc *VAR_3, struct irqaction *VAR_4)
{
 VAR_3->nr_actions++;

 if (VAR_4->flags & VAR_1)
  VAR_3->force_resume_depth++;

 FUNC_0(VAR_3->force_resume_depth &&
       VAR_3->force_resume_depth != VAR_3->nr_actions);

 if (VAR_4->flags & VAR_2)
  VAR_3->no_suspend_depth++;
 else if (VAR_4->flags & VAR_0)
  VAR_3->cond_suspend_depth++;

 FUNC_0(VAR_3->no_suspend_depth &&
       (VAR_3->no_suspend_depth +
   VAR_3->cond_suspend_depth) != VAR_3->nr_actions);
}
