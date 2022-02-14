
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_17__ TYPE_5__ ;
typedef struct TYPE_16__ TYPE_4__ ;
typedef struct TYPE_15__ TYPE_3__ ;
typedef struct TYPE_14__ TYPE_2__ ;
typedef struct TYPE_13__ TYPE_1__ ;


struct TYPE_14__ {scalar_t__ version; scalar_t__ fastlevel; int last_cleanup_num_heap_tuples; int oldest_btpo_xact; int fastroot; int level; int root; } ;
typedef TYPE_2__ xl_btree_metadata ;
struct TYPE_15__ {scalar_t__ offnum; } ;
typedef TYPE_3__ xl_btree_insert ;
typedef int uint8 ;
typedef int XLogRecPtr ;
struct TYPE_17__ {scalar_t__ btm_fastlevel; scalar_t__ btm_version; int btm_last_cleanup_num_heap_tuples; int btm_oldest_btpo_xact; int btm_fastroot; int btm_level; int btm_root; } ;
struct TYPE_13__ {scalar_t__ level; } ;
struct TYPE_16__ {int btpo_flags; TYPE_1__ btpo; } ;
typedef scalar_t__ Size ;
typedef int Relation ;
typedef int * Page ;
typedef scalar_t__ OffsetNumber ;
typedef scalar_t__ IndexTuple ;
typedef int Buffer ;
typedef int BlockNumber ;
typedef int BTStack ;
typedef int BTScanInsert ;
typedef TYPE_4__* BTPageOpaque ;
typedef TYPE_5__ BTMetaPageData ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 TYPE_5__* FUNC_1 (int *) ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_2 (scalar_t__,int ) ;
 scalar_t__ FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 int * FUNC_5 (int ) ;
 scalar_t__ FUNC_6 (int ) ;
 int FUNC_7 () ;
 int VAR_5 ;
 scalar_t__ FUNC_8 (int ) ;
 scalar_t__ FUNC_9 (int ) ;
 int FUNC_10 (scalar_t__) ;
 int VAR_6 ;
 int VAR_7 ;
 scalar_t__ FUNC_11 (scalar_t__) ;
 int FUNC_12 (int ) ;
 int VAR_8 ;
 scalar_t__ FUNC_13 (TYPE_4__*) ;
 int FUNC_14 (TYPE_4__*) ;
 int FUNC_15 (TYPE_4__*) ;
 int FUNC_16 (TYPE_4__*) ;
 scalar_t__ FUNC_17 (TYPE_4__*) ;
 scalar_t__ FUNC_18 (TYPE_4__*) ;
 scalar_t__ FUNC_19 (int *) ;
 scalar_t__ FUNC_20 (int *) ;
 int FUNC_21 (int *,int ) ;
 int FUNC_22 (int ,int ,int ) ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int FUNC_23 (int ) ;
 int FUNC_24 (int ) ;
 scalar_t__ FUNC_25 (int ) ;
 int FUNC_26 (int ,int ) ;
 int FUNC_27 () ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int FUNC_28 () ;
 int FUNC_29 (int ,int ) ;
 int FUNC_30 (int,char*,int) ;
 int FUNC_31 (int,int ,int) ;
 int FUNC_32 (char*,int ) ;
 int FUNC_33 (int ,int ,int ) ;
 scalar_t__ FUNC_34 (int ) ;
 int FUNC_35 (int ,int ,int ,int ,int,int) ;
 int FUNC_36 (int *,scalar_t__,scalar_t__,scalar_t__) ;
 int FUNC_37 (int ,int ) ;
 int FUNC_38 (int ,int ,int ,int ,scalar_t__,scalar_t__,scalar_t__) ;
 int FUNC_39 (int *) ;
 int FUNC_40 (int ,char*,int ,...) ;

__attribute__((used)) static void
FUNC_41(Relation VAR_16,
      BTScanInsert VAR_17,
      Buffer VAR_18,
      Buffer VAR_19,
      BTStack VAR_20,
      IndexTuple VAR_21,
      OffsetNumber VAR_22,
      bool VAR_23)
{
 Page VAR_24;
 BTPageOpaque VAR_25;
 Size VAR_26;

 VAR_24 = FUNC_5(VAR_18);
 VAR_25 = (BTPageOpaque) FUNC_20(VAR_24);


 FUNC_0(FUNC_15(VAR_25) == !FUNC_6(VAR_19));

 FUNC_0(!FUNC_15(VAR_25) ||
     FUNC_2(VAR_21, VAR_16) ==
     FUNC_8(VAR_16));
 FUNC_0(FUNC_15(VAR_25) ||
     FUNC_2(VAR_21, VAR_16) <=
     FUNC_9(VAR_16));


 if (FUNC_14(VAR_25))
  FUNC_40(VAR_5, "cannot insert to incompletely split page %u",
    FUNC_4(VAR_18));

 VAR_26 = FUNC_10(VAR_21);
 VAR_26 = FUNC_11(VAR_26);
 if (FUNC_19(VAR_24) < VAR_26)
 {
  bool VAR_27 = FUNC_16(VAR_25);
  bool VAR_28 = FUNC_17(VAR_25) && FUNC_18(VAR_25);
  Buffer VAR_29;
  FUNC_0(!(FUNC_15(VAR_25) &&
     FUNC_3(FUNC_24(VAR_16))));


  VAR_29 = FUNC_38(VAR_16, VAR_17, VAR_18, VAR_19, VAR_22, VAR_26, VAR_21);
  FUNC_22(VAR_16,
          FUNC_4(VAR_18),
          FUNC_4(VAR_29));
  FUNC_35(VAR_16, VAR_18, VAR_29, VAR_20, VAR_27, VAR_28);
 }
 else
 {
  Buffer VAR_30 = VAR_7;
  Page VAR_31 = ((void*)0);
  BTMetaPageData *VAR_32 = ((void*)0);
  OffsetNumber VAR_33;
  BlockNumber VAR_34;
  BlockNumber VAR_35 = VAR_6;

  VAR_33 = VAR_22;
  VAR_34 = FUNC_4(VAR_18);
  if (VAR_23)
  {
   FUNC_0(!FUNC_15(VAR_25));

   VAR_30 = FUNC_33(VAR_16, VAR_2, VAR_4);
   VAR_31 = FUNC_5(VAR_30);
   VAR_32 = FUNC_1(VAR_31);

   if (VAR_32->btm_fastlevel >= VAR_25->btpo.level)
   {

    FUNC_37(VAR_16, VAR_30);
    VAR_30 = VAR_7;
   }
  }
  if (!FUNC_15(VAR_25) && VAR_22 == FUNC_13(VAR_25))
   FUNC_40(VAR_5, "cannot insert second negative infinity item in block %u of index \"%s\"",
     VAR_34, FUNC_23(VAR_16));


  FUNC_27();

  if (!FUNC_36(VAR_24, VAR_26, VAR_21, VAR_22))
   FUNC_40(VAR_8, "failed to add new item to block %u in index \"%s\"",
     VAR_34, FUNC_23(VAR_16));

  FUNC_12(VAR_18);

  if (FUNC_6(VAR_30))
  {

   if (VAR_32->btm_version < VAR_3)
    FUNC_39(VAR_31);
   VAR_32->btm_fastroot = VAR_34;
   VAR_32->btm_fastlevel = VAR_25->btpo.level;
   FUNC_12(VAR_30);
  }


  if (FUNC_6(VAR_19))
  {
   Page VAR_36 = FUNC_5(VAR_19);
   BTPageOpaque VAR_37 = (BTPageOpaque) FUNC_20(VAR_36);

   FUNC_0(FUNC_14(VAR_37));
   VAR_37->btpo_flags &= ~VAR_0;
   FUNC_12(VAR_19);
  }







  if (FUNC_18(VAR_25) && FUNC_15(VAR_25) && !FUNC_16(VAR_25))
   VAR_35 = FUNC_4(VAR_18);


  if (FUNC_25(VAR_16))
  {
   xl_btree_insert VAR_38;
   xl_btree_metadata VAR_39;
   uint8 VAR_40;
   XLogRecPtr VAR_41;

   VAR_38.offnum = VAR_33;

   FUNC_28();
   FUNC_32((char *) &VAR_38, VAR_12);

   if (FUNC_15(VAR_25))
    VAR_40 = VAR_13;
   else
   {




    FUNC_31(1, VAR_19, VAR_9);

    VAR_40 = VAR_15;
   }

   if (FUNC_6(VAR_30))
   {
    FUNC_0(VAR_32->btm_version >= VAR_3);
    VAR_39.version = VAR_32->btm_version;
    VAR_39.root = VAR_32->btm_root;
    VAR_39.level = VAR_32->btm_level;
    VAR_39.fastroot = VAR_32->btm_fastroot;
    VAR_39.fastlevel = VAR_32->btm_fastlevel;
    VAR_39.oldest_btpo_xact = VAR_32->btm_oldest_btpo_xact;
    VAR_39.last_cleanup_num_heap_tuples =
     VAR_32->btm_last_cleanup_num_heap_tuples;

    FUNC_31(2, VAR_30, VAR_10 | VAR_9);
    FUNC_30(2, (char *) &VAR_39, sizeof(xl_btree_metadata));

    VAR_40 = VAR_14;
   }

   FUNC_31(0, VAR_18, VAR_9);
   FUNC_30(0, (char *) VAR_21, FUNC_10(VAR_21));

   VAR_41 = FUNC_29(VAR_11, VAR_40);

   if (FUNC_6(VAR_30))
   {
    FUNC_21(VAR_31, VAR_41);
   }
   if (FUNC_6(VAR_19))
   {
    FUNC_21(FUNC_5(VAR_19), VAR_41);
   }

   FUNC_21(VAR_24, VAR_41);
  }

  FUNC_7();


  if (FUNC_6(VAR_30))
   FUNC_37(VAR_16, VAR_30);
  if (FUNC_6(VAR_19))
   FUNC_37(VAR_16, VAR_19);
  FUNC_37(VAR_16, VAR_18);
  if (FUNC_3(VAR_35) &&
   FUNC_34(VAR_16) >= VAR_1)
   FUNC_26(VAR_16, VAR_35);
 }
}
