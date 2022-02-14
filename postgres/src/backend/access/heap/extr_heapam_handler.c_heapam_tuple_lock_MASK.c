
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_27__ TYPE_6__ ;
typedef struct TYPE_26__ TYPE_5__ ;
typedef struct TYPE_25__ TYPE_4__ ;
typedef struct TYPE_24__ TYPE_3__ ;
typedef struct TYPE_23__ TYPE_2__ ;
typedef struct TYPE_22__ TYPE_1__ ;
typedef struct TYPE_21__ TYPE_15__ ;


typedef int uint8 ;
struct TYPE_23__ {int tts_tableOid; } ;
typedef TYPE_2__ TupleTableSlot ;
typedef int TransactionId ;
struct TYPE_26__ {int t_tableOid; TYPE_15__* t_data; void* t_self; } ;
struct TYPE_22__ {TYPE_5__ tupdata; } ;
struct TYPE_27__ {TYPE_1__ base; } ;
struct TYPE_25__ {int xmax; int xmin; } ;
struct TYPE_24__ {int traversed; scalar_t__ cmax; int xmax; void* ctid; } ;
struct TYPE_21__ {void* t_ctid; } ;
typedef scalar_t__ TM_Result ;
typedef TYPE_3__ TM_FailureData ;
typedef TYPE_4__ SnapshotData ;
typedef int Snapshot ;
typedef int Relation ;
typedef int LockWaitPolicy ;
typedef int LockTupleMode ;
typedef void** ItemPointer ;
typedef TYPE_5__* HeapTuple ;
typedef scalar_t__ CommandId ;
typedef TYPE_6__ BufferHeapTupleTableSlot ;
typedef int Buffer ;


 int FUNC_0 (int) ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_3 (TYPE_5__*,TYPE_2__*,int ) ;
 scalar_t__ FUNC_4 (TYPE_15__*) ;
 int FUNC_5 (TYPE_15__*) ;
 int FUNC_6 (TYPE_15__*) ;
 int FUNC_7 (TYPE_15__*) ;
 int FUNC_8 (TYPE_4__) ;
 scalar_t__ FUNC_9 (void**,void**) ;
 scalar_t__ FUNC_10 (void**) ;



 int FUNC_11 (int ) ;
 int FUNC_12 (int ) ;
 int FUNC_13 (int ) ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 int FUNC_14 (TYPE_2__*) ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_15 (int ,int ) ;
 scalar_t__ FUNC_16 (int ) ;
 scalar_t__ FUNC_17 (int ) ;
 int VAR_10 ;
 int FUNC_18 (int ,int ,void**,int ) ;
 int FUNC_19 (int ,int ) ;
 int FUNC_20 (int ) ;
 int FUNC_21 (char*,...) ;
 int FUNC_22 (char*) ;
 scalar_t__ FUNC_23 (int ,TYPE_4__*,TYPE_5__*,int *) ;
 scalar_t__ FUNC_24 (int ,TYPE_5__*,scalar_t__,int ,int ,int,int *,TYPE_3__*) ;

__attribute__((used)) static TM_Result
FUNC_25(Relation VAR_11, ItemPointer VAR_12, Snapshot VAR_13,
      TupleTableSlot *VAR_14, CommandId VAR_15, LockTupleMode VAR_16,
      LockWaitPolicy VAR_17, uint8 VAR_18,
      TM_FailureData *VAR_19)
{
 BufferHeapTupleTableSlot *VAR_20 = (BufferHeapTupleTableSlot *) VAR_14;
 TM_Result VAR_21;
 Buffer VAR_22;
 HeapTuple VAR_23 = &VAR_20->base.tupdata;
 bool VAR_24;

 VAR_24 = (VAR_18 & VAR_9) != 0;
 VAR_19->traversed = 0;

 FUNC_0(FUNC_14(VAR_14));

tuple_lock_retry:
 VAR_23->t_self = *VAR_12;
 VAR_21 = FUNC_24(VAR_11, VAR_23, VAR_15, VAR_16, VAR_17,
        VAR_24, &VAR_22, VAR_19);

 if (VAR_21 == VAR_6 &&
  (VAR_18 & VAR_8))
 {
  FUNC_13(VAR_22);

  FUNC_0(!FUNC_7(VAR_23->t_data));

  if (!FUNC_9(&VAR_19->ctid, &VAR_23->t_self))
  {
   SnapshotData VAR_25;
   TransactionId VAR_26;


   *VAR_12 = VAR_19->ctid;

   VAR_26 = VAR_19->xmax;


   VAR_19->traversed = 1;






   FUNC_8(VAR_25);
   for (;;)
   {
    if (FUNC_10(VAR_12))
     FUNC_19(VAR_3,
       (FUNC_20(VAR_2),
        FUNC_21("tuple to be locked was already moved to another partition due to concurrent update")));

    VAR_23->t_self = *VAR_12;
    if (FUNC_23(VAR_11, &VAR_25, VAR_23, &VAR_22))
    {
     if (!FUNC_15(FUNC_6(VAR_23->t_data),
            VAR_26))
     {
      FUNC_13(VAR_22);
      return VAR_4;
     }


     if (FUNC_17(VAR_25.xmin))
      FUNC_19(VAR_3,
        (FUNC_20(VAR_0),
         FUNC_22("t_xmin is uncommitted in tuple to be updated")));





     if (FUNC_17(VAR_25.xmax))
     {
      FUNC_13(VAR_22);
      switch (VAR_17)
      {
       case 130:
        FUNC_18(VAR_25.xmax,
              VAR_11, &VAR_23->t_self,
              VAR_10);
        break;
       case 128:
        if (!FUNC_2(VAR_25.xmax))

         return VAR_7;
        break;
       case 129:
        if (!FUNC_2(VAR_25.xmax))
         FUNC_19(VAR_3,
           (FUNC_20(VAR_1),
            FUNC_21("could not obtain lock on row in relation \"%s\"",
             FUNC_11(VAR_11))));
        break;
      }
      continue;
     }
     if (FUNC_16(VAR_26) &&
      FUNC_4(VAR_23->t_data) >= VAR_15)
     {
      VAR_19->xmax = VAR_26;





      VAR_19->cmax = FUNC_4(VAR_23->t_data);
      FUNC_13(VAR_22);
      return VAR_5;
     }




     FUNC_13(VAR_22);
     goto tuple_lock_retry;
    }






    if (VAR_23->t_data == ((void*)0))
    {
     return VAR_4;
    }




    if (!FUNC_15(FUNC_6(VAR_23->t_data),
           VAR_26))
    {
     if (FUNC_1(VAR_22))
      FUNC_13(VAR_22);
     return VAR_4;
    }
    if (FUNC_9(&VAR_23->t_self, &VAR_23->t_data->t_ctid))
    {

     if (FUNC_1(VAR_22))
      FUNC_13(VAR_22);
     return VAR_4;
    }


    *VAR_12 = VAR_23->t_data->t_ctid;

    VAR_26 = FUNC_5(VAR_23->t_data);
    if (FUNC_1(VAR_22))
     FUNC_13(VAR_22);

   }
  }
  else
  {

   return VAR_4;
  }
 }

 VAR_14->tts_tableOid = FUNC_12(VAR_11);
 VAR_23->t_tableOid = VAR_14->tts_tableOid;


 FUNC_3(VAR_23, VAR_14, VAR_22);

 return VAR_21;
}
