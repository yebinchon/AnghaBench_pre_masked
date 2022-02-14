
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_30__ TYPE_5__ ;
typedef struct TYPE_29__ TYPE_4__ ;
typedef struct TYPE_28__ TYPE_3__ ;
typedef struct TYPE_27__ TYPE_2__ ;
typedef struct TYPE_26__ TYPE_1__ ;


struct TYPE_30__ {void* btpo_next; void* btpo_prev; } ;
struct TYPE_29__ {scalar_t__ btps_lastoff; scalar_t__ btps_level; scalar_t__ btps_full; void* btps_blkno; scalar_t__ btps_page; TYPE_2__* btps_lowkey; struct TYPE_29__* btps_next; } ;
struct TYPE_28__ {int index; int inskey; int btws_pages_alloced; int heap; } ;
struct TYPE_27__ {int t_info; } ;
struct TYPE_26__ {int pd_lower; } ;
typedef scalar_t__ Size ;
typedef TYPE_1__* PageHeader ;
typedef scalar_t__ Page ;
typedef scalar_t__ OffsetNumber ;
typedef int ItemPointerData ;
typedef int ItemIdData ;
typedef int * ItemId ;
typedef int Item ;
typedef int IndexTupleData ;
typedef TYPE_2__* IndexTuple ;
typedef void* BlockNumber ;
typedef TYPE_3__ BTWriteState ;
typedef TYPE_4__ BTPageState ;
typedef TYPE_5__* BTPageOpaque ;


 int FUNC_0 (int) ;
 scalar_t__ FUNC_1 (scalar_t__) ;
 int FUNC_2 (TYPE_2__*,void*) ;
 scalar_t__ FUNC_3 (TYPE_2__*,int ) ;
 int FUNC_4 (TYPE_2__*,int ) ;
 int FUNC_5 () ;
 TYPE_2__* FUNC_6 (TYPE_2__*) ;
 int VAR_0 ;
 scalar_t__ FUNC_7 (int ) ;
 scalar_t__ FUNC_8 (TYPE_2__*) ;
 scalar_t__ FUNC_9 (int *) ;
 int FUNC_10 (int *) ;
 scalar_t__ FUNC_11 (int) ;
 scalar_t__ FUNC_12 (scalar_t__) ;
 scalar_t__ FUNC_13 (scalar_t__) ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ FUNC_14 (TYPE_5__*) ;
 void* VAR_3 ;
 scalar_t__ FUNC_15 (scalar_t__) ;
 scalar_t__ FUNC_16 (scalar_t__,int *) ;
 int * FUNC_17 (scalar_t__,scalar_t__) ;
 scalar_t__ FUNC_18 (scalar_t__) ;
 int FUNC_19 (scalar_t__,scalar_t__,int ,scalar_t__) ;
 scalar_t__ FUNC_20 (scalar_t__) ;
 int FUNC_21 (TYPE_3__*,scalar_t__,void*) ;
 int FUNC_22 (int ,int ,int,scalar_t__,TYPE_2__*) ;
 TYPE_4__* FUNC_23 (TYPE_3__*,scalar_t__) ;
 int FUNC_24 (scalar_t__,scalar_t__,TYPE_2__*,scalar_t__) ;
 TYPE_2__* FUNC_25 (int ,TYPE_2__*,TYPE_2__*,int ) ;
 int FUNC_26 (int ,char*) ;
 TYPE_2__* FUNC_27 (int) ;
 int FUNC_28 (TYPE_2__*) ;
 scalar_t__ FUNC_29 (int) ;

__attribute__((used)) static void
FUNC_30(BTWriteState *VAR_4, BTPageState *VAR_5, IndexTuple VAR_6)
{
 Page VAR_7;
 BlockNumber VAR_8;
 OffsetNumber VAR_9;
 Size VAR_10;
 Size VAR_11;
 bool VAR_12;





 FUNC_5();

 VAR_7 = VAR_5->btps_page;
 VAR_8 = VAR_5->btps_blkno;
 VAR_9 = VAR_5->btps_lastoff;

 VAR_10 = FUNC_15(VAR_7);
 VAR_11 = FUNC_8(VAR_6);
 VAR_11 = FUNC_11(VAR_11);

 VAR_12 = (VAR_5->btps_level == 0);
 if (FUNC_29(VAR_11 > FUNC_1(VAR_7)))
  FUNC_22(VAR_4->index, VAR_4->heap, VAR_12, VAR_7,
        VAR_6);
 if (VAR_10 < VAR_11 + (VAR_12 ? FUNC_11(sizeof(ItemPointerData)) : 0) ||
  (VAR_10 < VAR_5->btps_full && VAR_9 > VAR_1))
 {



  Page VAR_13 = VAR_7;
  BlockNumber VAR_14 = VAR_8;
  ItemId VAR_15;
  ItemId VAR_16;
  IndexTuple VAR_17;


  VAR_7 = FUNC_20(VAR_5->btps_level);


  VAR_8 = VAR_4->btws_pages_alloced++;
  FUNC_0(VAR_9 > VAR_1);
  VAR_15 = FUNC_17(VAR_13, VAR_9);
  VAR_17 = (IndexTuple) FUNC_16(VAR_13, VAR_15);
  FUNC_24(VAR_7, FUNC_9(VAR_15), VAR_17, VAR_1);
  VAR_16 = FUNC_17(VAR_13, VAR_2);
  *VAR_16 = *VAR_15;
  FUNC_10(VAR_15);
  ((PageHeader) VAR_13)->pd_lower -= sizeof(ItemIdData);

  if (VAR_12)
  {
   IndexTuple VAR_18;
   IndexTuple VAR_19;
   VAR_15 = FUNC_17(VAR_13, FUNC_13(VAR_9));
   VAR_18 = (IndexTuple) FUNC_16(VAR_13, VAR_15);

   VAR_19 = FUNC_25(VAR_4->index, VAR_18, VAR_17,
          VAR_4->inskey);
   if (!FUNC_19(VAR_13, VAR_2, (Item) VAR_19,
           FUNC_8(VAR_19)))
    FUNC_26(VAR_0, "failed to add high key to the index page");
   FUNC_28(VAR_19);


   VAR_16 = FUNC_17(VAR_13, VAR_2);
   VAR_17 = (IndexTuple) FUNC_16(VAR_13, VAR_16);
  }





  if (VAR_5->btps_next == ((void*)0))
   VAR_5->btps_next = FUNC_23(VAR_4, VAR_5->btps_level + 1);

  FUNC_0((FUNC_3(VAR_5->btps_lowkey, VAR_4->index) <=
    FUNC_7(VAR_4->index) &&
    FUNC_3(VAR_5->btps_lowkey, VAR_4->index) > 0) ||
      FUNC_14((BTPageOpaque) FUNC_18(VAR_13)));
  FUNC_0(FUNC_3(VAR_5->btps_lowkey, VAR_4->index) == 0 ||
      !FUNC_14((BTPageOpaque) FUNC_18(VAR_13)));
  FUNC_2(VAR_5->btps_lowkey, VAR_14);
  FUNC_30(VAR_4, VAR_5->btps_next, VAR_5->btps_lowkey);
  FUNC_28(VAR_5->btps_lowkey);





  VAR_5->btps_lowkey = FUNC_6(VAR_17);




  {
   BTPageOpaque VAR_20 = (BTPageOpaque) FUNC_18(VAR_13);
   BTPageOpaque VAR_21 = (BTPageOpaque) FUNC_18(VAR_7);

   VAR_20->btpo_next = VAR_8;
   VAR_21->btpo_prev = VAR_14;
   VAR_21->btpo_next = VAR_3;
  }





  FUNC_21(VAR_4, VAR_13, VAR_14);




  VAR_9 = VAR_1;
 }
 if (VAR_9 == VAR_2)
 {
  FUNC_0(VAR_5->btps_lowkey == ((void*)0));
  VAR_5->btps_lowkey = FUNC_27(sizeof(IndexTupleData));
  VAR_5->btps_lowkey->t_info = sizeof(IndexTupleData);
  FUNC_4(VAR_5->btps_lowkey, 0);
 }




 VAR_9 = FUNC_12(VAR_9);
 FUNC_24(VAR_7, VAR_11, VAR_6, VAR_9);

 VAR_5->btps_page = VAR_7;
 VAR_5->btps_blkno = VAR_8;
 VAR_5->btps_lastoff = VAR_9;
}
