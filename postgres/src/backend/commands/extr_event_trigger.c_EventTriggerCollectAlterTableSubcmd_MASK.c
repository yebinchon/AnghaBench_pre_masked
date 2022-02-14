
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_7__ ;
typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_12__ {TYPE_3__* currentCommand; int cxt; scalar_t__ commandCollectionInhibited; } ;
struct TYPE_11__ {int parsetree; int address; } ;
struct TYPE_8__ {int subcmds; int objectId; } ;
struct TYPE_9__ {TYPE_1__ alterTable; } ;
struct TYPE_10__ {TYPE_2__ d; } ;
typedef int ObjectAddress ;
typedef int Node ;
typedef int MemoryContext ;
typedef TYPE_4__ CollectedATSubcmd ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int *,int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int *) ;
 TYPE_7__* VAR_1 ;
 int FUNC_5 (int ,TYPE_4__*) ;
 TYPE_4__* FUNC_6 (int) ;

void
FUNC_7(Node *VAR_2, ObjectAddress VAR_3)
{
 MemoryContext VAR_4;
 CollectedATSubcmd *VAR_5;


 if (!VAR_1 ||
  VAR_1->commandCollectionInhibited)
  return;

 FUNC_0(FUNC_1(VAR_2, VAR_0));
 FUNC_0(VAR_1->currentCommand != ((void*)0));
 FUNC_0(FUNC_3(VAR_1->currentCommand->d.alterTable.objectId));

 VAR_4 = FUNC_2(VAR_1->cxt);

 VAR_5 = FUNC_6(sizeof(CollectedATSubcmd));
 VAR_5->address = VAR_3;
 VAR_5->parsetree = FUNC_4(VAR_2);

 VAR_1->currentCommand->d.alterTable.subcmds =
  FUNC_5(VAR_1->currentCommand->d.alterTable.subcmds, VAR_5);

 FUNC_2(VAR_4);
}
