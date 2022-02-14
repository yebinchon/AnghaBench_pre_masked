
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef int io_concurrency ;
struct TYPE_10__ {int nitems; int * tids; scalar_t__ next_item; scalar_t__ cur_hblkno; } ;
typedef TYPE_2__ XidHorizonPrefetchState ;
typedef int TransactionId ;
struct TYPE_11__ {TYPE_1__* rd_rel; } ;
struct TYPE_9__ {int reltablespace; } ;
typedef TYPE_3__* Relation ;
typedef int * Page ;
typedef int OffsetNumber ;
typedef int ItemPointerData ;
typedef int * ItemPointer ;
typedef int ItemId ;
typedef scalar_t__ HeapTupleHeader ;
typedef int Buffer ;
typedef scalar_t__ BlockNumber ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int * FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (int ) ;
 int FUNC_3 () ;
 int FUNC_4 (scalar_t__,int *) ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_5 (TYPE_3__*) ;
 int FUNC_6 (int ) ;
 scalar_t__ FUNC_7 (int ) ;
 scalar_t__ FUNC_8 (int ) ;
 scalar_t__ FUNC_9 (int ) ;
 int FUNC_10 (int ) ;
 scalar_t__ VAR_5 ;
 scalar_t__ FUNC_11 (int *) ;
 int FUNC_12 (int *) ;
 int FUNC_13 (int ,int ) ;
 int VAR_6 ;
 int FUNC_14 (int ,int ) ;
 scalar_t__ FUNC_15 (int *,int ) ;
 int FUNC_16 (int *,int ) ;
 int FUNC_17 (TYPE_3__*,scalar_t__) ;
 int FUNC_18 (int ) ;
 int VAR_7 ;
 int FUNC_19 (int ) ;
 int FUNC_20 (void*,int,int,int (*) (void const*,void const*)) ;
 int FUNC_21 (TYPE_3__*,TYPE_2__*,int) ;

TransactionId
FUNC_22(Relation VAR_8,
         ItemPointerData *VAR_9,
         int VAR_10)
{
 TransactionId VAR_11 = VAR_4;
 BlockNumber VAR_12;
 Buffer VAR_13 = VAR_3;
 Page VAR_14;
 FUNC_20((void *) VAR_9, VAR_10, sizeof(ItemPointerData),
    (int (*) (const void *, const void *)) VAR_5);
 VAR_12 = VAR_2;
 VAR_14 = ((void*)0);
 for (int VAR_15 = 0; VAR_15 < VAR_10; VAR_15++)
 {
  ItemPointer VAR_16 = &VAR_9[VAR_15];
  ItemId VAR_17;
  OffsetNumber VAR_18;





  if (VAR_12 == VAR_2 ||
   FUNC_11(VAR_16) != VAR_12)
  {

   if (FUNC_2(VAR_13))
   {
    FUNC_13(VAR_13, VAR_1);
    FUNC_18(VAR_13);
   }

   VAR_12 = FUNC_11(VAR_16);

   VAR_13 = FUNC_17(VAR_8, VAR_12);
   VAR_14 = FUNC_1(VAR_13);

   FUNC_13(VAR_13, VAR_0);
  }

  VAR_18 = FUNC_12(VAR_16);
  VAR_17 = FUNC_16(VAR_14, VAR_18);




  while (FUNC_9(VAR_17))
  {
   VAR_18 = FUNC_6(VAR_17);
   VAR_17 = FUNC_16(VAR_14, VAR_18);
   FUNC_3();
  }







  if (FUNC_7(VAR_17))
  {
   HeapTupleHeader VAR_19;

   VAR_19 = (HeapTupleHeader) FUNC_15(VAR_14, VAR_17);

   FUNC_4(VAR_19, &VAR_11);
  }
  else if (FUNC_8(VAR_17))
  {






  }
  else
   FUNC_0(!FUNC_10(VAR_17));

 }

 if (FUNC_2(VAR_13))
 {
  FUNC_13(VAR_13, VAR_1);
  FUNC_18(VAR_13);
 }
 return VAR_11;
}
