
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_16__ TYPE_8__ ;
typedef struct TYPE_15__ TYPE_5__ ;
typedef struct TYPE_14__ TYPE_4__ ;
typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


struct TYPE_16__ {int commandList; int cxt; scalar_t__ commandCollectionInhibited; } ;
struct TYPE_15__ {TYPE_3__* action; } ;
struct TYPE_11__ {int objtype; } ;
struct TYPE_12__ {TYPE_1__ defprivs; } ;
struct TYPE_14__ {int * parsetree; int in_extension; TYPE_2__ d; int type; } ;
struct TYPE_13__ {int objtype; } ;
typedef int Node ;
typedef int MemoryContext ;
typedef TYPE_4__ CollectedCommand ;
typedef TYPE_5__ AlterDefaultPrivilegesStmt ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 scalar_t__ FUNC_1 (TYPE_5__*) ;
 int VAR_1 ;
 TYPE_8__* VAR_2 ;
 int FUNC_2 (int ,TYPE_4__*) ;
 TYPE_4__* FUNC_3 (int) ;

void
FUNC_4(AlterDefaultPrivilegesStmt *VAR_3)
{
 MemoryContext VAR_4;
 CollectedCommand *VAR_5;


 if (!VAR_2 ||
  VAR_2->commandCollectionInhibited)
  return;

 VAR_4 = FUNC_0(VAR_2->cxt);

 VAR_5 = FUNC_3(sizeof(CollectedCommand));
 VAR_5->type = VAR_0;
 VAR_5->d.defprivs.objtype = VAR_3->action->objtype;
 VAR_5->in_extension = VAR_1;
 VAR_5->parsetree = (Node *) FUNC_1(VAR_3);

 VAR_2->commandList =
  FUNC_2(VAR_2->commandList, VAR_5);
 FUNC_0(VAR_4);
}
