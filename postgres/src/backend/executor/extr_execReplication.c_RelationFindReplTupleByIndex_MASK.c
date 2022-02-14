
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_15__ TYPE_3__ ;
typedef struct TYPE_14__ TYPE_2__ ;
typedef struct TYPE_13__ TYPE_1__ ;


struct TYPE_13__ {int tts_tid; } ;
typedef TYPE_1__ TupleTableSlot ;
typedef int TransactionId ;
struct TYPE_15__ {int xmax; int xmin; } ;
struct TYPE_14__ {int ctid; } ;
typedef int TM_Result ;
typedef TYPE_2__ TM_FailureData ;
typedef TYPE_3__ SnapshotData ;
typedef int ScanKeyData ;
typedef int Relation ;
typedef int Oid ;
typedef int LockTupleMode ;
typedef int IndexScanDesc ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (TYPE_1__*) ;
 int VAR_2 ;
 int FUNC_1 (int) ;
 int FUNC_2 () ;
 int VAR_3 ;
 int FUNC_3 (int ) ;
 int FUNC_4 (TYPE_3__) ;
 int FUNC_5 (int *) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_6 () ;
 int FUNC_7 (int ) ;
 int VAR_7 ;




 scalar_t__ FUNC_8 (int ) ;
 int VAR_8 ;
 int FUNC_9 (int ,int *,int *,int ) ;
 int FUNC_10 (int *,int ,int ,TYPE_1__*) ;
 int FUNC_11 (int ,char*,...) ;
 int FUNC_12 (int ,int ) ;
 int FUNC_13 (int ) ;
 int FUNC_14 (char*) ;
 int FUNC_15 (int ,int ,TYPE_3__*,int ,int ) ;
 int FUNC_16 (int ,int ) ;
 int FUNC_17 (int ) ;
 scalar_t__ FUNC_18 (int ,int ,TYPE_1__*) ;
 int FUNC_19 (int ,int ) ;
 int FUNC_20 (int ,int *,int ,int *,int ) ;
 int FUNC_21 (int ,int *,int ,TYPE_1__*,int ,int ,int ,int ,TYPE_2__*) ;

bool
FUNC_22(Relation VAR_9, Oid VAR_10,
        LockTupleMode VAR_11,
        TupleTableSlot *VAR_12,
        TupleTableSlot *VAR_13)
{
 ScanKeyData VAR_14[VAR_3];
 IndexScanDesc VAR_15;
 SnapshotData VAR_16;
 TransactionId VAR_17;
 Relation VAR_18;
 bool VAR_19;


 VAR_18 = FUNC_19(VAR_10, VAR_7);


 FUNC_4(VAR_16);
 VAR_15 = FUNC_15(VAR_9, VAR_18, &VAR_16,
         FUNC_3(VAR_18),
         0);


 FUNC_10(VAR_14, VAR_9, VAR_18, VAR_12);

retry:
 VAR_19 = 0;

 FUNC_20(VAR_15, VAR_14, FUNC_3(VAR_18), ((void*)0), 0);


 if (FUNC_18(VAR_15, VAR_2, VAR_13))
 {
  VAR_19 = 1;
  FUNC_0(VAR_13);

  VAR_17 = FUNC_8(VAR_16.xmin) ?
   VAR_16.xmin : VAR_16.xmax;





  if (FUNC_8(VAR_17))
  {
   FUNC_9(VAR_17, ((void*)0), ((void*)0), VAR_8);
   goto retry;
  }
 }


 if (VAR_19)
 {
  TM_FailureData VAR_20;
  TM_Result VAR_21;

  FUNC_7(FUNC_2());

  VAR_21 = FUNC_21(VAR_9, &(VAR_13->tts_tid), FUNC_2(),
          VAR_13,
          FUNC_1(0),
          VAR_11,
          VAR_5,
          0 ,
          &VAR_20);

  FUNC_6();

  switch (VAR_21)
  {
   case 129:
    break;
   case 128:

    if (FUNC_5(&VAR_20.ctid))
     FUNC_12(VAR_4,
       (FUNC_13(VAR_0),
        FUNC_14("tuple to be locked was already moved to another partition due to concurrent update, retrying")));
    else
     FUNC_12(VAR_4,
       (FUNC_13(VAR_0),
        FUNC_14("concurrent update, retrying")));
    goto retry;
   case 131:

    FUNC_12(VAR_4,
      (FUNC_13(VAR_0),
       FUNC_14("concurrent delete, retrying")));
    goto retry;
   case 130:
    FUNC_11(VAR_1, "attempted to lock invisible tuple");
    break;
   default:
    FUNC_11(VAR_1, "unexpected table_tuple_lock status: %u", VAR_21);
    break;
  }
 }

 FUNC_17(VAR_15);


 FUNC_16(VAR_18, VAR_6);

 return VAR_19;
}
