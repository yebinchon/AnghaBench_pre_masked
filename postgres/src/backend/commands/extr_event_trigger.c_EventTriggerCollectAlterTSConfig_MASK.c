
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_6__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_10__ {int commandList; int cxt; scalar_t__ commandCollectionInhibited; } ;
struct TYPE_7__ {int ndicts; int dictIds; int address; } ;
struct TYPE_8__ {TYPE_1__ atscfg; } ;
struct TYPE_9__ {int * parsetree; TYPE_2__ d; int in_extension; int type; } ;
typedef int Oid ;
typedef int Node ;
typedef int MemoryContext ;
typedef TYPE_3__ CollectedCommand ;
typedef int AlterTSConfigurationStmt ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ,int ,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_2 (int *) ;
 int VAR_2 ;
 TYPE_6__* VAR_3 ;
 int FUNC_3 (int ,TYPE_3__*) ;
 int FUNC_4 (int ,int *,int) ;
 int FUNC_5 (int) ;
 TYPE_3__* FUNC_6 (int) ;

void
FUNC_7(AlterTSConfigurationStmt *VAR_4, Oid VAR_5,
         Oid *VAR_6, int VAR_7)
{
 MemoryContext VAR_8;
 CollectedCommand *VAR_9;


 if (!VAR_3 ||
  VAR_3->commandCollectionInhibited)
  return;

 VAR_8 = FUNC_0(VAR_3->cxt);

 VAR_9 = FUNC_6(sizeof(CollectedCommand));
 VAR_9->type = VAR_0;
 VAR_9->in_extension = VAR_2;
 FUNC_1(VAR_9->d.atscfg.address,
      VAR_1, VAR_5);
 VAR_9->d.atscfg.dictIds = FUNC_5(sizeof(Oid) * VAR_7);
 FUNC_4(VAR_9->d.atscfg.dictIds, VAR_6, sizeof(Oid) * VAR_7);
 VAR_9->d.atscfg.ndicts = VAR_7;
 VAR_9->parsetree = (Node *) FUNC_2(VAR_4);

 VAR_3->commandList =
  FUNC_3(VAR_3->commandList, VAR_9);

 FUNC_0(VAR_8);
}
