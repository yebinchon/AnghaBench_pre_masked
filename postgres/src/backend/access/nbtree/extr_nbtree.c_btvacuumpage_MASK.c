
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_19__ TYPE_6__ ;
typedef struct TYPE_18__ TYPE_5__ ;
typedef struct TYPE_17__ TYPE_4__ ;
typedef struct TYPE_16__ TYPE_3__ ;
typedef struct TYPE_15__ TYPE_2__ ;
typedef struct TYPE_14__ TYPE_1__ ;


struct TYPE_14__ {int xact; } ;
struct TYPE_19__ {scalar_t__ btpo_cycleid; int btpo_flags; scalar_t__ btpo_next; TYPE_1__ btpo; } ;
struct TYPE_18__ {scalar_t__ cycleid; scalar_t__ lastBlockLocked; scalar_t__ lastBlockVacuumed; int oldestBtpoXact; int pagedelcontext; int totFreePages; void* callback_state; scalar_t__ (* callback ) (int *,void*) ;TYPE_4__* stats; TYPE_2__* info; } ;
struct TYPE_17__ {int tuples_removed; int pages_deleted; int num_index_tuples; } ;
struct TYPE_16__ {int t_tid; } ;
struct TYPE_15__ {int strategy; int index; } ;
typedef int Relation ;
typedef int Page ;
typedef scalar_t__ OffsetNumber ;
typedef int MemoryContext ;
typedef int * ItemPointer ;
typedef TYPE_2__ IndexVacuumInfo ;
typedef TYPE_3__* IndexTuple ;
typedef TYPE_4__ IndexBulkDeleteResult ;
typedef scalar_t__ (* IndexBulkDeleteCallback ) (int *,void*) ;
typedef int Buffer ;
typedef scalar_t__ BlockNumber ;
typedef TYPE_5__ BTVacState ;
typedef TYPE_6__* BTPageOpaque ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (int ) ;
 int VAR_3 ;
 int FUNC_3 (int ,int) ;
 int VAR_4 ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ) ;
 scalar_t__ FUNC_6 (scalar_t__) ;
 scalar_t__ FUNC_7 (TYPE_6__*) ;
 scalar_t__ FUNC_8 (TYPE_6__*) ;
 scalar_t__ FUNC_9 (TYPE_6__*) ;
 scalar_t__ FUNC_10 (TYPE_6__*) ;
 scalar_t__ FUNC_11 (TYPE_6__*) ;
 scalar_t__ VAR_5 ;
 int FUNC_12 (TYPE_6__*) ;
 scalar_t__ FUNC_13 (int ,int ) ;
 int FUNC_14 (int ,scalar_t__) ;
 scalar_t__ FUNC_15 (int ) ;
 scalar_t__ FUNC_16 (int ) ;
 int FUNC_17 (int ) ;
 int VAR_6 ;
 int FUNC_18 (int ,int ,scalar_t__,int ,int ) ;
 int FUNC_19 (int ,scalar_t__) ;
 int FUNC_20 (int ) ;
 scalar_t__ FUNC_21 (int ,int ) ;
 int FUNC_22 (int ,int ) ;
 int FUNC_23 (int ,int ,scalar_t__*,int,scalar_t__) ;
 scalar_t__ FUNC_24 (int ) ;
 int FUNC_25 (int ,int ) ;
 int FUNC_26 (int ,int ) ;
 int FUNC_27 () ;

__attribute__((used)) static void
FUNC_28(BTVacState *VAR_7, BlockNumber VAR_8, BlockNumber VAR_9)
{
 IndexVacuumInfo *VAR_10 = VAR_7->info;
 IndexBulkDeleteResult *VAR_11 = VAR_7->stats;
 IndexBulkDeleteCallback VAR_12 = VAR_7->callback;
 void *VAR_13 = VAR_7->callback_state;
 Relation VAR_14 = VAR_10->index;
 bool VAR_15;
 BlockNumber VAR_16;
 Buffer VAR_17;
 Page VAR_18;
 BTPageOpaque VAR_19 = ((void*)0);

restart:
 VAR_15 = 0;
 VAR_16 = VAR_5;


 FUNC_27();







 VAR_17 = FUNC_18(VAR_14, VAR_3, VAR_8, VAR_6,
        VAR_10->strategy);
 FUNC_1(VAR_17, VAR_1);
 VAR_18 = FUNC_0(VAR_17);
 if (!FUNC_17(VAR_18))
 {
  FUNC_22(VAR_14, VAR_17);
  VAR_19 = (BTPageOpaque) FUNC_16(VAR_18);
 }






 if (VAR_8 != VAR_9)
 {
  if (FUNC_24(VAR_18) ||
   FUNC_8(VAR_19) ||
   !FUNC_11(VAR_19) ||
   VAR_19->btpo_cycleid != VAR_7->cycleid)
  {
   FUNC_26(VAR_14, VAR_17);
   return;
  }
 }


 if (FUNC_24(VAR_18))
 {

  FUNC_19(VAR_14, VAR_8);
  VAR_7->totFreePages++;
  VAR_11->pages_deleted++;
 }
 else if (FUNC_9(VAR_19))
 {

  VAR_11->pages_deleted++;


  if (!FUNC_20(VAR_7->oldestBtpoXact) ||
   FUNC_21(VAR_19->btpo.xact, VAR_7->oldestBtpoXact))
   VAR_7->oldestBtpoXact = VAR_19->btpo.xact;
 }
 else if (FUNC_10(VAR_19))
 {

  VAR_15 = 1;
 }
 else if (FUNC_11(VAR_19))
 {
  OffsetNumber VAR_20[VAR_4];
  int VAR_21;
  OffsetNumber VAR_22,
     VAR_23,
     VAR_24;







  FUNC_1(VAR_17, VAR_2);
  FUNC_2(VAR_17);





  if (VAR_8 > VAR_7->lastBlockLocked)
   VAR_7->lastBlockLocked = VAR_8;
  if (VAR_7->cycleid != 0 &&
   VAR_19->btpo_cycleid == VAR_7->cycleid &&
   !(VAR_19->btpo_flags & VAR_0) &&
   !FUNC_12(VAR_19) &&
   VAR_19->btpo_next < VAR_9)
   VAR_16 = VAR_19->btpo_next;





  VAR_21 = 0;
  VAR_23 = FUNC_7(VAR_19);
  VAR_24 = FUNC_15(VAR_18);
  if (VAR_12)
  {
   for (VAR_22 = VAR_23;
     VAR_22 <= VAR_24;
     VAR_22 = FUNC_6(VAR_22))
   {
    IndexTuple VAR_25;
    ItemPointer VAR_26;

    VAR_25 = (IndexTuple) FUNC_13(VAR_18,
            FUNC_14(VAR_18, VAR_22));
    VAR_26 = &(VAR_25->t_tid);
    if (VAR_12(VAR_26, VAR_13))
     VAR_20[VAR_21++] = VAR_22;
   }
  }





  if (VAR_21 > 0)
  {
   FUNC_23(VAR_14, VAR_17, VAR_20, VAR_21,
        VAR_7->lastBlockVacuumed);





   if (VAR_8 > VAR_7->lastBlockVacuumed)
    VAR_7->lastBlockVacuumed = VAR_8;

   VAR_11->tuples_removed += VAR_21;

   VAR_24 = FUNC_15(VAR_18);
  }
  else
  {
   if (VAR_7->cycleid != 0 &&
    VAR_19->btpo_cycleid == VAR_7->cycleid)
   {
    VAR_19->btpo_cycleid = 0;
    FUNC_3(VAR_17, 1);
   }
  }







  if (VAR_23 > VAR_24)
   VAR_15 = (VAR_8 == VAR_9);
  else
   VAR_11->num_index_tuples += VAR_24 - VAR_23 + 1;
 }

 if (VAR_15)
 {
  MemoryContext VAR_27;
  int VAR_28;


  FUNC_4(VAR_7->pagedelcontext);
  VAR_27 = FUNC_5(VAR_7->pagedelcontext);

  VAR_28 = FUNC_25(VAR_14, VAR_17);


  if (VAR_28)
  {
   VAR_11->pages_deleted++;
   if (!FUNC_20(VAR_7->oldestBtpoXact) ||
    FUNC_21(VAR_19->btpo.xact, VAR_7->oldestBtpoXact))
    VAR_7->oldestBtpoXact = VAR_19->btpo.xact;
  }

  FUNC_5(VAR_27);

 }
 else
  FUNC_26(VAR_14, VAR_17);
 if (VAR_16 != VAR_5)
 {
  VAR_8 = VAR_16;
  goto restart;
 }
}
