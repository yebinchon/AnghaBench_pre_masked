
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_25__ TYPE_6__ ;
typedef struct TYPE_24__ TYPE_5__ ;
typedef struct TYPE_23__ TYPE_4__ ;
typedef struct TYPE_22__ TYPE_3__ ;
typedef struct TYPE_21__ TYPE_2__ ;
typedef struct TYPE_20__ TYPE_1__ ;
typedef struct TYPE_19__ TYPE_13__ ;


struct TYPE_25__ {int nEnd; scalar_t__ nStart; int notFullPage; } ;
struct TYPE_24__ {int sizeOfBloomTuple; } ;
struct TYPE_23__ {int heapPtr; } ;
struct TYPE_22__ {int tuples_removed; } ;
struct TYPE_21__ {int strategy; int index; } ;
struct TYPE_20__ {scalar_t__ pd_lower; } ;
struct TYPE_19__ {int maxoff; } ;
typedef int Relation ;
typedef scalar_t__ Pointer ;
typedef TYPE_1__* PageHeader ;
typedef scalar_t__ Page ;
typedef TYPE_2__ IndexVacuumInfo ;
typedef TYPE_3__ IndexBulkDeleteResult ;
typedef scalar_t__ (* IndexBulkDeleteCallback ) (int *,void*) ;
typedef int GenericXLogState ;
typedef scalar_t__* FreeBlockNumberArray ;
typedef int Buffer ;
typedef TYPE_4__ BloomTuple ;
typedef TYPE_5__ BloomState ;
typedef TYPE_6__ BloomMetaPageData ;
typedef scalar_t__ BlockNumber ;


 int FUNC_0 (int) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (TYPE_5__*,scalar_t__) ;
 scalar_t__ FUNC_2 (scalar_t__) ;
 TYPE_6__* FUNC_3 (scalar_t__) ;
 TYPE_4__* FUNC_4 (TYPE_5__*,TYPE_4__*) ;
 TYPE_13__* FUNC_5 (scalar_t__) ;
 TYPE_4__* FUNC_6 (TYPE_5__*,scalar_t__,int ) ;
 scalar_t__ FUNC_7 (scalar_t__) ;
 int FUNC_8 (scalar_t__) ;
 int VAR_4 ;
 int FUNC_9 (int *) ;
 int FUNC_10 (int *) ;
 scalar_t__ FUNC_11 (int *,int ,int ) ;
 int * FUNC_12 (int ) ;
 int FUNC_13 (int ,int ) ;
 int VAR_5 ;
 int FUNC_14 (scalar_t__) ;
 scalar_t__ FUNC_15 (scalar_t__) ;
 int VAR_6 ;
 int FUNC_16 (int ,int ) ;
 int FUNC_17 (int ,int ,scalar_t__,int ,int ) ;
 scalar_t__ FUNC_18 (int ) ;
 int FUNC_19 (int ) ;
 int FUNC_20 (TYPE_5__*,int ) ;
 int FUNC_21 (int ,scalar_t__*,int) ;
 int FUNC_22 (scalar_t__,scalar_t__,int ) ;
 scalar_t__ FUNC_23 (int) ;
 int FUNC_24 () ;

IndexBulkDeleteResult *
FUNC_25(IndexVacuumInfo *VAR_7, IndexBulkDeleteResult *VAR_8,
    IndexBulkDeleteCallback VAR_9, void *VAR_10)
{
 Relation VAR_11 = VAR_7->index;
 BlockNumber VAR_12,
    VAR_13;
 FreeBlockNumberArray VAR_14;
 int VAR_15 = 0;
 BloomState VAR_16;
 Buffer VAR_17;
 Page VAR_18;
 BloomMetaPageData *VAR_19;
 GenericXLogState *VAR_20;

 if (VAR_8 == ((void*)0))
  VAR_8 = (IndexBulkDeleteResult *) FUNC_23(sizeof(IndexBulkDeleteResult));

 FUNC_20(&VAR_16, VAR_11);





 VAR_13 = FUNC_18(VAR_11);
 for (VAR_12 = VAR_0; VAR_12 < VAR_13; VAR_12++)
 {
  BloomTuple *VAR_21,
       *VAR_22,
       *VAR_23;

  FUNC_24();

  VAR_17 = FUNC_17(VAR_11, VAR_5, VAR_12,
         VAR_6, VAR_7->strategy);

  FUNC_13(VAR_17, VAR_2);
  VAR_20 = FUNC_12(VAR_11);
  VAR_18 = FUNC_11(VAR_20, VAR_17, 0);


  if (FUNC_15(VAR_18) || FUNC_7(VAR_18))
  {
   FUNC_19(VAR_17);
   FUNC_9(VAR_20);
   continue;
  }





  VAR_21 = VAR_22 = FUNC_6(&VAR_16, VAR_18, VAR_4);
  VAR_23 = FUNC_6(&VAR_16, VAR_18,
         FUNC_14(FUNC_2(VAR_18)));
  while (VAR_21 < VAR_23)
  {

   if (VAR_9(&VAR_21->heapPtr, VAR_10))
   {

    FUNC_5(VAR_18)->maxoff--;
    VAR_8->tuples_removed += 1;
   }
   else
   {

    if (VAR_22 != VAR_21)
     FUNC_22((Pointer) VAR_22, (Pointer) VAR_21,
       VAR_16.sizeOfBloomTuple);
    VAR_22 = FUNC_4(&VAR_16, VAR_22);
   }

   VAR_21 = FUNC_4(&VAR_16, VAR_21);
  }


  FUNC_0(VAR_22 == FUNC_6(&VAR_16, VAR_18,
           FUNC_14(FUNC_2(VAR_18))));





  if (FUNC_2(VAR_18) != 0 &&
   FUNC_1(&VAR_16, VAR_18) >= VAR_16.sizeOfBloomTuple &&
   VAR_15 < VAR_3)
   VAR_14[VAR_15++] = VAR_12;


  if (VAR_22 != VAR_21)
  {

   if (FUNC_2(VAR_18) == 0)
    FUNC_8(VAR_18);

   ((PageHeader) VAR_18)->pd_lower = (Pointer) VAR_22 - VAR_18;

   FUNC_10(VAR_20);
  }
  else
  {

   FUNC_9(VAR_20);
  }
  FUNC_19(VAR_17);
 }






 VAR_17 = FUNC_16(VAR_11, VAR_1);
 FUNC_13(VAR_17, VAR_2);

 VAR_20 = FUNC_12(VAR_11);
 VAR_18 = FUNC_11(VAR_20, VAR_17, 0);

 VAR_19 = FUNC_3(VAR_18);
 FUNC_21(VAR_19->notFullPage, VAR_14, sizeof(BlockNumber) * VAR_15);
 VAR_19->nStart = 0;
 VAR_19->nEnd = VAR_15;

 FUNC_10(VAR_20);
 FUNC_19(VAR_17);

 return VAR_8;
}
