
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_16__ TYPE_5__ ;
typedef struct TYPE_15__ TYPE_4__ ;
typedef struct TYPE_14__ TYPE_3__ ;
typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;


struct TYPE_13__ {int topparent; int rightblk; int leftblk; int poffset; } ;
typedef TYPE_2__ xl_btree_mark_page_halfdead ;
typedef int uint8 ;
typedef int XLogRecPtr ;
struct TYPE_14__ {int EndRecPtr; } ;
typedef TYPE_3__ XLogReaderState ;
struct TYPE_12__ {scalar_t__ level; } ;
struct TYPE_16__ {int btpo_flags; scalar_t__ btpo_cycleid; TYPE_1__ btpo; int btpo_next; int btpo_prev; } ;
struct TYPE_15__ {int t_info; } ;
typedef scalar_t__ Page ;
typedef int OffsetNumber ;
typedef int ItemId ;
typedef int Item ;
typedef TYPE_4__ IndexTupleData ;
typedef scalar_t__ IndexTuple ;
typedef int Buffer ;
typedef int BlockNumber ;
typedef TYPE_5__* BTPageOpaque ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (scalar_t__,int ) ;
 int FUNC_2 (TYPE_4__*,int ) ;
 scalar_t__ FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 scalar_t__ FUNC_5 (int ) ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_6 (int ) ;
 int FUNC_7 (TYPE_4__*,int ,int) ;
 int FUNC_8 (int ) ;
 int VAR_5 ;
 scalar_t__ FUNC_9 (scalar_t__,int ,int,int ,int,int) ;
 scalar_t__ FUNC_10 (scalar_t__,int ) ;
 int FUNC_11 (scalar_t__,int ) ;
 scalar_t__ FUNC_12 (scalar_t__) ;
 int FUNC_13 (scalar_t__,int ) ;
 int FUNC_14 (scalar_t__,int ) ;
 int FUNC_15 (int ) ;
 int FUNC_16 (TYPE_3__*,int ) ;
 scalar_t__ FUNC_17 (TYPE_3__*,int,int *) ;
 scalar_t__ FUNC_18 (TYPE_3__*) ;
 int FUNC_19 (scalar_t__,int ) ;
 int FUNC_20 (int ,char*) ;

__attribute__((used)) static void
FUNC_21(uint8 VAR_6, XLogReaderState *VAR_7)
{
 XLogRecPtr VAR_8 = VAR_7->EndRecPtr;
 xl_btree_mark_page_halfdead *VAR_9 = (xl_btree_mark_page_halfdead *) FUNC_18(VAR_7);
 Buffer VAR_10;
 Page VAR_11;
 BTPageOpaque VAR_12;
 IndexTupleData VAR_13;
 if (FUNC_17(VAR_7, 1, &VAR_10) == VAR_0)
 {
  OffsetNumber VAR_14;
  ItemId VAR_15;
  IndexTuple VAR_16;
  OffsetNumber VAR_17;
  BlockNumber VAR_18;

  VAR_11 = (Page) FUNC_3(VAR_10);
  VAR_12 = (BTPageOpaque) FUNC_12(VAR_11);

  VAR_14 = VAR_9->poffset;

  VAR_17 = FUNC_8(VAR_14);
  VAR_15 = FUNC_11(VAR_11, VAR_17);
  VAR_16 = (IndexTuple) FUNC_10(VAR_11, VAR_15);
  VAR_18 = FUNC_0(VAR_16);

  VAR_15 = FUNC_11(VAR_11, VAR_14);
  VAR_16 = (IndexTuple) FUNC_10(VAR_11, VAR_15);
  FUNC_1(VAR_16, VAR_18);
  VAR_17 = FUNC_8(VAR_14);
  FUNC_13(VAR_11, VAR_17);

  FUNC_14(VAR_11, VAR_8);
  FUNC_6(VAR_10);
 }
 if (FUNC_5(VAR_10))
  FUNC_15(VAR_10);


 VAR_10 = FUNC_16(VAR_7, 0);
 VAR_11 = (Page) FUNC_3(VAR_10);

 FUNC_19(VAR_11, FUNC_4(VAR_10));
 VAR_12 = (BTPageOpaque) FUNC_12(VAR_11);

 VAR_12->btpo_prev = VAR_9->leftblk;
 VAR_12->btpo_next = VAR_9->rightblk;
 VAR_12->btpo.level = 0;
 VAR_12->btpo_flags = VAR_1 | VAR_2;
 VAR_12->btpo_cycleid = 0;





 FUNC_7(&VAR_13, 0, sizeof(IndexTupleData));
 VAR_13.t_info = sizeof(IndexTupleData);
 FUNC_2(&VAR_13, VAR_9->topparent);

 if (FUNC_9(VAR_11, (Item) &VAR_13, sizeof(IndexTupleData), VAR_5,
     0, 0) == VAR_4)
  FUNC_20(VAR_3, "could not add dummy high key to half-dead page");

 FUNC_14(VAR_11, VAR_8);
 FUNC_6(VAR_10);
 FUNC_15(VAR_10);
}
