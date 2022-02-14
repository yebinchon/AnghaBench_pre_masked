
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_6__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_10__ {int commandList; int cxt; scalar_t__ commandCollectionInhibited; } ;
struct TYPE_7__ {void* secondaryObject; void* address; } ;
struct TYPE_8__ {TYPE_1__ simple; } ;
struct TYPE_9__ {int parsetree; TYPE_2__ d; int in_extension; int type; } ;
typedef void* ObjectAddress ;
typedef int Node ;
typedef int MemoryContext ;
typedef TYPE_3__ CollectedCommand ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int FUNC_1 (int *) ;
 int VAR_1 ;
 TYPE_6__* VAR_2 ;
 int FUNC_2 (int ,TYPE_3__*) ;
 TYPE_3__* FUNC_3 (int) ;

void
FUNC_4(ObjectAddress VAR_3,
         ObjectAddress VAR_4,
         Node *VAR_5)
{
 MemoryContext VAR_6;
 CollectedCommand *VAR_7;


 if (!VAR_2 ||
  VAR_2->commandCollectionInhibited)
  return;

 VAR_6 = FUNC_0(VAR_2->cxt);

 VAR_7 = FUNC_3(sizeof(CollectedCommand));

 VAR_7->type = VAR_0;
 VAR_7->in_extension = VAR_1;

 VAR_7->d.simple.address = VAR_3;
 VAR_7->d.simple.secondaryObject = VAR_4;
 VAR_7->parsetree = FUNC_1(VAR_5);

 VAR_2->commandList = FUNC_2(VAR_2->commandList,
             VAR_7);

 FUNC_0(VAR_6);
}
