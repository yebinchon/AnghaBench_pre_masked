
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int in_sql_drop; int commandCollectionInhibited; struct TYPE_4__* previous; int commandList; int * currentCommand; int table_rewrite_oid; int SQLDropList; int cxt; } ;
typedef int MemoryContext ;
typedef TYPE_1__ EventTriggerQueryState ;


 int VAR_0 ;
 int FUNC_0 (int ,char*,int ) ;
 int VAR_1 ;
 TYPE_1__* FUNC_1 (int ,int) ;
 int VAR_2 ;
 int VAR_3 ;
 TYPE_1__* VAR_4 ;
 int FUNC_2 (int *) ;
 int FUNC_3 () ;

bool
FUNC_4(void)
{
 EventTriggerQueryState *VAR_5;
 MemoryContext VAR_6;






 if (!FUNC_3())
  return 0;

 VAR_6 = FUNC_0(VAR_3,
        "event trigger state",
        VAR_0);
 VAR_5 = FUNC_1(VAR_6, sizeof(EventTriggerQueryState));
 VAR_5->cxt = VAR_6;
 FUNC_2(&(VAR_5->SQLDropList));
 VAR_5->in_sql_drop = 0;
 VAR_5->table_rewrite_oid = VAR_1;

 VAR_5->commandCollectionInhibited = VAR_4 ?
  VAR_4->commandCollectionInhibited : 0;
 VAR_5->currentCommand = ((void*)0);
 VAR_5->commandList = VAR_2;
 VAR_5->previous = VAR_4;
 VAR_4 = VAR_5;

 return 1;
}
