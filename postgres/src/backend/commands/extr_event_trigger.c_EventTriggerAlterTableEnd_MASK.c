
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_6__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_10__ {TYPE_3__* currentCommand; int commandList; scalar_t__ commandCollectionInhibited; } ;
struct TYPE_7__ {int subcmds; } ;
struct TYPE_8__ {TYPE_1__ alterTable; } ;
struct TYPE_9__ {TYPE_2__ d; struct TYPE_9__* parent; } ;
typedef TYPE_3__ CollectedCommand ;


 TYPE_6__* VAR_0 ;
 int FUNC_0 (int ,TYPE_3__*) ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (TYPE_3__*) ;

void
FUNC_3(void)
{
 CollectedCommand *VAR_1;


 if (!VAR_0 ||
  VAR_0->commandCollectionInhibited)
  return;

 VAR_1 = VAR_0->currentCommand->parent;


 if (FUNC_1(VAR_0->currentCommand->d.alterTable.subcmds) != 0)
 {
  VAR_0->commandList =
   FUNC_0(VAR_0->commandList,
     VAR_0->currentCommand);
 }
 else
  FUNC_2(VAR_0->currentCommand);

 VAR_0->currentCommand = VAR_1;
}
