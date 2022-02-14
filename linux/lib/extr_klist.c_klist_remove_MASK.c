
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct klist_waiter {scalar_t__ woken; int list; int process; struct klist_node* node; } ;
struct klist_node {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int VAR_2 ;
 int FUNC_1 (struct klist_node*) ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_2 (int *,int *) ;
 int FUNC_3 () ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;

void FUNC_7(struct klist_node *VAR_5)
{
 struct klist_waiter VAR_6;

 VAR_6.node = VAR_5;
 VAR_6.process = VAR_2;
 VAR_6.woken = 0;
 FUNC_5(&VAR_3);
 FUNC_2(&VAR_6.list, &VAR_4);
 FUNC_6(&VAR_3);

 FUNC_1(VAR_5);

 for (;;) {
  FUNC_4(VAR_1);
  if (VAR_6.woken)
   break;
  FUNC_3();
 }
 FUNC_0(VAR_0);
}
