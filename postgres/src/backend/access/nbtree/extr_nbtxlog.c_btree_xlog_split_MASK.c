
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_16__ TYPE_4__ ;
typedef struct TYPE_15__ TYPE_3__ ;
typedef struct TYPE_14__ TYPE_2__ ;
typedef struct TYPE_13__ TYPE_1__ ;


struct TYPE_14__ {scalar_t__ level; scalar_t__ firstright; scalar_t__ newitemoff; } ;
typedef TYPE_2__ xl_btree_split ;
typedef int XLogRecPtr ;
struct TYPE_15__ {int EndRecPtr; } ;
typedef TYPE_3__ XLogReaderState ;
struct TYPE_13__ {scalar_t__ level; } ;
struct TYPE_16__ {scalar_t__ btpo_prev; scalar_t__ btpo_cycleid; scalar_t__ btpo_next; int btpo_flags; TYPE_1__ btpo; } ;
typedef scalar_t__ Size ;
typedef scalar_t__ Page ;
typedef scalar_t__ OffsetNumber ;
typedef int ItemId ;
typedef int Item ;
typedef int * IndexTuple ;
typedef int Buffer ;
typedef scalar_t__ BlockNumber ;
typedef TYPE_4__* BTPageOpaque ;


 int FUNC_0 (int) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 scalar_t__ FUNC_3 (int ) ;
 int VAR_3 ;
 int FUNC_4 (int *) ;
 scalar_t__ VAR_4 ;
 scalar_t__ FUNC_5 (int ) ;
 scalar_t__ FUNC_6 (int ) ;
 int FUNC_7 (int ) ;
 scalar_t__ FUNC_8 (scalar_t__) ;
 int VAR_5 ;
 scalar_t__ FUNC_9 (TYPE_4__*) ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ FUNC_10 (scalar_t__,int ,scalar_t__,scalar_t__,int,int) ;
 scalar_t__ FUNC_11 (scalar_t__,int ) ;
 int FUNC_12 (scalar_t__,scalar_t__) ;
 scalar_t__ FUNC_13 (scalar_t__) ;
 scalar_t__ FUNC_14 (scalar_t__) ;
 int FUNC_15 (scalar_t__,scalar_t__) ;
 int FUNC_16 (scalar_t__,int ) ;
 int FUNC_17 (int ) ;
 int FUNC_18 (TYPE_3__*,int) ;
 scalar_t__ FUNC_19 (TYPE_3__*,int,int *) ;
 char* FUNC_20 (TYPE_3__*,int,scalar_t__*) ;
 int FUNC_21 (TYPE_3__*,int,int *,int *,scalar_t__*) ;
 scalar_t__ FUNC_22 (TYPE_3__*) ;
 int FUNC_23 (TYPE_3__*,int) ;
 int FUNC_24 (scalar_t__,int ) ;
 int FUNC_25 (scalar_t__,char*,scalar_t__) ;
 int FUNC_26 (int ,char*) ;

__attribute__((used)) static void
FUNC_27(bool VAR_8, XLogReaderState *VAR_9)
{
 XLogRecPtr VAR_10 = VAR_9->EndRecPtr;
 xl_btree_split *VAR_11 = (xl_btree_split *) FUNC_22(VAR_9);
 bool VAR_12 = (VAR_11->level == 0);
 Buffer VAR_13;
 Buffer VAR_14;
 Page VAR_15;
 BTPageOpaque VAR_16;
 char *VAR_17;
 Size VAR_18;
 BlockNumber VAR_19;
 BlockNumber VAR_20;
 BlockNumber VAR_21;

 FUNC_21(VAR_9, 0, ((void*)0), ((void*)0), &VAR_19);
 FUNC_21(VAR_9, 1, ((void*)0), ((void*)0), &VAR_20);
 if (!FUNC_21(VAR_9, 2, ((void*)0), ((void*)0), &VAR_21))
  VAR_21 = VAR_7;






 if (!VAR_12)
  FUNC_23(VAR_9, 3);


 VAR_14 = FUNC_18(VAR_9, 1);
 VAR_17 = FUNC_20(VAR_9, 1, &VAR_18);
 VAR_15 = (Page) FUNC_1(VAR_14);

 FUNC_24(VAR_15, FUNC_2(VAR_14));
 VAR_16 = (BTPageOpaque) FUNC_13(VAR_15);

 VAR_16->btpo_prev = VAR_19;
 VAR_16->btpo_next = VAR_21;
 VAR_16->btpo.level = VAR_11->level;
 VAR_16->btpo_flags = VAR_12 ? VAR_2 : 0;
 VAR_16->btpo_cycleid = 0;

 FUNC_25(VAR_15, VAR_17, VAR_18);

 FUNC_16(VAR_15, VAR_10);
 FUNC_7(VAR_14);


 if (FUNC_19(VAR_9, 0, &VAR_13) == VAR_0)
 {
  Page VAR_22 = (Page) FUNC_1(VAR_13);
  BTPageOpaque VAR_23 = (BTPageOpaque) FUNC_13(VAR_22);
  OffsetNumber VAR_24;
  IndexTuple VAR_25 = ((void*)0),
     VAR_26 = ((void*)0);
  Size VAR_27 = 0,
     VAR_28 = 0;
  Page VAR_29;
  OffsetNumber VAR_30;

  VAR_17 = FUNC_20(VAR_9, 0, &VAR_18);

  if (VAR_8)
  {
   VAR_25 = (IndexTuple) VAR_17;
   VAR_27 = FUNC_6(FUNC_4(VAR_25));
   VAR_17 += VAR_27;
   VAR_18 -= VAR_27;
  }


  VAR_26 = (IndexTuple) VAR_17;
  VAR_28 = FUNC_6(FUNC_4(VAR_26));
  VAR_17 += VAR_28;
  VAR_18 -= VAR_28;

  FUNC_0(VAR_18 == 0);

  VAR_29 = FUNC_14(VAR_22);


  VAR_30 = VAR_6;
  if (FUNC_10(VAR_29, (Item) VAR_26, VAR_28,
      VAR_6, 0, 0) == VAR_4)
   FUNC_26(VAR_5, "failed to add high key to left page after split");
  VAR_30 = FUNC_8(VAR_30);

  for (VAR_24 = FUNC_9(VAR_23); VAR_24 < VAR_11->firstright; VAR_24++)
  {
   ItemId VAR_31;
   Size VAR_32;
   IndexTuple VAR_33;


   if (VAR_8 && VAR_24 == VAR_11->newitemoff)
   {
    if (FUNC_10(VAR_29, (Item) VAR_25, VAR_27, VAR_30,
        0, 0) == VAR_4)
     FUNC_26(VAR_3, "failed to add new item to left page after split");
    VAR_30 = FUNC_8(VAR_30);
   }

   VAR_31 = FUNC_12(VAR_22, VAR_24);
   VAR_32 = FUNC_5(VAR_31);
   VAR_33 = (IndexTuple) FUNC_11(VAR_22, VAR_31);
   if (FUNC_10(VAR_29, (Item) VAR_33, VAR_32, VAR_30,
       0, 0) == VAR_4)
    FUNC_26(VAR_3, "failed to add old item to left page after split");
   VAR_30 = FUNC_8(VAR_30);
  }


  if (VAR_8 && VAR_24 == VAR_11->newitemoff)
  {
   if (FUNC_10(VAR_29, (Item) VAR_25, VAR_27, VAR_30,
       0, 0) == VAR_4)
    FUNC_26(VAR_3, "failed to add new item to left page after split");
   VAR_30 = FUNC_8(VAR_30);
  }

  FUNC_15(VAR_29, VAR_22);


  VAR_23->btpo_flags = VAR_1;
  if (VAR_12)
   VAR_23->btpo_flags |= VAR_2;
  VAR_23->btpo_next = VAR_20;
  VAR_23->btpo_cycleid = 0;

  FUNC_16(VAR_22, VAR_10);
  FUNC_7(VAR_13);
 }





 if (FUNC_3(VAR_13))
  FUNC_17(VAR_13);
 FUNC_17(VAR_14);
 if (VAR_21 != VAR_7)
 {
  Buffer VAR_34;

  if (FUNC_19(VAR_9, 2, &VAR_34) == VAR_0)
  {
   Page VAR_35 = (Page) FUNC_1(VAR_34);
   BTPageOpaque VAR_36 = (BTPageOpaque) FUNC_13(VAR_35);

   VAR_36->btpo_prev = VAR_20;

   FUNC_16(VAR_35, VAR_10);
   FUNC_7(VAR_34);
  }
  if (FUNC_3(VAR_34))
   FUNC_17(VAR_34);
 }
}
