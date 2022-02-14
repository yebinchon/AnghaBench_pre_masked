
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_25__ TYPE_5__ ;
typedef struct TYPE_24__ TYPE_4__ ;
typedef struct TYPE_23__ TYPE_3__ ;
typedef struct TYPE_22__ TYPE_2__ ;
typedef struct TYPE_21__ TYPE_1__ ;
typedef struct TYPE_20__ TYPE_15__ ;
typedef struct TYPE_19__ TYPE_14__ ;
typedef struct TYPE_18__ TYPE_12__ ;


struct TYPE_25__ {int fn_oid; } ;
struct TYPE_24__ {scalar_t__ queueCxt; int firstCall; int qual_ok; TYPE_1__* giststate; int * orderByTypes; int * queue; void* pageDataCxt; } ;
struct TYPE_23__ {int numberOfKeys; int numberOfOrderBys; int * xs_hitup; TYPE_15__* indexRelation; TYPE_2__* orderByData; TYPE_2__* keyData; int xs_hitupdesc; scalar_t__ xs_want_itup; int opaque; } ;
struct TYPE_18__ {void* fn_extra; int fn_oid; } ;
struct TYPE_22__ {int sk_attno; int sk_flags; TYPE_12__ sk_func; } ;
struct TYPE_21__ {scalar_t__ scanCxt; TYPE_5__* distanceFn; TYPE_5__* consistentFn; int fetchTupdesc; int leafTupdesc; } ;
struct TYPE_20__ {int * rd_opcintype; } ;
struct TYPE_19__ {int atttypid; } ;
typedef int ScanKeyData ;
typedef TYPE_2__* ScanKey ;
typedef int Oid ;
typedef scalar_t__ MemoryContext ;
typedef TYPE_3__* IndexScanDesc ;
typedef TYPE_4__* GISTScanOpaque ;
typedef TYPE_5__ FmgrInfo ;


 int VAR_0 ;
 void* FUNC_0 (scalar_t__,char*,int ) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_3 (TYPE_15__*) ;
 int FUNC_4 (scalar_t__) ;
 scalar_t__ FUNC_5 (scalar_t__) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (TYPE_15__*) ;
 int FUNC_8 (TYPE_15__*) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 TYPE_14__* FUNC_9 (int ,int) ;
 int FUNC_10 (int ,int,int *,int ,int,int ) ;
 int FUNC_11 (int ,char*,int ,int,int ) ;
 int FUNC_12 (TYPE_12__*,TYPE_5__*,scalar_t__) ;
 int FUNC_13 (int ) ;
 int FUNC_14 (TYPE_2__*,TYPE_2__*,int) ;
 int VAR_6 ;
 int * FUNC_15 (int ,TYPE_3__*) ;
 scalar_t__ FUNC_16 (int) ;
 int FUNC_17 (void**) ;

void
FUNC_18(IndexScanDesc VAR_7, ScanKey VAR_8, int VAR_9,
     ScanKey VAR_10, int VAR_11)
{

 GISTScanOpaque VAR_12 = (GISTScanOpaque) VAR_7->opaque;
 bool VAR_13;
 int VAR_14;
 MemoryContext VAR_15;
 if (VAR_12->queue == ((void*)0))
 {

  FUNC_1(VAR_12->queueCxt == VAR_12->giststate->scanCxt);
  VAR_13 = 1;
 }
 else if (VAR_12->queueCxt == VAR_12->giststate->scanCxt)
 {

  VAR_12->queueCxt = FUNC_0(VAR_12->giststate->scanCxt,
            "GiST queue context",
            VAR_0);
  VAR_13 = 0;
 }
 else
 {

  FUNC_4(VAR_12->queueCxt);
  VAR_13 = 0;
 }






 if (VAR_7->xs_want_itup && !VAR_7->xs_hitupdesc)
 {
  int VAR_16;
  int VAR_17;
  int VAR_18;







  VAR_16 = FUNC_7(VAR_7->indexRelation);
  VAR_17 = FUNC_3(VAR_7->indexRelation);
  VAR_12->giststate->fetchTupdesc = FUNC_2(VAR_16);
  for (VAR_18 = 1; VAR_18 <= VAR_17; VAR_18++)
  {
   FUNC_10(VAR_12->giststate->fetchTupdesc, VAR_18, ((void*)0),
          VAR_7->indexRelation->rd_opcintype[VAR_18 - 1],
          -1, 0);
  }

  for (; VAR_18 <= VAR_16; VAR_18++)
  {

   FUNC_10(VAR_12->giststate->fetchTupdesc, VAR_18, ((void*)0),
          FUNC_9(VAR_12->giststate->leafTupdesc,
            VAR_18 - 1)->atttypid,
          -1, 0);
  }
  VAR_7->xs_hitupdesc = VAR_12->giststate->fetchTupdesc;


  VAR_12->pageDataCxt = FUNC_0(VAR_12->giststate->scanCxt,
            "GiST page data context",
            VAR_0);
 }


 VAR_15 = FUNC_5(VAR_12->queueCxt);
 VAR_12->queue = FUNC_15(VAR_6, VAR_7);
 FUNC_5(VAR_15);

 VAR_12->firstCall = 1;


 if (VAR_8 && VAR_7->numberOfKeys > 0)
 {
  void **VAR_19 = ((void*)0);






  if (!VAR_13)
  {
   VAR_19 = (void **) FUNC_16(VAR_7->numberOfKeys * sizeof(void *));
   for (VAR_14 = 0; VAR_14 < VAR_7->numberOfKeys; VAR_14++)
    VAR_19[VAR_14] = VAR_7->keyData[VAR_14].sk_func.fn_extra;
  }

  FUNC_14(VAR_7->keyData, VAR_8,
    VAR_7->numberOfKeys * sizeof(ScanKeyData));
  VAR_12->qual_ok = 1;

  for (VAR_14 = 0; VAR_14 < VAR_7->numberOfKeys; VAR_14++)
  {
   ScanKey VAR_20 = VAR_7->keyData + VAR_14;





   FUNC_12(&(VAR_20->sk_func),
         &(VAR_12->giststate->consistentFn[VAR_20->sk_attno - 1]),
         VAR_12->giststate->scanCxt);


   if (!VAR_13)
    VAR_20->sk_func.fn_extra = VAR_19[VAR_14];

   if (VAR_20->sk_flags & VAR_3)
   {
    if (!(VAR_20->sk_flags & (VAR_5 | VAR_4)))
     VAR_12->qual_ok = 0;
   }
  }

  if (!VAR_13)
   FUNC_17(VAR_19);
 }


 if (VAR_10 && VAR_7->numberOfOrderBys > 0)
 {
  void **VAR_21 = ((void*)0);


  if (!VAR_13)
  {
   VAR_21 = (void **) FUNC_16(VAR_7->numberOfOrderBys * sizeof(void *));
   for (VAR_14 = 0; VAR_14 < VAR_7->numberOfOrderBys; VAR_14++)
    VAR_21[VAR_14] = VAR_7->orderByData[VAR_14].sk_func.fn_extra;
  }

  FUNC_14(VAR_7->orderByData, VAR_10,
    VAR_7->numberOfOrderBys * sizeof(ScanKeyData));

  VAR_12->orderByTypes = (Oid *) FUNC_16(VAR_7->numberOfOrderBys * sizeof(Oid));
  for (VAR_14 = 0; VAR_14 < VAR_7->numberOfOrderBys; VAR_14++)
  {
   ScanKey VAR_22 = VAR_7->orderByData + VAR_14;
   FmgrInfo *VAR_23 = &(VAR_12->giststate->distanceFn[VAR_22->sk_attno - 1]);


   if (!FUNC_6(VAR_23->fn_oid))
    FUNC_11(VAR_1, "missing support function %d for attribute %d of index \"%s\"",
      VAR_2, VAR_22->sk_attno,
      FUNC_8(VAR_7->indexRelation));
   VAR_12->orderByTypes[VAR_14] = FUNC_13(VAR_22->sk_func.fn_oid);





   FUNC_12(&(VAR_22->sk_func), VAR_23, VAR_12->giststate->scanCxt);


   if (!VAR_13)
    VAR_22->sk_func.fn_extra = VAR_21[VAR_14];
  }

  if (!VAR_13)
   FUNC_17(VAR_21);
 }


 VAR_7->xs_hitup = ((void*)0);
}
