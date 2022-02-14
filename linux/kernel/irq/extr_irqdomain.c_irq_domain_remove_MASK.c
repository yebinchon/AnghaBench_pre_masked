
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct irq_domain {int flags; struct irq_domain* name; int link; int revmap_tree; } ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (struct irq_domain*) ;
 struct irq_domain* VAR_1 ;
 int FUNC_2 (struct irq_domain*) ;
 int VAR_2 ;
 int FUNC_3 (int *) ;
 int FUNC_4 (struct irq_domain*) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int ) ;
 int FUNC_9 (char*,struct irq_domain*) ;
 int FUNC_10 (int *) ;
 scalar_t__ FUNC_11 (int) ;

void FUNC_12(struct irq_domain *VAR_3)
{
 FUNC_6(&VAR_2);
 FUNC_1(VAR_3);

 FUNC_0(!FUNC_10(&VAR_3->revmap_tree));

 FUNC_5(&VAR_3->link);




 if (FUNC_11(VAR_1 == VAR_3))
  FUNC_3(((void*)0));

 FUNC_7(&VAR_2);

 FUNC_9("Removed domain %s\n", VAR_3->name);

 FUNC_8(FUNC_2(VAR_3));
 if (VAR_3->flags & VAR_0)
  FUNC_4(VAR_3->name);
 FUNC_4(VAR_3);
}
