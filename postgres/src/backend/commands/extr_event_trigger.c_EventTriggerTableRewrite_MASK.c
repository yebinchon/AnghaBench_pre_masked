
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int table_rewrite_reason; int table_rewrite_oid; } ;
typedef int Oid ;
typedef int Node ;
typedef int List ;
typedef int EventTriggerData ;


 int FUNC_0 () ;
 int VAR_0 ;
 int * FUNC_1 (int *,int ,char*,int *) ;
 int FUNC_2 (int *,int *) ;
 int VAR_1 ;
 int VAR_2 ;
 int * VAR_3 ;
 int FUNC_3 () ;
 int FUNC_4 () ;
 int FUNC_5 () ;
 TYPE_1__* VAR_4 ;
 int FUNC_6 (int *) ;

void
FUNC_7(Node *VAR_5, Oid VAR_6, int VAR_7)
{
 List *VAR_8;
 EventTriggerData VAR_9;
 if (!VAR_2)
  return;
 if (!VAR_4)
  return;

 VAR_8 = FUNC_1(VAR_5,
           VAR_0,
           "table_rewrite",
           &VAR_9);
 if (VAR_8 == VAR_3)
  return;
 VAR_4->table_rewrite_oid = VAR_6;
 VAR_4->table_rewrite_reason = VAR_7;


 FUNC_5();
 {
  FUNC_2(VAR_8, &VAR_9);
 }
 FUNC_4();
 {
  VAR_4->table_rewrite_oid = VAR_1;
  VAR_4->table_rewrite_reason = 0;
 }
 FUNC_3();


 FUNC_6(VAR_8);





 FUNC_0();
}
