
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int TupleTableSlot ;
struct TYPE_9__ {int es_output_cid; int es_snapshot; } ;
struct TYPE_8__ {int ri_RangeTableIndex; int ri_RelationDesc; } ;
struct TYPE_7__ {int traversed; int cmax; } ;
typedef int TM_Result ;
typedef TYPE_1__ TM_FailureData ;
typedef TYPE_2__ ResultRelInfo ;
typedef int Relation ;
typedef int LockTupleMode ;
typedef int ItemPointer ;
typedef TYPE_3__ EState ;
typedef int EPQState ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int * FUNC_1 (int *,int ,int ,int *) ;
 scalar_t__ FUNC_2 () ;
 int VAR_3 ;
 int VAR_4 ;





 int VAR_5 ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int ,char*,...) ;
 int FUNC_5 (int ,int ) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (char*) ;
 int FUNC_8 (char*) ;
 int FUNC_9 (int ,int ,int ,int *) ;
 int FUNC_10 (int ,int ,int ,int *,int ,int ,int ,int,TYPE_1__*) ;

__attribute__((used)) static bool
FUNC_11(EState *VAR_6,
       EPQState *VAR_7,
       ResultRelInfo *VAR_8,
       ItemPointer VAR_9,
       LockTupleMode VAR_10,
       TupleTableSlot *VAR_11,
       TupleTableSlot **VAR_12)
{
 Relation VAR_13 = VAR_8->ri_RelationDesc;

 if (VAR_12 != ((void*)0))
 {
  TM_Result VAR_14;
  TM_FailureData VAR_15;
  int VAR_16 = 0;

  *VAR_12 = ((void*)0);


  FUNC_0(VAR_7 != ((void*)0));




  if (!FUNC_2())
   VAR_16 |= VAR_5;
  VAR_14 = FUNC_10(VAR_13, VAR_9, VAR_6->es_snapshot, VAR_11,
        VAR_6->es_output_cid,
        VAR_10, VAR_3,
        VAR_16,
        &VAR_15);

  switch (VAR_14)
  {
   case 129:
    if (VAR_15.cmax != VAR_6->es_output_cid)
     FUNC_5(VAR_2,
       (FUNC_6(VAR_0),
        FUNC_8("tuple to be updated was already modified by an operation triggered by the current command"),
        FUNC_7("Consider using an AFTER trigger instead of a BEFORE trigger to propagate changes to other rows.")));


    return 0;

   case 130:
    if (VAR_15.traversed)
    {
     *VAR_12 = FUNC_1(VAR_7,
           VAR_13,
           VAR_8->ri_RangeTableIndex,
           VAR_11);





     if (FUNC_3(*VAR_12))
     {
      *VAR_12 = ((void*)0);
      return 0;
     }
    }
    break;

   case 128:
    if (FUNC_2())
     FUNC_5(VAR_2,
       (FUNC_6(VAR_1),
        FUNC_8("could not serialize access due to concurrent update")));
    FUNC_4(VAR_2, "unexpected table_tuple_lock status: %u", VAR_14);
    break;

   case 132:
    if (FUNC_2())
     FUNC_5(VAR_2,
       (FUNC_6(VAR_1),
        FUNC_8("could not serialize access due to concurrent delete")));

    return 0;

   case 131:
    FUNC_4(VAR_2, "attempted to lock invisible tuple");
    break;

   default:
    FUNC_4(VAR_2, "unrecognized table_tuple_lock status: %u", VAR_14);
    return 0;
  }
 }
 else
 {




  if (!FUNC_9(VAR_13, VAR_9, VAR_4,
             VAR_11))
   FUNC_4(VAR_2, "failed to fetch tuple for trigger");
 }

 return 1;
}
