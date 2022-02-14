
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int TupleTableSlot ;
typedef int TM_Result ;
typedef int TM_FailureData ;
typedef int Snapshot ;
typedef int Relation ;
typedef int LockTupleMode ;
typedef int ItemPointer ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int VAR_1 ;




 int FUNC_1 (int ,char*,...) ;
 int FUNC_2 (int ,int ,int *,int ,int ,int ,int,int *,int *,int*) ;

void
FUNC_3(Relation VAR_2, ItemPointer VAR_3,
        TupleTableSlot *VAR_4,
        Snapshot VAR_5,
        bool *VAR_6)
{
 TM_Result VAR_7;
 TM_FailureData VAR_8;
 LockTupleMode VAR_9;

 VAR_7 = FUNC_2(VAR_2, VAR_3, VAR_4,
        FUNC_0(1),
        VAR_5, VAR_1,
        1 ,
        &VAR_8, &VAR_9, VAR_6);

 switch (VAR_7)
 {
  case 129:

   FUNC_1(VAR_0, "tuple already updated by self");
   break;

  case 130:

   break;

  case 128:
   FUNC_1(VAR_0, "tuple concurrently updated");
   break;

  case 131:
   FUNC_1(VAR_0, "tuple concurrently deleted");
   break;

  default:
   FUNC_1(VAR_0, "unrecognized table_tuple_update status: %u", VAR_7);
   break;
 }

}
