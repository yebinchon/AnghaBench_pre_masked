
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_29__ TYPE_7__ ;
typedef struct TYPE_28__ TYPE_6__ ;
typedef struct TYPE_27__ TYPE_5__ ;
typedef struct TYPE_26__ TYPE_4__ ;
typedef struct TYPE_25__ TYPE_3__ ;
typedef struct TYPE_24__ TYPE_2__ ;
typedef struct TYPE_23__ TYPE_20__ ;
typedef struct TYPE_22__ TYPE_1__ ;


typedef int int16 ;
struct TYPE_24__ {int nKeys; int abbrevNext; TYPE_3__* sortKeys; int estate; TYPE_20__* indexInfo; int tupDesc; int readtup; int writetup; int copytup; int comparetup; int sortcontext; } ;
typedef TYPE_2__ Tuplesortstate ;
typedef int TupleTableSlot ;
typedef int TupleDesc ;
struct TYPE_29__ {TYPE_4__* scankeys; } ;
struct TYPE_28__ {int * ecxt_scantuple; } ;
struct TYPE_27__ {TYPE_1__* rd_rel; } ;
struct TYPE_26__ {int sk_flags; scalar_t__ sk_attno; int sk_collation; } ;
struct TYPE_25__ {int ssup_nulls_first; scalar_t__ ssup_attno; int abbreviate; int ssup_collation; int ssup_cxt; } ;
struct TYPE_23__ {int * ii_Expressions; } ;
struct TYPE_22__ {scalar_t__ relam; } ;
typedef int SortSupportData ;
typedef TYPE_3__* SortSupport ;
typedef int SortCoordinate ;
typedef TYPE_4__* ScanKey ;
typedef TYPE_5__* Relation ;
typedef int MemoryContext ;
typedef TYPE_6__ ExprContext ;
typedef TYPE_7__* BTScanInsert ;


 int FUNC_0 (int) ;
 int FUNC_1 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 TYPE_20__* FUNC_2 (TYPE_5__*) ;
 int VAR_3 ;
 int FUNC_3 () ;
 int VAR_4 ;
 TYPE_6__* FUNC_4 (int ) ;
 int FUNC_5 (TYPE_5__*) ;
 int VAR_5 ;
 int * FUNC_6 (int ,int *) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (TYPE_2__*) ;
 int FUNC_9 (TYPE_5__*,int ,TYPE_3__*) ;
 int FUNC_10 (TYPE_5__*) ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_11 (int ,int,int,int,int,int ) ;
 int VAR_8 ;
 TYPE_7__* FUNC_12 (TYPE_5__*,int *) ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_13 (int ,char*,int ,int,char) ;
 scalar_t__ FUNC_14 (int) ;
 int FUNC_15 (TYPE_7__*) ;
 int VAR_11 ;
 scalar_t__ VAR_12 ;
 TYPE_2__* FUNC_16 (int,int ,int) ;
 int VAR_13 ;

Tuplesortstate *
FUNC_17(TupleDesc VAR_14,
      Relation VAR_15,
      int VAR_16,
      SortCoordinate VAR_17, bool VAR_18)
{
 Tuplesortstate *VAR_19 = FUNC_16(VAR_16, VAR_17,
               VAR_18);
 BTScanInsert VAR_20;
 MemoryContext VAR_21;
 int VAR_22;

 FUNC_0(VAR_15->rd_rel->relam == VAR_2);

 VAR_21 = FUNC_7(VAR_19->sortcontext);
 VAR_19->nKeys = FUNC_5(VAR_15);

 FUNC_11(VAR_3,
        0,
        VAR_19->nKeys,
        VAR_16,
        VAR_18,
        FUNC_8(VAR_19));

 VAR_19->comparetup = VAR_9;
 VAR_19->copytup = VAR_10;
 VAR_19->writetup = VAR_13;
 VAR_19->readtup = VAR_11;
 VAR_19->abbrevNext = 10;

 VAR_19->indexInfo = FUNC_2(VAR_15);

 VAR_19->tupDesc = VAR_14;

 VAR_20 = FUNC_12(VAR_15, ((void*)0));

 if (VAR_19->indexInfo->ii_Expressions != ((void*)0))
 {
  TupleTableSlot *VAR_23;
  ExprContext *VAR_24;







  VAR_19->estate = FUNC_3();
  VAR_23 = FUNC_6(VAR_14, &VAR_8);
  VAR_24 = FUNC_4(VAR_19->estate);
  VAR_24->ecxt_scantuple = VAR_23;
 }


 VAR_19->sortKeys = (SortSupport) FUNC_14(VAR_19->nKeys *
           sizeof(SortSupportData));

 for (VAR_22 = 0; VAR_22 < VAR_19->nKeys; VAR_22++)
 {
  SortSupport VAR_25 = VAR_19->sortKeys + VAR_22;
  ScanKey VAR_26 = VAR_20->scankeys + VAR_22;
  int16 VAR_27;

  VAR_25->ssup_cxt = VAR_4;
  VAR_25->ssup_collation = VAR_26->sk_collation;
  VAR_25->ssup_nulls_first =
   (VAR_26->sk_flags & VAR_7) != 0;
  VAR_25->ssup_attno = VAR_26->sk_attno;

  VAR_25->abbreviate = (VAR_22 == 0);

  FUNC_1(VAR_25->ssup_attno != 0);

  VAR_27 = (VAR_26->sk_flags & VAR_6) != 0 ?
   VAR_0 : VAR_1;

  FUNC_9(VAR_15, VAR_27, VAR_25);
 }

 FUNC_15(VAR_20);

 FUNC_7(VAR_21);

 return VAR_19;
}
