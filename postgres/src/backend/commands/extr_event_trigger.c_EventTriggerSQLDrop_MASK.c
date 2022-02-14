
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int in_sql_drop; int SQLDropList; } ;
typedef int Node ;
typedef int List ;
typedef int EventTriggerData ;


 int FUNC_0 () ;
 int VAR_0 ;
 int * FUNC_1 (int *,int ,char*,int *) ;
 int FUNC_2 (int *,int *) ;
 int VAR_1 ;
 int * VAR_2 ;
 int FUNC_3 () ;
 int FUNC_4 () ;
 int FUNC_5 () ;
 TYPE_1__* VAR_3 ;
 int FUNC_6 (int *) ;
 scalar_t__ FUNC_7 (int *) ;

void
FUNC_8(Node *VAR_4)
{
 List *VAR_5;
 EventTriggerData VAR_6;





 if (!VAR_1)
  return;
 if (!VAR_3 ||
  FUNC_7(&VAR_3->SQLDropList))
  return;

 VAR_5 = FUNC_1(VAR_4,
           VAR_0, "sql_drop",
           &VAR_6);







 if (VAR_5 == VAR_2)
  return;





 FUNC_0();
 VAR_3->in_sql_drop = 1;


 FUNC_5();
 {
  FUNC_2(VAR_5, &VAR_6);
 }
 FUNC_4();
 {
  VAR_3->in_sql_drop = 0;
 }
 FUNC_3();


 FUNC_6(VAR_5);
}
