
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_26__ TYPE_9__ ;
typedef struct TYPE_25__ TYPE_8__ ;
typedef struct TYPE_24__ TYPE_7__ ;
typedef struct TYPE_23__ TYPE_6__ ;
typedef struct TYPE_22__ TYPE_5__ ;
typedef struct TYPE_21__ TYPE_4__ ;
typedef struct TYPE_20__ TYPE_3__ ;
typedef struct TYPE_19__ TYPE_2__ ;
typedef struct TYPE_18__ TYPE_1__ ;


struct TYPE_26__ {int out; scalar_t__ output_plugin_private; } ;
struct TYPE_25__ {int context; } ;
struct TYPE_18__ {int pubdelete; int pubupdate; int pubinsert; } ;
struct TYPE_24__ {TYPE_1__ pubactions; } ;
struct TYPE_21__ {TYPE_3__* oldtuple; TYPE_2__* newtuple; } ;
struct TYPE_22__ {TYPE_4__ tp; } ;
struct TYPE_23__ {int action; TYPE_5__ data; } ;
struct TYPE_20__ {int tuple; } ;
struct TYPE_19__ {int tuple; } ;
typedef int ReorderBufferTXN ;
typedef TYPE_6__ ReorderBufferChange ;
typedef TYPE_7__ RelationSyncEntry ;
typedef int Relation ;
typedef TYPE_8__ PGOutputData ;
typedef int MemoryContext ;
typedef TYPE_9__ LogicalDecodingContext ;
typedef int * HeapTuple ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (TYPE_9__*,int) ;
 int FUNC_4 (TYPE_9__*,int) ;



 int FUNC_5 (int ) ;
 int FUNC_6 (int ,char*) ;
 TYPE_7__* FUNC_7 (TYPE_8__*,int ) ;
 int FUNC_8 (int ) ;
 int FUNC_9 (int ,int ,int *) ;
 int FUNC_10 (int ,int ,int *) ;
 int FUNC_11 (int ,int ,int *,int *) ;
 int FUNC_12 (TYPE_9__*,int ,TYPE_7__*) ;

__attribute__((used)) static void
FUNC_13(LogicalDecodingContext *VAR_1, ReorderBufferTXN *VAR_2,
    Relation VAR_3, ReorderBufferChange *VAR_4)
{
 PGOutputData *VAR_5 = (PGOutputData *) VAR_1->output_plugin_private;
 MemoryContext VAR_6;
 RelationSyncEntry *VAR_7;

 if (!FUNC_8(VAR_3))
  return;

 VAR_7 = FUNC_7(VAR_5, FUNC_5(VAR_3));


 switch (VAR_4->action)
 {
  case 129:
   if (!VAR_7->pubactions.pubinsert)
    return;
   break;
  case 128:
   if (!VAR_7->pubactions.pubupdate)
    return;
   break;
  case 130:
   if (!VAR_7->pubactions.pubdelete)
    return;
   break;
  default:
   FUNC_0(0);
 }


 VAR_6 = FUNC_2(VAR_5->context);

 FUNC_12(VAR_1, VAR_3, VAR_7);


 switch (VAR_4->action)
 {
  case 129:
   FUNC_3(VAR_1, 1);
   FUNC_10(VAR_1->out, VAR_3,
         &VAR_4->data.tp.newtuple->tuple);
   FUNC_4(VAR_1, 1);
   break;
  case 128:
   {
    HeapTuple VAR_8 = VAR_4->data.tp.oldtuple ?
    &VAR_4->data.tp.oldtuple->tuple : ((void*)0);

    FUNC_3(VAR_1, 1);
    FUNC_11(VAR_1->out, VAR_3, VAR_8,
          &VAR_4->data.tp.newtuple->tuple);
    FUNC_4(VAR_1, 1);
    break;
   }
  case 130:
   if (VAR_4->data.tp.oldtuple)
   {
    FUNC_3(VAR_1, 1);
    FUNC_9(VAR_1->out, VAR_3,
          &VAR_4->data.tp.oldtuple->tuple);
    FUNC_4(VAR_1, 1);
   }
   else
    FUNC_6(VAR_0, "didn't send DELETE change because of missing oldtuple");
   break;
  default:
   FUNC_0(0);
 }


 FUNC_2(VAR_6);
 FUNC_1(VAR_5->context);
}
