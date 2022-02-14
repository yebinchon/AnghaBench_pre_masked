
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_17__ TYPE_5__ ;
typedef struct TYPE_16__ TYPE_4__ ;
typedef struct TYPE_15__ TYPE_3__ ;
typedef struct TYPE_14__ TYPE_2__ ;
typedef struct TYPE_13__ TYPE_1__ ;


struct TYPE_14__ {scalar_t__ topparent; scalar_t__ leafrightsib; scalar_t__ leafleftsib; int btpo_xact; scalar_t__ rightsib; scalar_t__ leftsib; } ;
typedef TYPE_2__ xl_btree_unlink_page ;
struct TYPE_15__ {scalar_t__ version; int fastlevel; int last_cleanup_num_heap_tuples; int oldest_btpo_xact; scalar_t__ fastroot; int level; int root; } ;
typedef TYPE_3__ xl_btree_metadata ;
typedef int uint8 ;
typedef int XLogRecPtr ;
struct TYPE_17__ {int btm_fastlevel; scalar_t__ btm_version; int btm_last_cleanup_num_heap_tuples; int btm_oldest_btpo_xact; scalar_t__ btm_fastroot; int btm_level; int btm_root; } ;
struct TYPE_13__ {int level; int xact; } ;
struct TYPE_16__ {scalar_t__ btpo_prev; scalar_t__ btpo_next; TYPE_1__ btpo; int btpo_flags; } ;
typedef int Relation ;
typedef int * Page ;
typedef int ItemId ;
typedef scalar_t__ IndexTuple ;
typedef int Buffer ;
typedef scalar_t__ BlockNumber ;
typedef TYPE_4__* BTPageOpaque ;
typedef TYPE_5__ BTMetaPageData ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 TYPE_5__* FUNC_1 (int *) ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ FUNC_2 (scalar_t__) ;
 scalar_t__ FUNC_3 (scalar_t__) ;
 int FUNC_4 (scalar_t__,scalar_t__) ;
 int VAR_6 ;
 scalar_t__ FUNC_5 (int ) ;
 int * FUNC_6 (int ) ;
 scalar_t__ FUNC_7 (int ) ;
 int FUNC_8 () ;
 int FUNC_9 () ;
 int VAR_7 ;
 int VAR_8 ;
 scalar_t__ VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int FUNC_10 (int ,int ) ;
 int FUNC_11 (int ) ;
 scalar_t__ FUNC_12 (TYPE_4__*) ;
 scalar_t__ VAR_12 ;
 scalar_t__ FUNC_13 (TYPE_4__*) ;
 scalar_t__ FUNC_14 (TYPE_4__*) ;
 scalar_t__ FUNC_15 (TYPE_4__*) ;
 scalar_t__ FUNC_16 (TYPE_4__*) ;
 scalar_t__ VAR_13 ;
 int FUNC_17 (TYPE_4__*) ;
 scalar_t__ FUNC_18 (int *,int ) ;
 int FUNC_19 (int *,scalar_t__) ;
 scalar_t__ FUNC_20 (int *) ;
 scalar_t__ FUNC_21 (int *) ;
 int FUNC_22 (int *,int ) ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int FUNC_23 () ;
 int FUNC_24 (int ) ;
 scalar_t__ FUNC_25 (int ) ;
 int FUNC_26 (int ) ;
 int FUNC_27 () ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int FUNC_28 () ;
 int FUNC_29 (int ,int ) ;
 int FUNC_30 (int,char*,int) ;
 int FUNC_31 (int,int ,int) ;
 int FUNC_32 (char*,int ) ;
 int FUNC_33 (int ,scalar_t__,int ) ;
 int FUNC_34 (int ,int ) ;
 int FUNC_35 (int *) ;
 int FUNC_36 (int ,char*,scalar_t__,int ) ;
 int FUNC_37 (int ,int ) ;
 int FUNC_38 (int ) ;
 int FUNC_39 (char*,scalar_t__,scalar_t__,...) ;

__attribute__((used)) static bool
FUNC_40(Relation VAR_20, Buffer VAR_21, bool *VAR_22)
{
 BlockNumber VAR_23 = FUNC_5(VAR_21);
 BlockNumber VAR_24;
 BlockNumber VAR_25;
 BlockNumber VAR_26;
 BlockNumber VAR_27;
 BlockNumber VAR_28;
 Buffer VAR_29 = VAR_10;
 Buffer VAR_30;
 Buffer VAR_31;
 Buffer VAR_32 = VAR_10;
 Page VAR_33 = ((void*)0);
 BTMetaPageData *VAR_34 = ((void*)0);
 ItemId VAR_35;
 Page VAR_36;
 BTPageOpaque VAR_37;
 bool VAR_38;
 int VAR_39;
 IndexTuple VAR_40;
 BlockNumber VAR_41;

 VAR_36 = FUNC_6(VAR_21);
 VAR_37 = (BTPageOpaque) FUNC_21(VAR_36);

 FUNC_0(FUNC_15(VAR_37) && FUNC_14(VAR_37));




 VAR_35 = FUNC_19(VAR_36, VAR_12);
 VAR_40 = (IndexTuple) FUNC_18(VAR_36, VAR_35);
 VAR_24 = VAR_37->btpo_prev;
 VAR_25 = VAR_37->btpo_next;

 FUNC_10(VAR_21, VAR_6);





 FUNC_8();







 VAR_26 = FUNC_3(VAR_40);

 if (VAR_26 != VAR_9)
 {
  FUNC_0(VAR_26 != VAR_23);


  VAR_30 = FUNC_33(VAR_20, VAR_26, VAR_4);
  VAR_36 = FUNC_6(VAR_30);
  VAR_37 = (BTPageOpaque) FUNC_21(VAR_36);
  VAR_27 = VAR_37->btpo_prev;
  VAR_39 = VAR_37->btpo.level;





  FUNC_10(VAR_30, VAR_6);
 }
 else
 {
  VAR_26 = VAR_23;

  VAR_30 = VAR_21;
  VAR_27 = VAR_24;
  VAR_39 = 0;
 }
 if (VAR_26 != VAR_23)
  FUNC_10(VAR_21, VAR_5);
 if (VAR_27 != VAR_13)
 {
  VAR_29 = FUNC_33(VAR_20, VAR_27, VAR_5);
  VAR_36 = FUNC_6(VAR_29);
  VAR_37 = (BTPageOpaque) FUNC_21(VAR_36);
  while (FUNC_13(VAR_37) || VAR_37->btpo_next != VAR_26)
  {

   VAR_27 = VAR_37->btpo_next;
   FUNC_34(VAR_20, VAR_29);
   if (VAR_27 == VAR_13)
   {
    FUNC_36(VAR_11, "no left sibling (concurrent deletion?) of block %u in \"%s\"",
      VAR_26,
      FUNC_24(VAR_20));
    if (VAR_26 != VAR_23)
    {

     FUNC_26(VAR_30);
     FUNC_34(VAR_20, VAR_21);
    }
    else
    {

     FUNC_26(VAR_21);
    }
    return 0;
   }
   VAR_29 = FUNC_33(VAR_20, VAR_27, VAR_5);
   VAR_36 = FUNC_6(VAR_29);
   VAR_37 = (BTPageOpaque) FUNC_21(VAR_36);
  }
 }
 else
  VAR_29 = VAR_10;






 FUNC_10(VAR_30, VAR_5);
 VAR_36 = FUNC_6(VAR_30);
 VAR_37 = (BTPageOpaque) FUNC_21(VAR_36);






 if (FUNC_17(VAR_37) || FUNC_16(VAR_37) || FUNC_13(VAR_37))
 {
  FUNC_36(VAR_8, "half-dead page changed status unexpectedly in block %u of index \"%s\"",
    VAR_26, FUNC_24(VAR_20));
 }
 if (VAR_37->btpo_prev != VAR_27)
  FUNC_37(VAR_8,
    (FUNC_38(VAR_7),
     FUNC_39("left link changed unexpectedly in block %u of index \"%s\"",
         VAR_26, FUNC_24(VAR_20))));

 if (VAR_26 == VAR_23)
 {
  if (FUNC_12(VAR_37) <= FUNC_20(VAR_36) ||
   !FUNC_15(VAR_37) || !FUNC_14(VAR_37))
   FUNC_36(VAR_8, "half-dead page changed status unexpectedly in block %u of index \"%s\"",
     VAR_26, FUNC_24(VAR_20));
  VAR_41 = VAR_9;
 }
 else
 {
  if (FUNC_12(VAR_37) != FUNC_20(VAR_36) ||
   FUNC_15(VAR_37))
   FUNC_36(VAR_8, "half-dead page changed status unexpectedly in block %u of index \"%s\"",
     VAR_26, FUNC_24(VAR_20));


  VAR_35 = FUNC_19(VAR_36, FUNC_12(VAR_37));
  VAR_41 = FUNC_2((IndexTuple) FUNC_18(VAR_36, VAR_35));
  if (VAR_41 == VAR_23)
   VAR_41 = VAR_9;
 }




 VAR_28 = VAR_37->btpo_next;
 VAR_31 = FUNC_33(VAR_20, VAR_28, VAR_5);
 VAR_36 = FUNC_6(VAR_31);
 VAR_37 = (BTPageOpaque) FUNC_21(VAR_36);
 if (VAR_37->btpo_prev != VAR_26)
  FUNC_37(VAR_8,
    (FUNC_38(VAR_7),
     FUNC_39("right sibling's left-link doesn't match: "
         "block %u links to %u instead of expected %u in index \"%s\"",
         VAR_28, VAR_37->btpo_prev, VAR_26,
         FUNC_24(VAR_20))));
 VAR_38 = FUNC_17(VAR_37);
 *VAR_22 = (FUNC_12(VAR_37) > FUNC_20(VAR_36));
 if (VAR_27 == VAR_13 && VAR_38)
 {
  VAR_36 = FUNC_6(VAR_31);
  VAR_37 = (BTPageOpaque) FUNC_21(VAR_36);
  if (FUNC_17(VAR_37))
  {

   VAR_32 = FUNC_33(VAR_20, VAR_2, VAR_5);
   VAR_33 = FUNC_6(VAR_32);
   VAR_34 = FUNC_1(VAR_33);






   if (VAR_34->btm_fastlevel > VAR_39 + 1)
   {

    FUNC_34(VAR_20, VAR_32);
    VAR_32 = VAR_10;
   }
  }
 }






 FUNC_27();






 if (FUNC_7(VAR_29))
 {
  VAR_36 = FUNC_6(VAR_29);
  VAR_37 = (BTPageOpaque) FUNC_21(VAR_36);
  FUNC_0(VAR_37->btpo_next == VAR_26);
  VAR_37->btpo_next = VAR_28;
 }
 VAR_36 = FUNC_6(VAR_31);
 VAR_37 = (BTPageOpaque) FUNC_21(VAR_36);
 FUNC_0(VAR_37->btpo_prev == VAR_26);
 VAR_37->btpo_prev = VAR_27;






 if (VAR_26 != VAR_23)
  FUNC_4(VAR_40, VAR_41);
 VAR_36 = FUNC_6(VAR_30);
 VAR_37 = (BTPageOpaque) FUNC_21(VAR_36);
 VAR_37->btpo_flags &= ~VAR_1;
 VAR_37->btpo_flags |= VAR_0;
 VAR_37->btpo.xact = FUNC_23();


 if (FUNC_7(VAR_32))
 {

  if (VAR_34->btm_version < VAR_3)
   FUNC_35(VAR_33);
  VAR_34->btm_fastroot = VAR_28;
  VAR_34->btm_fastlevel = VAR_39;
  FUNC_11(VAR_32);
 }


 FUNC_11(VAR_31);
 FUNC_11(VAR_30);
 if (FUNC_7(VAR_29))
  FUNC_11(VAR_29);
 if (VAR_26 != VAR_23)
  FUNC_11(VAR_21);


 if (FUNC_25(VAR_20))
 {
  xl_btree_unlink_page VAR_42;
  xl_btree_metadata VAR_43;
  uint8 VAR_44;
  XLogRecPtr VAR_45;

  FUNC_28();

  FUNC_31(0, VAR_30, VAR_15);
  if (FUNC_7(VAR_29))
   FUNC_31(1, VAR_29, VAR_14);
  FUNC_31(2, VAR_31, VAR_14);
  if (VAR_26 != VAR_23)
   FUNC_31(3, VAR_21, VAR_15);


  VAR_42.leftsib = VAR_27;
  VAR_42.rightsib = VAR_28;
  VAR_42.btpo_xact = VAR_37->btpo.xact;


  VAR_42.leafleftsib = VAR_24;
  VAR_42.leafrightsib = VAR_25;
  VAR_42.topparent = VAR_41;

  FUNC_32((char *) &VAR_42, VAR_17);

  if (FUNC_7(VAR_32))
  {
   FUNC_31(4, VAR_32, VAR_15 | VAR_14);

   FUNC_0(VAR_34->btm_version >= VAR_3);
   VAR_43.version = VAR_34->btm_version;
   VAR_43.root = VAR_34->btm_root;
   VAR_43.level = VAR_34->btm_level;
   VAR_43.fastroot = VAR_34->btm_fastroot;
   VAR_43.fastlevel = VAR_34->btm_fastlevel;
   VAR_43.oldest_btpo_xact = VAR_34->btm_oldest_btpo_xact;
   VAR_43.last_cleanup_num_heap_tuples = VAR_34->btm_last_cleanup_num_heap_tuples;

   FUNC_30(4, (char *) &VAR_43, sizeof(xl_btree_metadata));
   VAR_44 = VAR_19;
  }
  else
   VAR_44 = VAR_18;

  VAR_45 = FUNC_29(VAR_16, VAR_44);

  if (FUNC_7(VAR_32))
  {
   FUNC_22(VAR_33, VAR_45);
  }
  VAR_36 = FUNC_6(VAR_31);
  FUNC_22(VAR_36, VAR_45);
  VAR_36 = FUNC_6(VAR_30);
  FUNC_22(VAR_36, VAR_45);
  if (FUNC_7(VAR_29))
  {
   VAR_36 = FUNC_6(VAR_29);
   FUNC_22(VAR_36, VAR_45);
  }
  if (VAR_26 != VAR_23)
  {
   VAR_36 = FUNC_6(VAR_21);
   FUNC_22(VAR_36, VAR_45);
  }
 }

 FUNC_9();


 if (FUNC_7(VAR_32))
  FUNC_34(VAR_20, VAR_32);


 if (FUNC_7(VAR_29))
  FUNC_34(VAR_20, VAR_29);
 FUNC_34(VAR_20, VAR_31);





 if (VAR_26 != VAR_23)
  FUNC_34(VAR_20, VAR_30);

 return 1;
}
