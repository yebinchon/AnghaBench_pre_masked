
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {scalar_t__ curCmd; } ;
struct TYPE_7__ {struct TYPE_7__* savedPassword; struct TYPE_7__* currTableAm; struct TYPE_7__* currTablespace; struct TYPE_7__* currSchema; struct TYPE_7__* currUser; TYPE_1__ sqlparse; int (* DeClonePtr ) (TYPE_2__*) ;int * connection; } ;
typedef TYPE_2__ ArchiveHandle ;


 int FUNC_0 (int ) ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (TYPE_2__*) ;
 int FUNC_3 (TYPE_2__*) ;

void
FUNC_4(ArchiveHandle *VAR_0)
{

 FUNC_0(VAR_0->connection == ((void*)0));


 VAR_0->DeClonePtr(VAR_0);


 if (VAR_0->sqlparse.curCmd)
  FUNC_1(VAR_0->sqlparse.curCmd);


 if (VAR_0->currUser)
  FUNC_2(VAR_0->currUser);
 if (VAR_0->currSchema)
  FUNC_2(VAR_0->currSchema);
 if (VAR_0->currTablespace)
  FUNC_2(VAR_0->currTablespace);
 if (VAR_0->currTableAm)
  FUNC_2(VAR_0->currTableAm);
 if (VAR_0->savedPassword)
  FUNC_2(VAR_0->savedPassword);

 FUNC_2(VAR_0);
}
