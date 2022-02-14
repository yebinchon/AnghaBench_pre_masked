
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_3__ ;
typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;
typedef struct TYPE_11__ TYPE_10__ ;


typedef size_t uint32 ;
struct TYPE_14__ {TYPE_2__* result; int tmpCxt; int index; int ginstate; int strategy; void* callback_state; int callback; } ;
struct TYPE_13__ {scalar_t__ num_index_tuples; } ;
struct TYPE_12__ {int strategy; int index; } ;
struct TYPE_11__ {scalar_t__ rightlink; } ;
typedef int Relation ;
typedef scalar_t__ Page ;
typedef int ItemId ;
typedef TYPE_1__ IndexVacuumInfo ;
typedef int IndexTupleData ;
typedef scalar_t__ IndexTuple ;
typedef TYPE_2__ IndexBulkDeleteResult ;
typedef int IndexBulkDeleteCallback ;
typedef TYPE_3__ GinVacuumState ;
typedef int Buffer ;
typedef scalar_t__ BlockNumber ;


 int VAR_0 ;
 int FUNC_0 (int ,char*,int ) ;
 int FUNC_1 (int) ;
 int VAR_1 ;
 scalar_t__ FUNC_2 (int ) ;
 int VAR_2 ;
 int FUNC_3 () ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 scalar_t__ FUNC_4 (scalar_t__) ;
 TYPE_10__* FUNC_5 (scalar_t__) ;
 int FUNC_6 (scalar_t__) ;
 scalar_t__ FUNC_7 (scalar_t__) ;
 scalar_t__ VAR_8 ;
 int FUNC_8 () ;
 int FUNC_9 (int ,int ) ;
 int VAR_9 ;
 int FUNC_10 (int ) ;
 int FUNC_11 (int ) ;
 scalar_t__ FUNC_12 (scalar_t__,int ) ;
 int FUNC_13 (scalar_t__,scalar_t__) ;
 scalar_t__ FUNC_14 (scalar_t__) ;
 int FUNC_15 (scalar_t__,scalar_t__) ;
 int VAR_10 ;
 int FUNC_16 (int ,int ,scalar_t__,int ,int ) ;
 int FUNC_17 () ;
 int FUNC_18 (int ) ;
 int FUNC_19 (int *,int,int,int,TYPE_2__*) ;
 scalar_t__ FUNC_20 (TYPE_3__*,int ,scalar_t__*,size_t*) ;
 int FUNC_21 (TYPE_3__*,scalar_t__) ;
 int FUNC_22 (int *,int ) ;
 scalar_t__ FUNC_23 (int) ;
 int FUNC_24 () ;
 int FUNC_25 (int ,int ) ;

IndexBulkDeleteResult *
FUNC_26(IndexVacuumInfo *VAR_11, IndexBulkDeleteResult *VAR_12,
     IndexBulkDeleteCallback VAR_13, void *VAR_14)
{
 Relation VAR_15 = VAR_11->index;
 BlockNumber VAR_16 = VAR_5;
 GinVacuumState VAR_17;
 Buffer VAR_18;
 BlockNumber VAR_19[VAR_1 / (sizeof(IndexTupleData) + sizeof(ItemId))];
 uint32 VAR_20;

 VAR_17.tmpCxt = FUNC_0(VAR_2,
            "Gin vacuum temporary context",
            VAR_0);
 VAR_17.index = VAR_15;
 VAR_17.callback = VAR_13;
 VAR_17.callback_state = VAR_14;
 VAR_17.strategy = VAR_11->strategy;
 FUNC_22(&VAR_17.ginstate, VAR_15);


 if (VAR_12 == ((void*)0))
 {

  VAR_12 = (IndexBulkDeleteResult *) FUNC_23(sizeof(IndexBulkDeleteResult));




  FUNC_19(&VAR_17.ginstate, !FUNC_8(),
       0, 1, VAR_12);
 }


 VAR_12->num_index_tuples = 0;
 VAR_17.result = VAR_12;

 VAR_18 = FUNC_16(VAR_15, VAR_9, VAR_16,
        VAR_10, VAR_11->strategy);


 for (;;)
 {
  Page VAR_21 = FUNC_2(VAR_18);
  IndexTuple VAR_22;

  FUNC_9(VAR_18, VAR_6);

  FUNC_1(!FUNC_6(VAR_21));

  if (FUNC_7(VAR_21))
  {
   FUNC_9(VAR_18, VAR_7);
   FUNC_9(VAR_18, VAR_4);

   if (VAR_16 == VAR_5 && !FUNC_7(VAR_21))
   {
    FUNC_9(VAR_18, VAR_7);
    continue;
   }
   break;
  }

  FUNC_1(FUNC_14(VAR_21) >= VAR_3);

  VAR_22 = (IndexTuple) FUNC_12(VAR_21, FUNC_13(VAR_21, VAR_3));
  VAR_16 = FUNC_4(VAR_22);
  FUNC_1(VAR_16 != VAR_8);

  FUNC_18(VAR_18);
  VAR_18 = FUNC_16(VAR_15, VAR_9, VAR_16,
         VAR_10, VAR_11->strategy);
 }



 for (;;)
 {
  Page VAR_23 = FUNC_2(VAR_18);
  Page VAR_24;
  uint32 VAR_25;

  FUNC_1(!FUNC_6(VAR_23));

  VAR_24 = FUNC_20(&VAR_17, VAR_18, VAR_19, &VAR_20);

  VAR_16 = FUNC_5(VAR_23)->rightlink;

  if (VAR_24)
  {
   FUNC_17();
   FUNC_15(VAR_24, VAR_23);
   FUNC_10(VAR_18);
   FUNC_25(VAR_17.index, VAR_18);
   FUNC_18(VAR_18);
   FUNC_3();
  }
  else
  {
   FUNC_18(VAR_18);
  }

  FUNC_24();

  for (VAR_25 = 0; VAR_25 < VAR_20; VAR_25++)
  {
   FUNC_21(&VAR_17, VAR_19[VAR_25]);
   FUNC_24();
  }

  if (VAR_16 == VAR_8)
   break;

  VAR_18 = FUNC_16(VAR_15, VAR_9, VAR_16,
         VAR_10, VAR_11->strategy);
  FUNC_9(VAR_18, VAR_4);
 }

 FUNC_11(VAR_17.tmpCxt);

 return VAR_17.result;
}
