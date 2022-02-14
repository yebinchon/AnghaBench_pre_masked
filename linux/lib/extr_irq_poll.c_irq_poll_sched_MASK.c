
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct irq_poll {int list; int state; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int *,int ) ;
 int FUNC_1 (unsigned long) ;
 int FUNC_2 (unsigned long) ;
 int FUNC_3 (int ) ;
 scalar_t__ FUNC_4 (int ,int *) ;
 scalar_t__ FUNC_5 (int ,int *) ;
 int FUNC_6 (int *) ;

void FUNC_7(struct irq_poll *VAR_4)
{
 unsigned long VAR_5;

 if (FUNC_5(VAR_0, &VAR_4->state))
  return;
 if (FUNC_4(VAR_1, &VAR_4->state))
  return;

 FUNC_2(VAR_5);
 FUNC_0(&VAR_4->list, FUNC_6(&VAR_3));
 FUNC_3(VAR_2);
 FUNC_1(VAR_5);
}
