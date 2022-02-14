
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_9__ {int tts_tid; int tts_tableOid; } ;
typedef TYPE_1__ TupleTableSlot ;
struct TYPE_10__ {int t_self; int t_tableOid; } ;
typedef scalar_t__ TM_Result ;
typedef int TM_FailureData ;
typedef int Snapshot ;
typedef int Relation ;
typedef int LockTupleMode ;
typedef int ItemPointer ;
typedef TYPE_2__* HeapTuple ;
typedef int CommandId ;


 TYPE_2__* FUNC_0 (TYPE_1__*,int,int*) ;
 int FUNC_1 (TYPE_2__*) ;
 int FUNC_2 (int *,int *) ;
 int FUNC_3 (int ) ;
 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_4 (int ,int ,TYPE_2__*,int ,int ,int,int *,int *) ;
 int FUNC_5 (TYPE_2__*) ;

__attribute__((used)) static TM_Result
FUNC_6(Relation VAR_1, ItemPointer VAR_2, TupleTableSlot *VAR_3,
     CommandId VAR_4, Snapshot VAR_5, Snapshot VAR_6,
     bool VAR_7, TM_FailureData *VAR_8,
     LockTupleMode *VAR_9, bool *VAR_10)
{
 bool VAR_11 = 1;
 HeapTuple VAR_12 = FUNC_0(VAR_3, 1, &VAR_11);
 TM_Result VAR_13;


 VAR_3->tts_tableOid = FUNC_3(VAR_1);
 VAR_12->t_tableOid = VAR_3->tts_tableOid;

 VAR_13 = FUNC_4(VAR_1, VAR_2, VAR_12, VAR_4, VAR_6, VAR_7,
       VAR_8, VAR_9);
 FUNC_2(&VAR_12->t_self, &VAR_3->tts_tid);
 *VAR_10 = VAR_13 == VAR_0 && !FUNC_1(VAR_12);

 if (VAR_11)
  FUNC_5(VAR_12);

 return VAR_13;
}
