
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int TransactionId ;
struct TYPE_9__ {scalar_t__ lastBlockVacuumed; scalar_t__ lastBlockLocked; scalar_t__ totFreePages; int oldestBtpoXact; int pagedelcontext; int cycleid; void* callback_state; int callback; TYPE_2__* stats; TYPE_1__* info; } ;
struct TYPE_8__ {int estimated_count; scalar_t__ pages_free; scalar_t__ num_pages; scalar_t__ pages_deleted; scalar_t__ num_index_tuples; } ;
struct TYPE_7__ {int strategy; scalar_t__ report_progress; int index; } ;
typedef int Relation ;
typedef TYPE_1__ IndexVacuumInfo ;
typedef TYPE_2__ IndexBulkDeleteResult ;
typedef int IndexBulkDeleteCallback ;
typedef int Buffer ;
typedef scalar_t__ BlockNumber ;
typedef TYPE_3__ BTVacState ;
typedef int BTCycleId ;


 int VAR_0 ;
 int FUNC_0 (int ,char*,int ) ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (int ) ;
 int VAR_4 ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ,int ) ;
 int VAR_5 ;
 int FUNC_4 (int ) ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int ,int ,scalar_t__,int ,int ) ;
 scalar_t__ FUNC_7 (int ) ;
 int FUNC_8 (int ,int ) ;
 scalar_t__ FUNC_9 () ;
 int FUNC_10 (int ,int ) ;
 int FUNC_11 (int ,int ,int *,int ,scalar_t__) ;
 int FUNC_12 (int ,int ) ;
 int FUNC_13 (TYPE_3__*,scalar_t__,scalar_t__) ;
 int FUNC_14 (int ,scalar_t__) ;

__attribute__((used)) static void
FUNC_15(IndexVacuumInfo *VAR_9, IndexBulkDeleteResult *VAR_10,
    IndexBulkDeleteCallback VAR_11, void *VAR_12,
    BTCycleId VAR_13, TransactionId *VAR_14)
{
 Relation VAR_15 = VAR_9->index;
 BTVacState VAR_16;
 BlockNumber VAR_17;
 BlockNumber VAR_18;
 bool VAR_19;





 VAR_10->estimated_count = 0;
 VAR_10->num_index_tuples = 0;
 VAR_10->pages_deleted = 0;


 VAR_16.info = VAR_9;
 VAR_16.stats = VAR_10;
 VAR_16.callback = VAR_11;
 VAR_16.callback_state = VAR_12;
 VAR_16.cycleid = VAR_13;
 VAR_16.lastBlockVacuumed = VAR_1;
 VAR_16.lastBlockLocked = VAR_1;
 VAR_16.totFreePages = 0;
 VAR_16.oldestBtpoXact = VAR_4;


 VAR_16.pagedelcontext = FUNC_0(VAR_2,
              "_bt_pagedel",
              VAR_0);
 VAR_19 = !FUNC_5(VAR_15);

 VAR_18 = VAR_1 + 1;
 for (;;)
 {

  if (VAR_19)
   FUNC_3(VAR_15, VAR_3);
  VAR_17 = FUNC_7(VAR_15);
  if (VAR_19)
   FUNC_8(VAR_15, VAR_3);

  if (VAR_9->report_progress)
   FUNC_14(VAR_7,
           VAR_17);


  if (VAR_18 >= VAR_17)
   break;

  for (; VAR_18 < VAR_17; VAR_18++)
  {
   FUNC_13(&VAR_16, VAR_18, VAR_18);
   if (VAR_9->report_progress)
    FUNC_14(VAR_6,
            VAR_18);
  }
 }
 if (FUNC_9() &&
  VAR_16.lastBlockVacuumed < VAR_16.lastBlockLocked)
 {
  Buffer VAR_20;







  VAR_20 = FUNC_6(VAR_15, VAR_5, VAR_16.lastBlockLocked,
         VAR_8, VAR_9->strategy);
  FUNC_2(VAR_20);
  FUNC_10(VAR_15, VAR_20);
  FUNC_11(VAR_15, VAR_20, ((void*)0), 0, VAR_16.lastBlockVacuumed);
  FUNC_12(VAR_15, VAR_20);
 }

 FUNC_4(VAR_16.pagedelcontext);
 if (VAR_16.totFreePages > 0)
  FUNC_1(VAR_15);


 VAR_10->num_pages = VAR_17;
 VAR_10->pages_free = VAR_16.totFreePages;

 if (VAR_14)
  *VAR_14 = VAR_16.oldestBtpoXact;
}
