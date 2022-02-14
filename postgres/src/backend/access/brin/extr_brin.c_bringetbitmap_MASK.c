
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_28__ TYPE_6__ ;
typedef struct TYPE_27__ TYPE_5__ ;
typedef struct TYPE_26__ TYPE_3__ ;
typedef struct TYPE_25__ TYPE_2__ ;
typedef struct TYPE_24__ TYPE_1__ ;
typedef struct TYPE_23__ TYPE_19__ ;
typedef struct TYPE_22__ TYPE_18__ ;


typedef int int64 ;
struct TYPE_28__ {TYPE_1__* bt_columns; scalar_t__ bt_placeholder; } ;
struct TYPE_27__ {scalar_t__ bo_pagesPerRange; int bo_rmAccess; TYPE_1__* bo_bdesc; } ;
struct TYPE_26__ {scalar_t__ fn_oid; } ;
struct TYPE_25__ {int numberOfKeys; TYPE_1__* keyData; int xs_snapshot; scalar_t__ opaque; int indexRelation; } ;
struct TYPE_24__ {int sk_attno; int sk_flags; scalar_t__ sk_collation; TYPE_19__* bd_tupdesc; } ;
struct TYPE_23__ {int natts; } ;
struct TYPE_22__ {scalar_t__ attcollation; } ;
typedef int TIDBitmap ;
typedef int Size ;
typedef TYPE_1__* ScanKey ;
typedef int Relation ;
typedef int Oid ;
typedef int OffsetNumber ;
typedef int MemoryContext ;
typedef TYPE_2__* IndexScanDesc ;
typedef TYPE_3__ FmgrInfo ;
typedef int Datum ;
typedef scalar_t__ Buffer ;
typedef TYPE_1__ BrinValues ;
typedef int BrinTuple ;
typedef TYPE_5__ BrinOpaque ;
typedef TYPE_6__ BrinMemTuple ;
typedef TYPE_1__ BrinDesc ;
typedef scalar_t__ BlockNumber ;
typedef int AttrNumber ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,char*,int ) ;
 int FUNC_1 (int) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_2 () ;
 int VAR_5 ;
 int FUNC_3 (int ) ;
 int FUNC_4 (TYPE_3__*,scalar_t__,int ,int ,int ) ;
 int FUNC_5 (int ,int) ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 int FUNC_6 (scalar_t__,int ) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (int ) ;
 int FUNC_9 (int ) ;
 int FUNC_10 (TYPE_1__*) ;
 scalar_t__ FUNC_11 (int ) ;
 int FUNC_12 (int ) ;
 int FUNC_13 (scalar_t__) ;
 int VAR_8 ;
 TYPE_18__* FUNC_14 (TYPE_19__*,int) ;
 int * FUNC_15 (int ,scalar_t__,scalar_t__*,int *,int *,int ,int ) ;
 int * FUNC_16 (int *,int ,int *,int *) ;
 TYPE_6__* FUNC_17 (TYPE_1__*,int *,TYPE_6__*) ;
 TYPE_6__* FUNC_18 (TYPE_1__*) ;
 int FUNC_19 (TYPE_3__*,TYPE_3__*,int ) ;
 TYPE_3__* FUNC_20 (int ,int,int ) ;
 TYPE_3__* FUNC_21 (int) ;
 int FUNC_22 (int ) ;
 int FUNC_23 (int ,int ) ;
 int FUNC_24 (int ,int ) ;
 int FUNC_25 (int *,scalar_t__) ;

int64
FUNC_26(IndexScanDesc VAR_9, TIDBitmap *VAR_10)
{
 Relation VAR_11 = VAR_9->indexRelation;
 Buffer VAR_12 = VAR_6;
 BrinDesc *VAR_13;
 Oid VAR_14;
 Relation VAR_15;
 BrinOpaque *VAR_16;
 BlockNumber VAR_17;
 BlockNumber VAR_18;
 int VAR_19 = 0;
 FmgrInfo *VAR_20;
 MemoryContext VAR_21;
 MemoryContext VAR_22;
 BrinMemTuple *VAR_23;
 BrinTuple *VAR_24 = ((void*)0);
 Size VAR_25 = 0;

 VAR_16 = (BrinOpaque *) VAR_9->opaque;
 VAR_13 = VAR_16->bo_bdesc;
 FUNC_22(VAR_11);





 VAR_14 = FUNC_5(FUNC_12(VAR_11), 0);
 VAR_15 = FUNC_24(VAR_14, VAR_1);
 VAR_17 = FUNC_11(VAR_15);
 FUNC_23(VAR_15, VAR_1);






 VAR_20 = FUNC_21(sizeof(FmgrInfo) * VAR_13->bd_tupdesc->natts);


 VAR_23 = FUNC_18(VAR_13);





 VAR_22 = FUNC_0(VAR_5,
          "bringetbitmap cxt",
          VAR_0);
 VAR_21 = FUNC_9(VAR_22);






 for (VAR_18 = 0; VAR_18 < VAR_17; VAR_18 += VAR_16->bo_pagesPerRange)
 {
  bool VAR_26;
  bool VAR_27 = 0;
  BrinTuple *VAR_28;
  OffsetNumber VAR_29;
  Size VAR_30;

  FUNC_2();

  FUNC_8(VAR_22);

  VAR_28 = FUNC_15(VAR_16->bo_rmAccess, VAR_18, &VAR_12,
            &VAR_29, &VAR_30, VAR_3,
            VAR_9->xs_snapshot);
  if (VAR_28)
  {
   VAR_27 = 1;
   VAR_24 = FUNC_16(VAR_28, VAR_30, VAR_24, &VAR_25);
   FUNC_6(VAR_12, VAR_4);
  }





  if (!VAR_27)
  {
   VAR_26 = 1;
  }
  else
  {
   VAR_23 = FUNC_17(VAR_13, VAR_24, VAR_23);
   if (VAR_23->bt_placeholder)
   {




    VAR_26 = 1;
   }
   else
   {
    int VAR_31;
    VAR_26 = 1;
    for (VAR_31 = 0; VAR_31 < VAR_9->numberOfKeys; VAR_31++)
    {
     ScanKey VAR_32 = &VAR_9->keyData[VAR_31];
     AttrNumber VAR_33 = VAR_32->sk_attno;
     BrinValues *VAR_34 = &VAR_23->bt_columns[VAR_33 - 1];
     Datum VAR_35;







     FUNC_1((VAR_32->sk_flags & VAR_8) ||
         (VAR_32->sk_collation ==
       FUNC_14(VAR_13->bd_tupdesc,
            VAR_33 - 1)->attcollation));


     if (VAR_20[VAR_33 - 1].fn_oid == VAR_7)
     {
      FmgrInfo *VAR_36;

      VAR_36 = FUNC_20(VAR_11, VAR_33,
            VAR_2);
      FUNC_19(&VAR_20[VAR_33 - 1], VAR_36,
            VAR_5);
     }
     VAR_35 = FUNC_4(&VAR_20[VAR_33 - 1],
           VAR_32->sk_collation,
           FUNC_10(VAR_13),
           FUNC_10(VAR_34),
           FUNC_10(VAR_32));
     VAR_26 = FUNC_3(VAR_35);
     if (!VAR_26)
      break;
    }
   }
  }


  if (VAR_26)
  {
   BlockNumber VAR_37;

   for (VAR_37 = VAR_18;
     VAR_37 <= VAR_18 + VAR_16->bo_pagesPerRange - 1;
     VAR_37++)
   {
    FUNC_9(VAR_21);
    FUNC_25(VAR_10, VAR_37);
    VAR_19++;
    FUNC_9(VAR_22);
   }
  }
 }

 FUNC_9(VAR_21);
 FUNC_7(VAR_22);

 if (VAR_12 != VAR_6)
  FUNC_13(VAR_12);






 return VAR_19 * 10;
}
