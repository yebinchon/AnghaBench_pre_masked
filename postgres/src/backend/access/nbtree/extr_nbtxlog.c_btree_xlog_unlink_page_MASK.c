
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_18__ TYPE_5__ ;
typedef struct TYPE_17__ TYPE_4__ ;
typedef struct TYPE_16__ TYPE_3__ ;
typedef struct TYPE_15__ TYPE_2__ ;
typedef struct TYPE_14__ TYPE_1__ ;


struct TYPE_15__ {scalar_t__ leftsib; scalar_t__ rightsib; int topparent; scalar_t__ leafrightsib; scalar_t__ leafleftsib; int btpo_xact; } ;
typedef TYPE_2__ xl_btree_unlink_page ;
typedef scalar_t__ uint8 ;
typedef int XLogRecPtr ;
struct TYPE_16__ {int EndRecPtr; } ;
typedef TYPE_3__ XLogReaderState ;
struct TYPE_14__ {scalar_t__ level; int xact; } ;
struct TYPE_18__ {int btpo_flags; scalar_t__ btpo_cycleid; TYPE_1__ btpo; scalar_t__ btpo_next; scalar_t__ btpo_prev; } ;
struct TYPE_17__ {int t_info; } ;
typedef scalar_t__ Page ;
typedef int Item ;
typedef TYPE_4__ IndexTupleData ;
typedef int Buffer ;
typedef scalar_t__ BlockNumber ;
typedef TYPE_5__* BTPageOpaque ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (TYPE_4__*,int ) ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 scalar_t__ FUNC_3 (int ) ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 int FUNC_4 (int ) ;
 int FUNC_5 (TYPE_4__*,int ,int) ;
 int VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ FUNC_6 (scalar_t__,int ,int,int ,int,int) ;
 scalar_t__ FUNC_7 (scalar_t__) ;
 int FUNC_8 (scalar_t__,int ) ;
 int FUNC_9 (int ) ;
 scalar_t__ VAR_8 ;
 int FUNC_10 (TYPE_3__*,int) ;
 scalar_t__ FUNC_11 (TYPE_3__*,int,int *) ;
 scalar_t__ FUNC_12 (TYPE_3__*) ;
 scalar_t__ FUNC_13 (TYPE_3__*,int) ;
 int FUNC_14 (scalar_t__,int ) ;
 int FUNC_15 (TYPE_3__*,int) ;
 int FUNC_16 (int ,char*) ;

__attribute__((used)) static void
FUNC_17(uint8 VAR_9, XLogReaderState *VAR_10)
{
 XLogRecPtr VAR_11 = VAR_10->EndRecPtr;
 xl_btree_unlink_page *VAR_12 = (xl_btree_unlink_page *) FUNC_12(VAR_10);
 BlockNumber VAR_13;
 BlockNumber VAR_14;
 Buffer VAR_15;
 Page VAR_16;
 BTPageOpaque VAR_17;

 VAR_13 = VAR_12->leftsib;
 VAR_14 = VAR_12->rightsib;
 if (FUNC_11(VAR_10, 2, &VAR_15) == VAR_0)
 {
  VAR_16 = (Page) FUNC_1(VAR_15);
  VAR_17 = (BTPageOpaque) FUNC_7(VAR_16);
  VAR_17->btpo_prev = VAR_13;

  FUNC_8(VAR_16, VAR_11);
  FUNC_4(VAR_15);
 }
 if (FUNC_3(VAR_15))
  FUNC_9(VAR_15);


 if (VAR_13 != VAR_7)
 {
  if (FUNC_11(VAR_10, 1, &VAR_15) == VAR_0)
  {
   VAR_16 = (Page) FUNC_1(VAR_15);
   VAR_17 = (BTPageOpaque) FUNC_7(VAR_16);
   VAR_17->btpo_next = VAR_14;

   FUNC_8(VAR_16, VAR_11);
   FUNC_4(VAR_15);
  }
  if (FUNC_3(VAR_15))
   FUNC_9(VAR_15);
 }


 VAR_15 = FUNC_10(VAR_10, 0);
 VAR_16 = (Page) FUNC_1(VAR_15);

 FUNC_14(VAR_16, FUNC_2(VAR_15));
 VAR_17 = (BTPageOpaque) FUNC_7(VAR_16);

 VAR_17->btpo_prev = VAR_13;
 VAR_17->btpo_next = VAR_14;
 VAR_17->btpo.xact = VAR_12->btpo_xact;
 VAR_17->btpo_flags = VAR_1;
 VAR_17->btpo_cycleid = 0;

 FUNC_8(VAR_16, VAR_11);
 FUNC_4(VAR_15);
 FUNC_9(VAR_15);






 if (FUNC_13(VAR_10, 3))
 {




  IndexTupleData VAR_18;

  VAR_15 = FUNC_10(VAR_10, 3);
  VAR_16 = (Page) FUNC_1(VAR_15);

  FUNC_14(VAR_16, FUNC_2(VAR_15));
  VAR_17 = (BTPageOpaque) FUNC_7(VAR_16);

  VAR_17->btpo_flags = VAR_2 | VAR_3;
  VAR_17->btpo_prev = VAR_12->leafleftsib;
  VAR_17->btpo_next = VAR_12->leafrightsib;
  VAR_17->btpo.level = 0;
  VAR_17->btpo_cycleid = 0;


  FUNC_5(&VAR_18, 0, sizeof(IndexTupleData));
  VAR_18.t_info = sizeof(IndexTupleData);
  FUNC_0(&VAR_18, VAR_12->topparent);

  if (FUNC_6(VAR_16, (Item) &VAR_18, sizeof(IndexTupleData), VAR_6,
      0, 0) == VAR_5)
   FUNC_16(VAR_4, "could not add dummy high key to half-dead page");

  FUNC_8(VAR_16, VAR_11);
  FUNC_4(VAR_15);
  FUNC_9(VAR_15);
 }


 if (VAR_9 == VAR_8)
  FUNC_15(VAR_10, 4);
}
