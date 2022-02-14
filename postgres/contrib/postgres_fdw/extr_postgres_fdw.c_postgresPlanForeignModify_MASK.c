
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_32__ TYPE_7__ ;
typedef struct TYPE_31__ TYPE_6__ ;
typedef struct TYPE_30__ TYPE_5__ ;
typedef struct TYPE_29__ TYPE_4__ ;
typedef struct TYPE_28__ TYPE_3__ ;
typedef struct TYPE_27__ TYPE_2__ ;
typedef struct TYPE_26__ TYPE_1__ ;


typedef TYPE_2__* TupleDesc ;
struct TYPE_32__ {int attisdropped; } ;
struct TYPE_31__ {int operation; scalar_t__ onConflictAction; scalar_t__ returningLists; scalar_t__ withCheckOptionLists; } ;
struct TYPE_30__ {int extraUpdatedCols; int updatedCols; int relid; } ;
struct TYPE_29__ {TYPE_1__* trigdesc; } ;
struct TYPE_28__ {int data; } ;
struct TYPE_27__ {int natts; } ;
struct TYPE_26__ {scalar_t__ trig_update_before_row; } ;
typedef TYPE_3__ StringInfoData ;
typedef TYPE_4__* Relation ;
typedef TYPE_5__ RangeTblEntry ;
typedef int PlannerInfo ;
typedef TYPE_6__ ModifyTable ;
typedef int List ;
typedef int Index ;
typedef TYPE_7__* Form_pg_attribute ;
typedef int CmdType ;
typedef int Bitmapset ;
typedef int AttrNumber ;





 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int * VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 TYPE_2__* FUNC_0 (TYPE_4__*) ;
 TYPE_7__* FUNC_1 (TYPE_2__*,int) ;
 int FUNC_2 (int *,int) ;
 int * FUNC_3 (int ,int ) ;
 int FUNC_4 (TYPE_3__*,TYPE_5__*,int ,TYPE_4__*,int *,int **) ;
 int FUNC_5 (TYPE_3__*,TYPE_5__*,int ,TYPE_4__*,int *,int,int *,int *,int **) ;
 int FUNC_6 (TYPE_3__*,TYPE_5__*,int ,TYPE_4__*,int *,int *,int *,int **) ;
 int FUNC_7 (int ,char*,...) ;
 int FUNC_8 (TYPE_3__*) ;
 int * FUNC_9 (int *,int) ;
 int * FUNC_10 (int ,int *,int ,int *) ;
 scalar_t__ FUNC_11 (scalar_t__,int) ;
 int FUNC_12 (int) ;
 int FUNC_13 (int ) ;
 TYPE_5__* FUNC_14 (int ,int *) ;
 int FUNC_15 (TYPE_4__*,int ) ;
 TYPE_4__* FUNC_16 (int ,int ) ;

__attribute__((used)) static List *
FUNC_17(PlannerInfo *VAR_7,
        ModifyTable *VAR_8,
        Index VAR_9,
        int VAR_10)
{
 CmdType VAR_11 = VAR_8->operation;
 RangeTblEntry *VAR_12 = FUNC_14(VAR_9, VAR_7);
 Relation VAR_13;
 StringInfoData VAR_14;
 List *VAR_15 = VAR_3;
 List *VAR_16 = VAR_3;
 List *VAR_17 = VAR_3;
 List *VAR_18 = VAR_3;
 bool VAR_19 = 0;

 FUNC_8(&VAR_14);





 VAR_13 = FUNC_16(VAR_12->relid, VAR_4);
 if (VAR_11 == 129 ||
  (VAR_11 == 128 &&
   VAR_13->trigdesc &&
   VAR_13->trigdesc->trig_update_before_row))
 {
  TupleDesc VAR_20 = FUNC_0(VAR_13);
  int VAR_21;

  for (VAR_21 = 1; VAR_21 <= VAR_20->natts; VAR_21++)
  {
   Form_pg_attribute VAR_22 = FUNC_1(VAR_20, VAR_21 - 1);

   if (!VAR_22->attisdropped)
    VAR_15 = FUNC_9(VAR_15, VAR_21);
  }
 }
 else if (VAR_11 == 128)
 {
  int VAR_23;
  Bitmapset *VAR_24 = FUNC_3(VAR_12->updatedCols, VAR_12->extraUpdatedCols);

  VAR_23 = -1;
  while ((VAR_23 = FUNC_2(VAR_24, VAR_23)) >= 0)
  {

   AttrNumber VAR_25 = VAR_23 + VAR_1;

   if (VAR_25 <= VAR_2)
    FUNC_7(VAR_0, "system-column update is not supported");
   VAR_15 = FUNC_9(VAR_15, VAR_25);
  }
 }




 if (VAR_8->withCheckOptionLists)
  VAR_16 = (List *) FUNC_11(VAR_8->withCheckOptionLists,
            VAR_10);




 if (VAR_8->returningLists)
  VAR_17 = (List *) FUNC_11(VAR_8->returningLists, VAR_10);







 if (VAR_8->onConflictAction == VAR_6)
  VAR_19 = 1;
 else if (VAR_8->onConflictAction != VAR_5)
  FUNC_7(VAR_0, "unexpected ON CONFLICT specification: %d",
    (int) VAR_8->onConflictAction);




 switch (VAR_11)
 {
  case 129:
   FUNC_5(&VAR_14, VAR_12, VAR_9, VAR_13,
        VAR_15, VAR_19,
        VAR_16, VAR_17,
        &VAR_18);
   break;
  case 128:
   FUNC_6(&VAR_14, VAR_12, VAR_9, VAR_13,
        VAR_15,
        VAR_16, VAR_17,
        &VAR_18);
   break;
  case 130:
   FUNC_4(&VAR_14, VAR_12, VAR_9, VAR_13,
        VAR_17,
        &VAR_18);
   break;
  default:
   FUNC_7(VAR_0, "unexpected operation: %d", (int) VAR_11);
   break;
 }

 FUNC_15(VAR_13, VAR_4);





 return FUNC_10(FUNC_13(VAR_14.data),
       VAR_15,
       FUNC_12((VAR_18 != VAR_3)),
       VAR_18);
}
