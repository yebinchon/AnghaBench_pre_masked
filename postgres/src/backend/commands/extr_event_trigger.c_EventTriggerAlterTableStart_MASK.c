
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_5__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_9__ {TYPE_3__* currentCommand; int cxt; scalar_t__ commandCollectionInhibited; } ;
struct TYPE_6__ {int subcmds; int objectId; int classId; } ;
struct TYPE_7__ {TYPE_1__ alterTable; } ;
struct TYPE_8__ {struct TYPE_8__* parent; int parsetree; TYPE_2__ d; int in_extension; int type; } ;
typedef int Node ;
typedef int MemoryContext ;
typedef TYPE_3__ CollectedCommand ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (int *) ;
 int VAR_4 ;
 TYPE_5__* VAR_5 ;
 TYPE_3__* FUNC_2 (int) ;

void
FUNC_3(Node *VAR_6)
{
 MemoryContext VAR_7;
 CollectedCommand *VAR_8;


 if (!VAR_5 ||
  VAR_5->commandCollectionInhibited)
  return;

 VAR_7 = FUNC_0(VAR_5->cxt);

 VAR_8 = FUNC_2(sizeof(CollectedCommand));

 VAR_8->type = VAR_3;
 VAR_8->in_extension = VAR_4;

 VAR_8->d.alterTable.classId = VAR_2;
 VAR_8->d.alterTable.objectId = VAR_0;
 VAR_8->d.alterTable.subcmds = VAR_1;
 VAR_8->parsetree = FUNC_1(VAR_6);

 VAR_8->parent = VAR_5->currentCommand;
 VAR_5->currentCommand = VAR_8;

 FUNC_0(VAR_7);
}
