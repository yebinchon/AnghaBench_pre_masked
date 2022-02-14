
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef int uint32 ;
struct TYPE_8__ {int tts_tid; int tts_tableOid; } ;
typedef TYPE_1__ TupleTableSlot ;
struct TYPE_9__ {int t_self; int t_data; int t_tableOid; } ;
typedef int Relation ;
typedef TYPE_2__* HeapTuple ;
typedef int CommandId ;
typedef int BulkInsertState ;


 TYPE_2__* FUNC_0 (TYPE_1__*,int,int*) ;
 int VAR_0 ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (int *,int *) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ,TYPE_2__*,int ,int,int ) ;
 int FUNC_5 (TYPE_2__*) ;

__attribute__((used)) static void
FUNC_6(Relation VAR_1, TupleTableSlot *VAR_2,
        CommandId VAR_3, int VAR_4,
        BulkInsertState VAR_5, uint32 VAR_6)
{
 bool VAR_7 = 1;
 HeapTuple VAR_8 = FUNC_0(VAR_2, 1, &VAR_7);


 VAR_2->tts_tableOid = FUNC_3(VAR_1);
 VAR_8->t_tableOid = VAR_2->tts_tableOid;

 FUNC_1(VAR_8->t_data, VAR_6);
 VAR_4 |= VAR_0;


 FUNC_4(VAR_1, VAR_8, VAR_3, VAR_4, VAR_5);
 FUNC_2(&VAR_8->t_self, &VAR_2->tts_tid);

 if (VAR_7)
  FUNC_5(VAR_8);
}
