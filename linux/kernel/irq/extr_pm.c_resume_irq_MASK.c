
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct irq_desc {int istate; int depth; int force_resume_depth; int irq_data; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct irq_desc*) ;
 int FUNC_1 (struct irq_desc*) ;
 int FUNC_2 (struct irq_desc*) ;
 int FUNC_3 (int *,int ) ;

__attribute__((used)) static void FUNC_4(struct irq_desc *VAR_2)
{
 FUNC_3(&VAR_2->irq_data, VAR_0);

 if (VAR_2->istate & VAR_1)
  goto resume;


 if (!VAR_2->force_resume_depth)
  return;


 VAR_2->depth++;
 FUNC_1(VAR_2);
 FUNC_2(VAR_2);
resume:
 VAR_2->istate &= ~VAR_1;
 FUNC_0(VAR_2);
}
