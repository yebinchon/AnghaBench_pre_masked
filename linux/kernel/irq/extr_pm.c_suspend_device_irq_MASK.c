
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct irq_desc {int istate; int irq_data; scalar_t__ no_suspend_depth; int action; } ;
struct TYPE_2__ {int flags; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct irq_desc*) ;
 TYPE_1__* FUNC_1 (struct irq_desc*) ;
 scalar_t__ FUNC_2 (struct irq_desc*) ;
 scalar_t__ FUNC_3 (int *) ;
 int FUNC_4 (int *,int ) ;
 int FUNC_5 (struct irq_desc*) ;

__attribute__((used)) static bool FUNC_6(struct irq_desc *VAR_3)
{
 if (!VAR_3->action || FUNC_2(VAR_3) ||
     VAR_3->no_suspend_depth)
  return 0;

 if (FUNC_3(&VAR_3->irq_data)) {
  FUNC_4(&VAR_3->irq_data, VAR_1);






  return 1;
 }

 VAR_3->istate |= VAR_2;
 FUNC_0(VAR_3);







 if (FUNC_1(VAR_3)->flags & VAR_0)
  FUNC_5(VAR_3);
 return 1;
}
