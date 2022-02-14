
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_15__ TYPE_6__ ;
typedef struct TYPE_14__ TYPE_5__ ;
typedef struct TYPE_13__ TYPE_4__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


typedef int XLogRecPtr ;
struct TYPE_15__ {scalar_t__ rightlink; } ;
struct TYPE_10__ {int tuples_removed; int num_index_tuples; int pages_deleted; int pages_free; } ;
struct TYPE_14__ {int internal_page_set; TYPE_1__ stats; int empty_leaf_set; } ;
struct TYPE_13__ {scalar_t__ startNSN; void* callback_state; scalar_t__ (* callback ) (int *,void*) ;TYPE_2__* info; TYPE_5__* stats; } ;
struct TYPE_12__ {int t_tid; } ;
struct TYPE_11__ {int strategy; int index; } ;
typedef int Relation ;
typedef scalar_t__ Page ;
typedef scalar_t__ OffsetNumber ;
typedef int ItemId ;
typedef TYPE_2__ IndexVacuumInfo ;
typedef TYPE_3__* IndexTuple ;
typedef scalar_t__ (* IndexBulkDeleteCallback ) (int *,void*) ;
typedef TYPE_4__ GistVacState ;
typedef TYPE_5__ GistBulkDeleteResult ;
typedef TYPE_6__* GISTPageOpaque ;
typedef int Buffer ;
typedef scalar_t__ BlockNumber ;


 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 () ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_2 (scalar_t__) ;
 int FUNC_3 (scalar_t__) ;
 scalar_t__ FUNC_4 (scalar_t__) ;
 TYPE_6__* FUNC_5 (scalar_t__) ;
 scalar_t__ FUNC_6 (scalar_t__) ;
 scalar_t__ FUNC_7 (scalar_t__) ;
 scalar_t__ FUNC_8 (TYPE_3__*) ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_9 (int ,int ) ;
 int VAR_5 ;
 int FUNC_10 (int ) ;
 int VAR_6 ;
 scalar_t__ FUNC_11 (scalar_t__) ;
 int FUNC_12 (scalar_t__,int ) ;
 int FUNC_13 (scalar_t__,scalar_t__) ;
 scalar_t__ FUNC_14 (scalar_t__) ;
 int FUNC_15 (scalar_t__,scalar_t__*,int) ;
 int FUNC_16 (scalar_t__,int ) ;
 int VAR_7 ;
 int FUNC_17 (int ,int ,scalar_t__,int ,int ) ;
 int FUNC_18 (int ,scalar_t__) ;
 int FUNC_19 (int ) ;
 scalar_t__ FUNC_20 (int ) ;
 int FUNC_21 () ;
 int FUNC_22 (int ) ;
 int FUNC_23 (int ,int ) ;
 int FUNC_24 (char*) ;
 int FUNC_25 (char*) ;
 int FUNC_26 (char*,int ) ;
 int FUNC_27 (int ) ;
 scalar_t__ FUNC_28 (scalar_t__) ;
 int FUNC_29 (int ,scalar_t__*,int,int *,int ,int ) ;
 int FUNC_30 (int ,scalar_t__) ;
 int FUNC_31 () ;

__attribute__((used)) static void
FUNC_32(GistVacState *VAR_8, BlockNumber VAR_9, BlockNumber VAR_10)
{
 GistBulkDeleteResult *VAR_11 = VAR_8->stats;
 IndexVacuumInfo *VAR_12 = VAR_8->info;
 IndexBulkDeleteCallback VAR_13 = VAR_8->callback;
 void *VAR_14 = VAR_8->callback_state;
 Relation VAR_15 = VAR_12->index;
 Buffer VAR_16;
 Page VAR_17;
 BlockNumber VAR_18;

restart:
 VAR_18 = VAR_2;


 FUNC_31();

 VAR_16 = FUNC_17(VAR_15, VAR_5, VAR_9, VAR_7,
        VAR_12->strategy);





 FUNC_9(VAR_16, VAR_1);
 VAR_17 = (Page) FUNC_0(VAR_16);

 if (FUNC_28(VAR_17))
 {

  FUNC_18(VAR_15, VAR_9);
  VAR_11->stats.pages_free++;
  VAR_11->stats.pages_deleted++;
 }
 else if (FUNC_6(VAR_17))
 {

  VAR_11->stats.pages_deleted++;
 }
 else if (FUNC_7(VAR_17))
 {
  OffsetNumber VAR_19[VAR_6];
  int VAR_20 = 0;
  int VAR_21;
  GISTPageOpaque VAR_22 = FUNC_5(VAR_17);
  OffsetNumber VAR_23 = FUNC_14(VAR_17);
  if ((FUNC_2(VAR_17) ||
    VAR_8->startNSN < FUNC_4(VAR_17)) &&
   (VAR_22->rightlink != VAR_2) &&
   (VAR_22->rightlink < VAR_10))
  {
   VAR_18 = VAR_22->rightlink;
  }





  if (VAR_13)
  {
   OffsetNumber VAR_24;

   for (VAR_24 = VAR_0;
     VAR_24 <= VAR_23;
     VAR_24 = FUNC_11(VAR_24))
   {
    ItemId VAR_25 = FUNC_13(VAR_17, VAR_24);
    IndexTuple VAR_26 = (IndexTuple) FUNC_12(VAR_17, VAR_25);

    if (VAR_13(&(VAR_26->t_tid), VAR_14))
     VAR_19[VAR_20++] = VAR_24;
   }
  }





  if (VAR_20 > 0)
  {
   FUNC_21();

   FUNC_10(VAR_16);

   FUNC_15(VAR_17, VAR_19, VAR_20);
   FUNC_3(VAR_17);

   if (FUNC_20(VAR_15))
   {
    XLogRecPtr VAR_27;

    VAR_27 = FUNC_29(VAR_16,
          VAR_19, VAR_20,
          ((void*)0), 0, VAR_3);
    FUNC_16(VAR_17, VAR_27);
   }
   else
    FUNC_16(VAR_17, FUNC_27(VAR_15));

   FUNC_1();

   VAR_11->stats.tuples_removed += VAR_20;

   VAR_23 = FUNC_14(VAR_17);
  }

  VAR_21 = VAR_23 - VAR_0 + 1;
  if (VAR_21 == 0)
  {
   if (VAR_9 == VAR_10)
    FUNC_30(VAR_11->empty_leaf_set, VAR_9);
  }
  else
   VAR_11->stats.num_index_tuples += VAR_21;
 }
 else
 {







  OffsetNumber VAR_28 = FUNC_14(VAR_17);
  OffsetNumber VAR_29;

  for (VAR_29 = VAR_0;
    VAR_29 <= VAR_28;
    VAR_29 = FUNC_11(VAR_29))
  {
   ItemId VAR_30 = FUNC_13(VAR_17, VAR_29);
   IndexTuple VAR_31 = (IndexTuple) FUNC_12(VAR_17, VAR_30);

   if (FUNC_8(VAR_31))
    FUNC_23(VAR_4,
      (FUNC_26("index \"%s\" contains an inner tuple marked as invalid",
        FUNC_19(VAR_15)),
       FUNC_24("This is caused by an incomplete page split at crash recovery before upgrading to PostgreSQL 9.1."),
       FUNC_25("Please REINDEX it.")));
  }






  if (VAR_9 == VAR_10)
   FUNC_30(VAR_11->internal_page_set, VAR_9);
 }

 FUNC_22(VAR_16);
 if (VAR_18 != VAR_2)
 {
  VAR_9 = VAR_18;
  goto restart;
 }
}
