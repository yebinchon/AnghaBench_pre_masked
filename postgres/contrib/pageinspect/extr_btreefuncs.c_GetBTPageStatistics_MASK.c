
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_15__ TYPE_5__ ;
typedef struct TYPE_14__ TYPE_4__ ;
typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


struct TYPE_12__ {int level; int xact; } ;
struct TYPE_15__ {int btpo_cycleid; int btpo_flags; TYPE_2__ btpo; int btpo_next; int btpo_prev; } ;
struct TYPE_11__ {int level; int xact; } ;
struct TYPE_14__ {int dead_items; int live_items; char type; int avg_item_size; int free_size; int btpo_cycleid; int btpo_flags; TYPE_1__ btpo; int btpo_next; int btpo_prev; int page_size; scalar_t__ max_avail; int blkno; } ;
struct TYPE_13__ {scalar_t__ pd_special; } ;
typedef TYPE_3__* PageHeader ;
typedef int Page ;
typedef int OffsetNumber ;
typedef int ItemId ;
typedef scalar_t__ IndexTuple ;
typedef int Buffer ;
typedef int BlockNumber ;
typedef TYPE_4__ BTPageStat ;
typedef TYPE_5__* BTPageOpaque ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int ) ;
 int VAR_1 ;
 scalar_t__ FUNC_1 (scalar_t__) ;
 int FUNC_2 (int ) ;
 scalar_t__ FUNC_3 (TYPE_5__*) ;
 scalar_t__ FUNC_4 (TYPE_5__*) ;
 scalar_t__ FUNC_5 (TYPE_5__*) ;
 scalar_t__ FUNC_6 (TYPE_5__*) ;
 int FUNC_7 (int ) ;
 scalar_t__ FUNC_8 (int ,int ) ;
 int FUNC_9 (int ,int) ;
 int FUNC_10 (int ) ;
 int FUNC_11 (int ) ;
 int FUNC_12 (int ) ;
 scalar_t__ VAR_2 ;

__attribute__((used)) static void
FUNC_13(BlockNumber VAR_3, Buffer VAR_4, BTPageStat *VAR_5)
{
 Page VAR_6 = FUNC_0(VAR_4);
 PageHeader VAR_7 = (PageHeader) VAR_6;
 OffsetNumber VAR_8 = FUNC_10(VAR_6);
 BTPageOpaque VAR_9 = (BTPageOpaque) FUNC_12(VAR_6);
 int VAR_10 = 0;
 int VAR_11;

 VAR_5->blkno = VAR_3;

 VAR_5->max_avail = VAR_0 - (VAR_0 - VAR_7->pd_special + VAR_2);

 VAR_5->dead_items = VAR_5->live_items = 0;

 VAR_5->page_size = FUNC_11(VAR_6);


 if (FUNC_4(VAR_9))
 {
  VAR_5->type = 'd';
  VAR_5->btpo.xact = VAR_9->btpo.xact;
  return;
 }
 else if (FUNC_3(VAR_9))
  VAR_5->type = 'e';
 else if (FUNC_5(VAR_9))
  VAR_5->type = 'l';
 else if (FUNC_6(VAR_9))
  VAR_5->type = 'r';
 else
  VAR_5->type = 'i';


 VAR_5->btpo_prev = VAR_9->btpo_prev;
 VAR_5->btpo_next = VAR_9->btpo_next;
 VAR_5->btpo.level = VAR_9->btpo.level;
 VAR_5->btpo_flags = VAR_9->btpo_flags;
 VAR_5->btpo_cycleid = VAR_9->btpo_cycleid;


 for (VAR_11 = VAR_1; VAR_11 <= VAR_8; VAR_11++)
 {
  IndexTuple VAR_12;

  ItemId VAR_13 = FUNC_9(VAR_6, VAR_11);

  VAR_12 = (IndexTuple) FUNC_8(VAR_6, VAR_13);

  VAR_10 += FUNC_1(VAR_12);

  if (!FUNC_2(VAR_13))
   VAR_5->live_items++;
  else
   VAR_5->dead_items++;
 }
 VAR_5->free_size = FUNC_7(VAR_6);

 if ((VAR_5->live_items + VAR_5->dead_items) > 0)
  VAR_5->avg_item_size = VAR_10 / (VAR_5->live_items + VAR_5->dead_items);
 else
  VAR_5->avg_item_size = 0;
}
