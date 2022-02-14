
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_8__ {int tts_tid; int tts_tableOid; } ;
typedef TYPE_1__ TupleTableSlot ;
struct TYPE_9__ {int t_self; int t_tableOid; } ;
typedef int Relation ;
typedef TYPE_2__* HeapTuple ;
typedef int CommandId ;
typedef int BulkInsertState ;


 TYPE_2__* FUNC_0 (TYPE_1__*,int,int*) ;
 int FUNC_1 (int *,int *) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ,TYPE_2__*,int ,int,int ) ;
 int FUNC_4 (TYPE_2__*) ;

__attribute__((used)) static void
FUNC_5(Relation VAR_0, TupleTableSlot *VAR_1, CommandId VAR_2,
     int VAR_3, BulkInsertState VAR_4)
{
 bool VAR_5 = 1;
 HeapTuple VAR_6 = FUNC_0(VAR_1, 1, &VAR_5);


 VAR_1->tts_tableOid = FUNC_2(VAR_0);
 VAR_6->t_tableOid = VAR_1->tts_tableOid;


 FUNC_3(VAR_0, VAR_6, VAR_2, VAR_3, VAR_4);
 FUNC_1(&VAR_6->t_self, &VAR_1->tts_tid);

 if (VAR_5)
  FUNC_4(VAR_6);
}
