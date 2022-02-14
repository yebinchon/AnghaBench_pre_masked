
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_22__ TYPE_7__ ;
typedef struct TYPE_21__ TYPE_6__ ;
typedef struct TYPE_20__ TYPE_5__ ;
typedef struct TYPE_19__ TYPE_4__ ;
typedef struct TYPE_18__ TYPE_3__ ;
typedef struct TYPE_17__ TYPE_2__ ;
typedef struct TYPE_16__ TYPE_1__ ;


struct TYPE_17__ {scalar_t__ level; void* rootblk; } ;
typedef TYPE_2__ xl_btree_newroot ;
struct TYPE_18__ {scalar_t__ version; int last_cleanup_num_heap_tuples; int oldest_btpo_xact; scalar_t__ fastlevel; void* fastroot; scalar_t__ level; void* root; } ;
typedef TYPE_3__ xl_btree_metadata ;
typedef int XLogRecPtr ;
struct TYPE_22__ {scalar_t__ btm_version; int btm_last_cleanup_num_heap_tuples; int btm_oldest_btpo_xact; scalar_t__ btm_level; scalar_t__ btm_fastlevel; void* btm_fastroot; void* btm_root; } ;
struct TYPE_16__ {scalar_t__ level; } ;
struct TYPE_21__ {int btpo_flags; TYPE_1__ btpo; scalar_t__ btpo_cycleid; int btpo_next; int btpo_prev; } ;
struct TYPE_20__ {int t_info; } ;
struct TYPE_19__ {int pd_upper; int pd_special; } ;
typedef int Size ;
typedef int Relation ;
typedef TYPE_4__* PageHeader ;
typedef scalar_t__ Page ;
typedef int ItemId ;
typedef int Item ;
typedef int IndexTupleData ;
typedef TYPE_5__* IndexTuple ;
typedef int Buffer ;
typedef void* BlockNumber ;
typedef TYPE_6__* BTPageOpaque ;
typedef TYPE_7__ BTMetaPageData ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 TYPE_7__* FUNC_1 (scalar_t__) ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int FUNC_2 (TYPE_5__*,void*) ;
 scalar_t__ FUNC_3 (TYPE_5__*,int ) ;
 int FUNC_4 (TYPE_5__*,int ) ;
 void* FUNC_5 (int ) ;
 scalar_t__ FUNC_6 (int ) ;
 TYPE_5__* FUNC_7 (TYPE_5__*) ;
 int FUNC_8 () ;
 scalar_t__ FUNC_9 (int ) ;
 scalar_t__ VAR_5 ;
 int FUNC_10 (int ) ;
 int FUNC_11 (int ) ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_12 (TYPE_6__*) ;
 int VAR_9 ;
 int VAR_10 ;
 scalar_t__ FUNC_13 (scalar_t__,int ,int,int ,int,int) ;
 scalar_t__ FUNC_14 (scalar_t__,int ) ;
 int FUNC_15 (scalar_t__,int ) ;
 scalar_t__ FUNC_16 (scalar_t__) ;
 int FUNC_17 (scalar_t__,int ) ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int FUNC_18 (int ) ;
 scalar_t__ FUNC_19 (int ) ;
 int FUNC_20 () ;
 int VAR_14 ;
 int VAR_15 ;
 int FUNC_21 () ;
 int FUNC_22 (int ,int ) ;
 int FUNC_23 (int,char*,int) ;
 int FUNC_24 (int,int ,int) ;
 int FUNC_25 (char*,int ) ;
 int FUNC_26 (int ,int ,int ) ;
 int FUNC_27 (int ,int ) ;
 int FUNC_28 (scalar_t__) ;
 int FUNC_29 (int ,char*,void*,int ) ;
 scalar_t__ FUNC_30 (int) ;
 int FUNC_31 (TYPE_5__*) ;

__attribute__((used)) static Buffer
FUNC_32(Relation VAR_16, Buffer VAR_17, Buffer VAR_18)
{
 Buffer VAR_19;
 Page VAR_20,
    VAR_21;
 BlockNumber VAR_22,
    VAR_23;
 BlockNumber VAR_24;
 BTPageOpaque VAR_25;
 BTPageOpaque VAR_26;
 ItemId VAR_27;
 IndexTuple VAR_28;
 IndexTuple VAR_29;
 Size VAR_30;
 IndexTuple VAR_31;
 Size VAR_32;
 Buffer VAR_33;
 Page VAR_34;
 BTMetaPageData *VAR_35;

 VAR_22 = FUNC_5(VAR_17);
 VAR_23 = FUNC_5(VAR_18);
 VAR_20 = FUNC_6(VAR_17);
 VAR_26 = (BTPageOpaque) FUNC_16(VAR_20);


 VAR_19 = FUNC_26(VAR_16, VAR_9, VAR_4);
 VAR_21 = FUNC_6(VAR_19);
 VAR_24 = FUNC_5(VAR_19);


 VAR_33 = FUNC_26(VAR_16, VAR_2, VAR_4);
 VAR_34 = FUNC_6(VAR_33);
 VAR_35 = FUNC_1(VAR_34);






 VAR_30 = sizeof(IndexTupleData);
 VAR_29 = (IndexTuple) FUNC_30(VAR_30);
 VAR_29->t_info = VAR_30;
 FUNC_2(VAR_29, VAR_22);
 FUNC_4(VAR_29, 0);





 VAR_27 = FUNC_15(VAR_20, VAR_8);
 VAR_32 = FUNC_10(VAR_27);
 VAR_28 = (IndexTuple) FUNC_14(VAR_20, VAR_27);
 VAR_31 = FUNC_7(VAR_28);
 FUNC_2(VAR_31, VAR_23);


 FUNC_20();


 if (VAR_35->btm_version < VAR_3)
  FUNC_28(VAR_34);


 VAR_25 = (BTPageOpaque) FUNC_16(VAR_21);
 VAR_25->btpo_prev = VAR_25->btpo_next = VAR_10;
 VAR_25->btpo_flags = VAR_1;
 VAR_25->btpo.level =
  ((BTPageOpaque) FUNC_16(VAR_20))->btpo.level + 1;
 VAR_25->btpo_cycleid = 0;


 VAR_35->btm_root = VAR_24;
 VAR_35->btm_level = VAR_25->btpo.level;
 VAR_35->btm_fastroot = VAR_24;
 VAR_35->btm_fastlevel = VAR_25->btpo.level;
 FUNC_0(FUNC_3(VAR_29, VAR_16) == 0);
 if (FUNC_13(VAR_21, (Item) VAR_29, VAR_30, VAR_8,
     0, 0) == VAR_5)
  FUNC_29(VAR_6, "failed to add leftkey to new root page"
    " while splitting block %u of index \"%s\"",
    FUNC_5(VAR_17), FUNC_18(VAR_16));




 FUNC_0(FUNC_3(VAR_31, VAR_16) > 0);
 FUNC_0(FUNC_3(VAR_31, VAR_16) <=
     FUNC_9(VAR_16));
 if (FUNC_13(VAR_21, (Item) VAR_31, VAR_32, VAR_7,
     0, 0) == VAR_5)
  FUNC_29(VAR_6, "failed to add rightkey to new root page"
    " while splitting block %u of index \"%s\"",
    FUNC_5(VAR_17), FUNC_18(VAR_16));


 FUNC_0(FUNC_12(VAR_26));
 VAR_26->btpo_flags &= ~VAR_0;
 FUNC_11(VAR_17);

 FUNC_11(VAR_19);
 FUNC_11(VAR_33);


 if (FUNC_19(VAR_16))
 {
  xl_btree_newroot VAR_36;
  XLogRecPtr VAR_37;
  xl_btree_metadata VAR_38;

  VAR_36.rootblk = VAR_24;
  VAR_36.level = VAR_35->btm_level;

  FUNC_21();
  FUNC_25((char *) &VAR_36, VAR_14);

  FUNC_24(0, VAR_19, VAR_12);
  FUNC_24(1, VAR_17, VAR_11);
  FUNC_24(2, VAR_33, VAR_12 | VAR_11);

  FUNC_0(VAR_35->btm_version >= VAR_3);
  VAR_38.version = VAR_35->btm_version;
  VAR_38.root = VAR_24;
  VAR_38.level = VAR_35->btm_level;
  VAR_38.fastroot = VAR_24;
  VAR_38.fastlevel = VAR_35->btm_level;
  VAR_38.oldest_btpo_xact = VAR_35->btm_oldest_btpo_xact;
  VAR_38.last_cleanup_num_heap_tuples = VAR_35->btm_last_cleanup_num_heap_tuples;

  FUNC_23(2, (char *) &VAR_38, sizeof(xl_btree_metadata));





  FUNC_23(0,
       (char *) VAR_21 + ((PageHeader) VAR_21)->pd_upper,
       ((PageHeader) VAR_21)->pd_special -
       ((PageHeader) VAR_21)->pd_upper);

  VAR_37 = FUNC_22(VAR_13, VAR_15);

  FUNC_17(VAR_20, VAR_37);
  FUNC_17(VAR_21, VAR_37);
  FUNC_17(VAR_34, VAR_37);
 }

 FUNC_8();


 FUNC_27(VAR_16, VAR_33);

 FUNC_31(VAR_29);
 FUNC_31(VAR_31);

 return VAR_19;
}
