
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_15__ TYPE_5__ ;
typedef struct TYPE_14__ TYPE_4__ ;
typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


struct TYPE_12__ {scalar_t__ newitemoff; scalar_t__ firstright; int level; } ;
typedef TYPE_2__ xl_btree_split ;
typedef int uint8 ;
typedef int XLogRecPtr ;
struct TYPE_11__ {int level; } ;
struct TYPE_15__ {int btpo_flags; scalar_t__ btpo_prev; scalar_t__ btpo_cycleid; TYPE_1__ btpo; scalar_t__ btpo_next; } ;
struct TYPE_14__ {scalar_t__ heapkeyspace; } ;
struct TYPE_13__ {int pd_upper; int pd_special; } ;
typedef int Size ;
typedef int Relation ;
typedef TYPE_3__* PageHeader ;
typedef int * Page ;
typedef scalar_t__ OffsetNumber ;
typedef int ItemId ;
typedef int Item ;
typedef scalar_t__ IndexTuple ;
typedef int Buffer ;
typedef scalar_t__ BlockNumber ;
typedef TYPE_4__* BTScanInsert ;
typedef TYPE_5__* BTPageOpaque ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (scalar_t__,int ) ;
 scalar_t__ FUNC_2 (int ) ;
 int * FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 scalar_t__ FUNC_5 (int ) ;
 int FUNC_6 () ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_7 (int ) ;
 int FUNC_8 (int ) ;
 int FUNC_9 (scalar_t__) ;
 int VAR_7 ;
 scalar_t__ VAR_8 ;
 int FUNC_10 (int ) ;
 int FUNC_11 (int) ;
 int FUNC_12 (int ) ;
 scalar_t__ FUNC_13 (scalar_t__) ;
 scalar_t__ FUNC_14 (scalar_t__) ;
 scalar_t__ FUNC_15 (TYPE_5__*) ;
 scalar_t__ VAR_9 ;
 int FUNC_16 (TYPE_5__*) ;
 scalar_t__ VAR_10 ;
 int FUNC_17 (TYPE_5__*) ;
 scalar_t__ FUNC_18 (int *,int ,int,scalar_t__,int,int) ;
 scalar_t__ FUNC_19 (int *,int ) ;
 int FUNC_20 (int *,scalar_t__) ;
 int FUNC_21 (int *) ;
 scalar_t__ FUNC_22 (int *) ;
 scalar_t__ FUNC_23 (int *) ;
 int * FUNC_24 (int *) ;
 int FUNC_25 (int *,int *) ;
 int FUNC_26 (int *,int ) ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int FUNC_27 (int ) ;
 scalar_t__ FUNC_28 (int ) ;
 int FUNC_29 () ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int FUNC_30 () ;
 int FUNC_31 (int ,int ) ;
 int FUNC_32 (int,char*,int) ;
 int FUNC_33 (int,int ,int ) ;
 int FUNC_34 (char*,int ) ;
 scalar_t__ FUNC_35 (int ,int *,scalar_t__,int,scalar_t__,int*) ;
 int FUNC_36 (int ,scalar_t__,int ) ;
 int FUNC_37 (int *,int ) ;
 int FUNC_38 (int *,int,scalar_t__,scalar_t__) ;
 int FUNC_39 (int ,int ) ;
 scalar_t__ FUNC_40 (int ,scalar_t__,scalar_t__,TYPE_4__*) ;
 scalar_t__ FUNC_41 (int ) ;
 int FUNC_42 (int ,char*,scalar_t__,int ) ;
 int FUNC_43 (int ,int ) ;
 int FUNC_44 (int ) ;
 int FUNC_45 (char*,scalar_t__,scalar_t__,scalar_t__,int ) ;
 int FUNC_46 (int *,int ,int ) ;
 int FUNC_47 (scalar_t__) ;

__attribute__((used)) static Buffer
FUNC_48(Relation VAR_17, BTScanInsert VAR_18, Buffer VAR_19, Buffer VAR_20,
    OffsetNumber VAR_21, Size VAR_22, IndexTuple VAR_23)
{
 Buffer VAR_24;
 Page VAR_25;
 Page VAR_26,
    VAR_27;
 BlockNumber VAR_28,
    VAR_29;
 BTPageOpaque VAR_30,
    VAR_31,
    VAR_32;
 Buffer VAR_33 = VAR_7;
 Page VAR_34 = ((void*)0);
 BTPageOpaque VAR_35 = ((void*)0);
 Size VAR_36;
 ItemId VAR_37;
 IndexTuple VAR_38;
 OffsetNumber VAR_39,
    VAR_40;
 OffsetNumber VAR_41;
 OffsetNumber VAR_42;
 OffsetNumber VAR_43;
 bool VAR_44,
    VAR_45;
 IndexTuple VAR_46;
 int VAR_47 = FUNC_7(VAR_17);
 int VAR_48 = FUNC_8(VAR_17);
 VAR_25 = FUNC_3(VAR_19);
 VAR_32 = (BTPageOpaque) FUNC_23(VAR_25);
 VAR_28 = FUNC_2(VAR_19);
 VAR_41 = FUNC_35(VAR_17, VAR_25, VAR_21, VAR_22,
          VAR_23, &VAR_44);


 VAR_26 = FUNC_24(VAR_25);
 FUNC_37(VAR_26, FUNC_4(VAR_19));
 VAR_31 = (BTPageOpaque) FUNC_23(VAR_26);





 VAR_31->btpo_flags = VAR_32->btpo_flags;
 VAR_31->btpo_flags &= ~(VAR_2 | VAR_3 | VAR_0);

 VAR_31->btpo_flags |= VAR_1;
 VAR_31->btpo_prev = VAR_32->btpo_prev;

 VAR_31->btpo.level = VAR_32->btpo.level;







 FUNC_26(VAR_26, FUNC_21(VAR_25));
 VAR_45 = FUNC_16(VAR_32);
 if (!VAR_44 && VAR_21 == VAR_41)
 {

  VAR_36 = VAR_22;
  VAR_38 = VAR_23;
 }
 else
 {

  VAR_37 = FUNC_20(VAR_25, VAR_41);
  VAR_36 = FUNC_10(VAR_37);
  VAR_38 = (IndexTuple) FUNC_19(VAR_25, VAR_37);
 }
 if (VAR_45 && (VAR_18->heapkeyspace || VAR_47 != VAR_48))
 {
  IndexTuple VAR_49;






  if (VAR_44 && VAR_21 == VAR_41)
  {

   VAR_49 = VAR_23;
  }
  else
  {
   OffsetNumber VAR_50;


   VAR_50 = FUNC_14(VAR_41);
   FUNC_0(VAR_50 >= FUNC_15(VAR_32));
   VAR_37 = FUNC_20(VAR_25, VAR_50);
   VAR_49 = (IndexTuple) FUNC_19(VAR_25, VAR_37);
  }

  FUNC_0(VAR_49 != VAR_38);
  VAR_46 = FUNC_40(VAR_17, VAR_49, VAR_38, VAR_18);
  VAR_36 = FUNC_9(VAR_46);
  VAR_36 = FUNC_11(VAR_36);
 }
 else
  VAR_46 = VAR_38;




 VAR_39 = VAR_9;

 FUNC_0(FUNC_1(VAR_46, VAR_17) > 0);
 FUNC_0(FUNC_1(VAR_46, VAR_17) <= VAR_48);
 if (FUNC_18(VAR_26, (Item) VAR_46, VAR_36, VAR_39,
     0, 0) == VAR_8)
  FUNC_42(VAR_6, "failed to add hikey to the left sibling"
    " while splitting block %u of index \"%s\"",
    VAR_28, FUNC_27(VAR_17));
 VAR_39 = FUNC_13(VAR_39);

 if (VAR_46 != VAR_38)
  FUNC_47(VAR_46);
 VAR_24 = FUNC_36(VAR_17, VAR_10, VAR_4);
 VAR_27 = FUNC_3(VAR_24);
 VAR_29 = FUNC_2(VAR_24);

 VAR_30 = (BTPageOpaque) FUNC_23(VAR_27);






 VAR_31->btpo_next = VAR_29;
 VAR_31->btpo_cycleid = FUNC_41(VAR_17);





 VAR_30->btpo_flags = VAR_32->btpo_flags;
 VAR_30->btpo_flags &= ~(VAR_2 | VAR_3 | VAR_0);
 VAR_30->btpo_prev = VAR_28;
 VAR_30->btpo_next = VAR_32->btpo_next;
 VAR_30->btpo.level = VAR_32->btpo.level;
 VAR_30->btpo_cycleid = VAR_31->btpo_cycleid;
 VAR_40 = VAR_9;

 if (!FUNC_17(VAR_32))
 {
  VAR_37 = FUNC_20(VAR_25, VAR_9);
  VAR_36 = FUNC_10(VAR_37);
  VAR_38 = (IndexTuple) FUNC_19(VAR_25, VAR_37);
  FUNC_0(FUNC_1(VAR_38, VAR_17) > 0);
  FUNC_0(FUNC_1(VAR_38, VAR_17) <= VAR_48);
  if (FUNC_18(VAR_27, (Item) VAR_38, VAR_36, VAR_40,
      0, 0) == VAR_8)
  {
   FUNC_46(VAR_27, 0, FUNC_4(VAR_24));
   FUNC_42(VAR_6, "failed to add hikey to the right sibling"
     " while splitting block %u of index \"%s\"",
     VAR_28, FUNC_27(VAR_17));
  }
  VAR_40 = FUNC_13(VAR_40);
 }
 VAR_42 = FUNC_22(VAR_25);

 for (VAR_43 = FUNC_15(VAR_32); VAR_43 <= VAR_42; VAR_43 = FUNC_13(VAR_43))
 {
  VAR_37 = FUNC_20(VAR_25, VAR_43);
  VAR_36 = FUNC_10(VAR_37);
  VAR_38 = (IndexTuple) FUNC_19(VAR_25, VAR_37);


  if (VAR_43 == VAR_21)
  {
   if (VAR_44)
   {
    FUNC_0(VAR_21 <= VAR_41);
    if (!FUNC_38(VAR_26, VAR_22, VAR_23, VAR_39))
    {
     FUNC_46(VAR_27, 0, FUNC_4(VAR_24));
     FUNC_42(VAR_6, "failed to add new item to the left sibling"
       " while splitting block %u of index \"%s\"",
       VAR_28, FUNC_27(VAR_17));
    }
    VAR_39 = FUNC_13(VAR_39);
   }
   else
   {
    FUNC_0(VAR_21 >= VAR_41);
    if (!FUNC_38(VAR_27, VAR_22, VAR_23, VAR_40))
    {
     FUNC_46(VAR_27, 0, FUNC_4(VAR_24));
     FUNC_42(VAR_6, "failed to add new item to the right sibling"
       " while splitting block %u of index \"%s\"",
       VAR_28, FUNC_27(VAR_17));
    }
    VAR_40 = FUNC_13(VAR_40);
   }
  }


  if (VAR_43 < VAR_41)
  {
   if (!FUNC_38(VAR_26, VAR_36, VAR_38, VAR_39))
   {
    FUNC_46(VAR_27, 0, FUNC_4(VAR_24));
    FUNC_42(VAR_6, "failed to add old item to the left sibling"
      " while splitting block %u of index \"%s\"",
      VAR_28, FUNC_27(VAR_17));
   }
   VAR_39 = FUNC_13(VAR_39);
  }
  else
  {
   if (!FUNC_38(VAR_27, VAR_36, VAR_38, VAR_40))
   {
    FUNC_46(VAR_27, 0, FUNC_4(VAR_24));
    FUNC_42(VAR_6, "failed to add old item to the right sibling"
      " while splitting block %u of index \"%s\"",
      VAR_28, FUNC_27(VAR_17));
   }
   VAR_40 = FUNC_13(VAR_40);
  }
 }


 if (VAR_43 <= VAR_21)
 {





  FUNC_0(!VAR_44);
  if (!FUNC_38(VAR_27, VAR_22, VAR_23, VAR_40))
  {
   FUNC_46(VAR_27, 0, FUNC_4(VAR_24));
   FUNC_42(VAR_6, "failed to add new item to the right sibling"
     " while splitting block %u of index \"%s\"",
     VAR_28, FUNC_27(VAR_17));
  }
  VAR_40 = FUNC_13(VAR_40);
 }
 if (!FUNC_17(VAR_32))
 {
  VAR_33 = FUNC_36(VAR_17, VAR_32->btpo_next, VAR_4);
  VAR_34 = FUNC_3(VAR_33);
  VAR_35 = (BTPageOpaque) FUNC_23(VAR_34);
  if (VAR_35->btpo_prev != VAR_28)
  {
   FUNC_46(VAR_27, 0, FUNC_4(VAR_24));
   FUNC_43(VAR_6,
     (FUNC_44(VAR_5),
      FUNC_45("right sibling's left-link doesn't match: "
          "block %u links to %u instead of expected %u in index \"%s\"",
          VAR_32->btpo_next, VAR_35->btpo_prev, VAR_28,
          FUNC_27(VAR_17))));
  }
  if (VAR_35->btpo_cycleid != VAR_30->btpo_cycleid)
   VAR_30->btpo_flags |= VAR_3;
 }
 FUNC_29();
 FUNC_25(VAR_26, VAR_25);


 FUNC_12(VAR_19);
 FUNC_12(VAR_24);

 if (!FUNC_17(VAR_30))
 {
  VAR_35->btpo_prev = VAR_29;
  FUNC_12(VAR_33);
 }





 if (!VAR_45)
 {
  Page VAR_51 = FUNC_3(VAR_20);
  BTPageOpaque VAR_52 = (BTPageOpaque) FUNC_23(VAR_51);

  VAR_52->btpo_flags &= ~VAR_1;
  FUNC_12(VAR_20);
 }


 if (FUNC_28(VAR_17))
 {
  xl_btree_split VAR_53;
  uint8 VAR_54;
  XLogRecPtr VAR_55;

  VAR_53.level = VAR_30->btpo.level;
  VAR_53.firstright = VAR_41;
  VAR_53.newitemoff = VAR_21;

  FUNC_30();
  FUNC_34((char *) &VAR_53, VAR_14);

  FUNC_33(0, VAR_19, VAR_11);
  FUNC_33(1, VAR_24, VAR_12);

  if (!FUNC_17(VAR_30))
   FUNC_33(2, VAR_33, VAR_11);
  if (FUNC_5(VAR_20))
   FUNC_33(3, VAR_20, VAR_11);
  if (VAR_44)
   FUNC_32(0, (char *) VAR_23, FUNC_11(VAR_22));


  VAR_37 = FUNC_20(VAR_25, VAR_9);
  VAR_38 = (IndexTuple) FUNC_19(VAR_25, VAR_37);
  FUNC_32(0, (char *) VAR_38, FUNC_11(FUNC_9(VAR_38)));
  FUNC_32(1,
       (char *) VAR_27 + ((PageHeader) VAR_27)->pd_upper,
       ((PageHeader) VAR_27)->pd_special - ((PageHeader) VAR_27)->pd_upper);

  VAR_54 = VAR_44 ? VAR_15 : VAR_16;
  VAR_55 = FUNC_31(VAR_13, VAR_54);

  FUNC_26(VAR_25, VAR_55);
  FUNC_26(VAR_27, VAR_55);
  if (!FUNC_17(VAR_30))
  {
   FUNC_26(VAR_34, VAR_55);
  }
  if (!VAR_45)
  {
   FUNC_26(FUNC_3(VAR_20), VAR_55);
  }
 }

 FUNC_6();


 if (!FUNC_17(VAR_30))
  FUNC_39(VAR_17, VAR_33);


 if (!VAR_45)
  FUNC_39(VAR_17, VAR_20);


 return VAR_24;
}
