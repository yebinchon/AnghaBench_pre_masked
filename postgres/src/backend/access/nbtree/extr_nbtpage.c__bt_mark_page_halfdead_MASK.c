
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_15__ TYPE_3__ ;
typedef struct TYPE_14__ TYPE_2__ ;
typedef struct TYPE_13__ TYPE_1__ ;


struct TYPE_13__ {scalar_t__ rightblk; int leftblk; scalar_t__ topparent; scalar_t__ leafblk; int poffset; } ;
typedef TYPE_1__ xl_btree_mark_page_halfdead ;
typedef int XLogRecPtr ;
struct TYPE_15__ {scalar_t__ btpo_next; int btpo_prev; int btpo_flags; } ;
struct TYPE_14__ {int t_info; } ;
typedef int Relation ;
typedef int Page ;
typedef int OffsetNumber ;
typedef int ItemId ;
typedef int Item ;
typedef TYPE_2__ IndexTupleData ;
typedef scalar_t__ IndexTuple ;
typedef int Buffer ;
typedef scalar_t__ BlockNumber ;
typedef int BTStack ;
typedef TYPE_3__* BTPageOpaque ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 scalar_t__ FUNC_1 (scalar_t__) ;
 int FUNC_2 (scalar_t__,scalar_t__) ;
 int FUNC_3 (TYPE_2__*,scalar_t__) ;
 scalar_t__ FUNC_4 (int ) ;
 int FUNC_5 (int ) ;
 int VAR_1 ;
 int FUNC_6 () ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_7 (TYPE_2__*) ;
 scalar_t__ VAR_4 ;
 int FUNC_8 (int ) ;
 int FUNC_9 (TYPE_2__*,int ,int) ;
 int FUNC_10 (int ) ;
 scalar_t__ FUNC_11 (TYPE_3__*) ;
 scalar_t__ VAR_5 ;
 int FUNC_12 (TYPE_3__*) ;
 int FUNC_13 (TYPE_3__*) ;
 scalar_t__ FUNC_14 (TYPE_3__*) ;
 int FUNC_15 (TYPE_3__*) ;
 int FUNC_16 (TYPE_3__*) ;
 scalar_t__ FUNC_17 (int ,int ) ;
 int FUNC_18 (int ,int ) ;
 scalar_t__ FUNC_19 (int ) ;
 scalar_t__ FUNC_20 (int ) ;
 int FUNC_21 (int ,int ) ;
 int FUNC_22 (int ,scalar_t__,int ,int ) ;
 int FUNC_23 (int ,int ) ;
 int FUNC_24 (int ,scalar_t__,scalar_t__) ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_25 (int ) ;
 scalar_t__ FUNC_26 (int ) ;
 int FUNC_27 () ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_28 () ;
 int FUNC_29 (int ,int ) ;
 int FUNC_30 (int,int ,int ) ;
 int FUNC_31 (char*,int ) ;
 scalar_t__ FUNC_32 (int ,scalar_t__) ;
 int FUNC_33 (int ,scalar_t__,int ,int *,int *,scalar_t__*,scalar_t__*) ;
 int FUNC_34 (int ,int ) ;
 int FUNC_35 (int ,char*,...) ;
 int FUNC_36 (int ,int ) ;
 int FUNC_37 (int ) ;
 int FUNC_38 (char*,scalar_t__,scalar_t__,scalar_t__,scalar_t__,int ) ;

__attribute__((used)) static bool
FUNC_39(Relation VAR_11, Buffer VAR_12, BTStack VAR_13)
{
 BlockNumber VAR_14;
 BlockNumber VAR_15;
 BlockNumber VAR_16;
 BlockNumber VAR_17;
 ItemId VAR_18;
 Page VAR_19;
 BTPageOpaque VAR_20;
 Buffer VAR_21;
 OffsetNumber VAR_22;
 OffsetNumber VAR_23;
 IndexTuple VAR_24;
 IndexTupleData VAR_25;

 VAR_19 = FUNC_5(VAR_12);
 VAR_20 = (BTPageOpaque) FUNC_20(VAR_19);

 FUNC_0(!FUNC_16(VAR_20) && !FUNC_15(VAR_20) && !FUNC_12(VAR_20) &&
     !FUNC_13(VAR_20) && FUNC_14(VAR_20) &&
     FUNC_11(VAR_20) > FUNC_19(VAR_19));




 VAR_14 = FUNC_4(VAR_12);
 VAR_15 = VAR_20->btpo_next;
 if (FUNC_32(VAR_11, VAR_15))
 {
  FUNC_35(VAR_1, "could not delete page %u because its right sibling %u is half-dead",
    VAR_14, VAR_15);
  return 0;
 }
 VAR_17 = VAR_15;
 VAR_16 = VAR_14;
 if (!FUNC_33(VAR_11, VAR_14, VAR_13,
        &VAR_21, &VAR_22, &VAR_16, &VAR_17))
  return 0;
 VAR_19 = FUNC_5(VAR_21);
 VAR_20 = (BTPageOpaque) FUNC_20(VAR_19);







 VAR_23 = FUNC_10(VAR_22);
 VAR_18 = FUNC_18(VAR_19, VAR_23);
 VAR_24 = (IndexTuple) FUNC_17(VAR_19, VAR_18);
 if (FUNC_1(VAR_24) != VAR_17)
  FUNC_36(VAR_3,
     (FUNC_37(VAR_2),
      FUNC_38("right sibling %u of block %u is not next child %u of block %u in index \"%s\"",
          VAR_17, VAR_16, FUNC_1(VAR_24),
      FUNC_4(VAR_21), FUNC_25(VAR_11))));





 FUNC_24(VAR_11, VAR_14, VAR_15);


 FUNC_27();







 VAR_19 = FUNC_5(VAR_21);
 VAR_20 = (BTPageOpaque) FUNC_20(VAR_19);

 VAR_18 = FUNC_18(VAR_19, VAR_22);
 VAR_24 = (IndexTuple) FUNC_17(VAR_19, VAR_18);
 FUNC_2(VAR_24, VAR_17);

 VAR_23 = FUNC_10(VAR_22);
 FUNC_21(VAR_19, VAR_23);






 VAR_19 = FUNC_5(VAR_12);
 VAR_20 = (BTPageOpaque) FUNC_20(VAR_19);
 VAR_20->btpo_flags |= VAR_0;

 FUNC_0(FUNC_19(VAR_19) == VAR_5);
 FUNC_9(&VAR_25, 0, sizeof(IndexTupleData));
 VAR_25.t_info = sizeof(IndexTupleData);
 if (VAR_16 != VAR_14)
  FUNC_3(&VAR_25, VAR_16);
 else
  FUNC_3(&VAR_25, VAR_4);

 if (!FUNC_22(VAR_19, VAR_5, (Item) &VAR_25,
         FUNC_7(&VAR_25)))
  FUNC_35(VAR_3, "could not overwrite high key in half-dead page");


 FUNC_8(VAR_21);
 FUNC_8(VAR_12);


 if (FUNC_26(VAR_11))
 {
  xl_btree_mark_page_halfdead VAR_26;
  XLogRecPtr VAR_27;

  VAR_26.poffset = VAR_22;
  VAR_26.leafblk = VAR_14;
  if (VAR_16 != VAR_14)
   VAR_26.topparent = VAR_16;
  else
   VAR_26.topparent = VAR_4;

  FUNC_28();
  FUNC_30(0, VAR_12, VAR_7);
  FUNC_30(1, VAR_21, VAR_6);

  VAR_19 = FUNC_5(VAR_12);
  VAR_20 = (BTPageOpaque) FUNC_20(VAR_19);
  VAR_26.leftblk = VAR_20->btpo_prev;
  VAR_26.rightblk = VAR_20->btpo_next;

  FUNC_31((char *) &VAR_26, VAR_9);

  VAR_27 = FUNC_29(VAR_8, VAR_10);

  VAR_19 = FUNC_5(VAR_21);
  FUNC_23(VAR_19, VAR_27);
  VAR_19 = FUNC_5(VAR_12);
  FUNC_23(VAR_19, VAR_27);
 }

 FUNC_6();

 FUNC_34(VAR_11, VAR_21);
 return 1;
}
