
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_36__ TYPE_6__ ;
typedef struct TYPE_35__ TYPE_5__ ;
typedef struct TYPE_34__ TYPE_4__ ;
typedef struct TYPE_33__ TYPE_3__ ;
typedef struct TYPE_32__ TYPE_2__ ;
typedef struct TYPE_31__ TYPE_1__ ;


typedef int uint16 ;
typedef int XLTW_Oper ;
struct TYPE_31__ {int tts_tid; } ;
typedef TYPE_1__ TupleTableSlot ;
typedef int TransactionId ;
struct TYPE_36__ {TYPE_1__* ecxt_scantuple; } ;
struct TYPE_35__ {scalar_t__ ii_ExclusionOps; int * ii_UniqueStrats; int * ii_UniqueProcs; int * ii_ExclusionStrats; int * ii_ExclusionProcs; } ;
struct TYPE_34__ {scalar_t__ xs_recheck; } ;
struct TYPE_33__ {int * rd_indcollation; } ;
struct TYPE_32__ {scalar_t__ speculativeToken; int xmin; int xmax; } ;
typedef TYPE_2__ SnapshotData ;
typedef int ScanKeyData ;
typedef TYPE_3__* Relation ;
typedef int Oid ;
typedef int * ItemPointer ;
typedef TYPE_4__* IndexScanDesc ;
typedef TYPE_5__ IndexInfo ;
typedef TYPE_6__ ExprContext ;
typedef int EState ;
typedef int Datum ;
typedef scalar_t__ CEOUC_WAIT_MODE ;


 char* FUNC_0 (TYPE_3__*,int *,int*) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (TYPE_5__*,TYPE_1__*,int *,int *,int*) ;
 int VAR_4 ;
 int FUNC_3 () ;
 TYPE_6__* FUNC_4 (int *) ;
 int VAR_5 ;
 int FUNC_5 (TYPE_3__*) ;
 int FUNC_6 (TYPE_2__) ;
 int VAR_6 ;
 scalar_t__ FUNC_7 (int *,int *) ;
 scalar_t__ FUNC_8 (int *) ;
 int FUNC_9 (TYPE_3__*) ;
 int FUNC_10 (int *,int ,int,int ,int ,int ,int ,int ) ;
 int FUNC_11 (int ,scalar_t__) ;
 scalar_t__ FUNC_12 (int ) ;
 scalar_t__ FUNC_13 (int ,int ) ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_14 (int ,TYPE_3__*,int *,int ) ;
 int FUNC_15 (int ,char*,int ) ;
 int FUNC_16 (int ,int ) ;
 int FUNC_17 (int ) ;
 int FUNC_18 (char*,...) ;
 int FUNC_19 (char*,int ) ;
 int FUNC_20 (TYPE_3__*,int ) ;
 TYPE_4__* FUNC_21 (TYPE_3__*,TYPE_3__*,TYPE_2__*,int,int ) ;
 int FUNC_22 (TYPE_4__*) ;
 scalar_t__ FUNC_23 (TYPE_4__*,int ,TYPE_1__*) ;
 int FUNC_24 (TYPE_3__*,int *,int *,int*,int *) ;
 int FUNC_25 (TYPE_4__*,int *,int,int *,int ) ;
 TYPE_1__* FUNC_26 (TYPE_3__*,int *) ;

__attribute__((used)) static bool
FUNC_27(Relation VAR_9, Relation VAR_10,
          IndexInfo *VAR_11,
          ItemPointer VAR_12,
          Datum *VAR_13, bool *VAR_14,
          EState *VAR_15, bool VAR_16,
          CEOUC_WAIT_MODE VAR_17,
          bool VAR_18,
          ItemPointer VAR_19)
{
 Oid *VAR_20;
 uint16 *VAR_21;
 Oid *VAR_22 = VAR_10->rd_indcollation;
 int VAR_23 = FUNC_5(VAR_10);
 IndexScanDesc VAR_24;
 ScanKeyData VAR_25[VAR_5];
 SnapshotData VAR_26;
 int VAR_27;
 bool VAR_28;
 bool VAR_29;
 ExprContext *VAR_30;
 TupleTableSlot *VAR_31;
 TupleTableSlot *VAR_32;

 if (VAR_11->ii_ExclusionOps)
 {
  VAR_20 = VAR_11->ii_ExclusionProcs;
  VAR_21 = VAR_11->ii_ExclusionStrats;
 }
 else
 {
  VAR_20 = VAR_11->ii_UniqueProcs;
  VAR_21 = VAR_11->ii_UniqueStrats;
 }





 for (VAR_27 = 0; VAR_27 < VAR_23; VAR_27++)
 {
  if (VAR_14[VAR_27])
   return 1;
 }





 FUNC_6(VAR_26);

 for (VAR_27 = 0; VAR_27 < VAR_23; VAR_27++)
 {
  FUNC_10(&VAR_25[VAR_27],
          0,
          VAR_27 + 1,
          VAR_21[VAR_27],
          VAR_6,
          VAR_22[VAR_27],
          VAR_20[VAR_27],
          VAR_13[VAR_27]);
 }
 VAR_31 = FUNC_26(VAR_9, ((void*)0));

 VAR_30 = FUNC_4(VAR_15);
 VAR_32 = VAR_30->ecxt_scantuple;
 VAR_30->ecxt_scantuple = VAR_31;





retry:
 VAR_28 = 0;
 VAR_29 = 0;
 VAR_24 = FUNC_21(VAR_9, VAR_10, &VAR_26, VAR_23, 0);
 FUNC_25(VAR_24, VAR_25, VAR_23, ((void*)0), 0);

 while (FUNC_23(VAR_24, VAR_4, VAR_31))
 {
  TransactionId VAR_33;
  XLTW_Oper VAR_34;
  Datum VAR_35[VAR_5];
  bool VAR_36[VAR_5];
  char *VAR_37;
  char *VAR_38;




  if (FUNC_8(VAR_12) &&
   FUNC_7(VAR_12, &VAR_31->tts_tid))
  {
   if (VAR_29)
    FUNC_15(VAR_3, "found self tuple multiple times in index \"%s\"",
      FUNC_9(VAR_10));
   VAR_29 = 1;
   continue;
  }





  FUNC_2(VAR_11, VAR_31, VAR_15,
        VAR_35, VAR_36);


  if (VAR_24->xs_recheck)
  {
   if (!FUNC_24(VAR_10,
            VAR_20,
            VAR_35,
            VAR_36,
            VAR_13))
    continue;

  }
  VAR_33 = FUNC_12(VAR_26.xmin) ?
   VAR_26.xmin : VAR_26.xmax;

  if (FUNC_12(VAR_33) &&
   (VAR_17 == VAR_1 ||
    (VAR_17 == VAR_0 &&
     VAR_26.speculativeToken &&
     FUNC_13(FUNC_3(), VAR_33))))
  {
   VAR_34 = VAR_11->ii_ExclusionOps ?
    VAR_8 : VAR_7;
   FUNC_22(VAR_24);
   if (VAR_26.speculativeToken)
    FUNC_11(VAR_26.xmin,
           VAR_26.speculativeToken);
   else
    FUNC_14(VAR_33, VAR_9,
          &VAR_31->tts_tid, VAR_34);
   goto retry;
  }





  if (VAR_18)
  {
   VAR_28 = 1;
   if (VAR_19)
    *VAR_19 = VAR_31->tts_tid;
   break;
  }

  VAR_37 = FUNC_0(VAR_10, VAR_13, VAR_14);
  VAR_38 = FUNC_0(VAR_10, VAR_35,
             VAR_36);
  if (VAR_16)
   FUNC_16(VAR_3,
     (FUNC_17(VAR_2),
      FUNC_19("could not create exclusion constraint \"%s\"",
       FUNC_9(VAR_10)),
      VAR_37 && VAR_38 ?
      FUNC_18("Key %s conflicts with key %s.",
          VAR_37, VAR_38) :
      FUNC_18("Key conflicts exist."),
      FUNC_20(VAR_9,
          FUNC_9(VAR_10))));
  else
   FUNC_16(VAR_3,
     (FUNC_17(VAR_2),
      FUNC_19("conflicting key value violates exclusion constraint \"%s\"",
       FUNC_9(VAR_10)),
      VAR_37 && VAR_38 ?
      FUNC_18("Key %s conflicts with existing key %s.",
          VAR_37, VAR_38) :
      FUNC_18("Key conflicts with existing key."),
      FUNC_20(VAR_9,
          FUNC_9(VAR_10))));
 }

 FUNC_22(VAR_24);
 VAR_30->ecxt_scantuple = VAR_32;

 FUNC_1(VAR_31);

 return !VAR_28;
}
