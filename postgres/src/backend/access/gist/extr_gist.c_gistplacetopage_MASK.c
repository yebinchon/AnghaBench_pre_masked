
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_27__ TYPE_4__ ;
typedef struct TYPE_26__ TYPE_3__ ;
typedef struct TYPE_25__ TYPE_2__ ;
typedef struct TYPE_24__ TYPE_22__ ;
typedef struct TYPE_23__ TYPE_1__ ;


typedef int XLogRecPtr ;
struct TYPE_27__ {void* buf; TYPE_3__* downlink; } ;
struct TYPE_26__ {int t_tid; } ;
struct TYPE_23__ {scalar_t__ blkno; int num; } ;
struct TYPE_25__ {void* buffer; struct TYPE_25__* next; void* page; TYPE_1__ block; scalar_t__ list; TYPE_3__* itup; int lenlist; } ;
struct TYPE_24__ {scalar_t__ rightlink; int flags; } ;
typedef TYPE_2__ SplitedPageLayout ;
typedef int Size ;
typedef int Relation ;
typedef void* Page ;
typedef int OffsetNumber ;
typedef int List ;
typedef int Item ;
typedef TYPE_3__* IndexTuple ;
typedef int GistNSN ;
typedef int GISTSTATE ;
typedef TYPE_4__ GISTPageSplitInfo ;
typedef void* Buffer ;
typedef scalar_t__ BlockNumber ;


 void* FUNC_0 (void*) ;
 void* FUNC_1 (void*) ;
 scalar_t__ FUNC_2 (void*) ;
 int FUNC_3 () ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_4 (void*,int ) ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int FUNC_5 (void*) ;
 scalar_t__ FUNC_6 (void*) ;
 int FUNC_7 (void*) ;
 int FUNC_8 (void*) ;
 TYPE_22__* FUNC_9 (void*) ;
 scalar_t__ FUNC_10 (void*) ;
 scalar_t__ FUNC_11 (void*) ;
 int FUNC_12 (void*,int ) ;
 int FUNC_13 (TYPE_3__*) ;
 int FUNC_14 (TYPE_3__*) ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ FUNC_15 (int *,int *) ;
 int FUNC_16 (int *,scalar_t__) ;
 int FUNC_17 (void*) ;
 int * VAR_8 ;
 scalar_t__ FUNC_18 (int) ;
 scalar_t__ FUNC_19 (void*,int ,int ,int,int,int) ;
 void* FUNC_20 (void*) ;
 int FUNC_21 (void*,int) ;
 int FUNC_22 (void*,int,int ,int ) ;
 int FUNC_23 (void*,void*) ;
 int FUNC_24 (void*,int ) ;
 int FUNC_25 (int ,void*,void*) ;
 int FUNC_26 (int ) ;
 scalar_t__ FUNC_27 (int ) ;
 int FUNC_28 () ;
 int FUNC_29 (void*) ;
 int FUNC_30 (int,int) ;
 int FUNC_31 (int ,char*,...) ;
 int FUNC_32 (int ) ;
 void* FUNC_33 (int ) ;
 TYPE_2__* FUNC_34 (int ,void*,TYPE_3__**,int,int *) ;
 int FUNC_35 (int,TYPE_2__*,scalar_t__,int ,void*,int) ;
 int FUNC_36 (void*,int*,int,TYPE_3__**,int,void*) ;
 TYPE_3__** FUNC_37 (void*,int*) ;
 int FUNC_38 (void*,TYPE_3__**,int,scalar_t__) ;
 scalar_t__ FUNC_39 (TYPE_3__**,int,int *) ;
 TYPE_3__** FUNC_40 (TYPE_3__**,int*,TYPE_3__**,int) ;
 int FUNC_41 (void*,TYPE_3__**,int,int,int ) ;
 int FUNC_42 (int ,void*,void*,int ) ;
 int * FUNC_43 (int *,TYPE_4__*) ;
 int FUNC_44 (TYPE_3__**,TYPE_3__**,int) ;
 void* FUNC_45 (int) ;

bool
FUNC_46(Relation VAR_9, Size VAR_10, GISTSTATE *VAR_11,
    Buffer VAR_12,
    IndexTuple *VAR_13, int VAR_14, OffsetNumber VAR_15,
    BlockNumber *VAR_16,
    Buffer VAR_17,
    List **VAR_18,
    bool VAR_19,
    Relation VAR_20,
    bool VAR_21)
{
 BlockNumber VAR_22 = FUNC_0(VAR_12);
 Page VAR_23 = FUNC_1(VAR_12);
 bool VAR_24 = (FUNC_11(VAR_23)) ? 1 : 0;
 XLogRecPtr VAR_25;
 int VAR_26;
 bool VAR_27;
 if (FUNC_6(VAR_23))
  FUNC_31(VAR_0, "concurrent GiST page split was incomplete");

 *VAR_18 = VAR_8;
 VAR_27 = FUNC_41(VAR_23, VAR_13, VAR_14, VAR_15, VAR_10);





 if (VAR_27 && FUNC_11(VAR_23) && FUNC_10(VAR_23))
 {
  FUNC_42(VAR_9, VAR_23, VAR_12, VAR_20);
  VAR_27 = FUNC_41(VAR_23, VAR_13, VAR_14, VAR_15, VAR_10);
 }

 if (VAR_27)
 {

  IndexTuple *VAR_28;
  int VAR_29;
  SplitedPageLayout *VAR_30 = ((void*)0),
       *VAR_31;
  BlockNumber VAR_32 = VAR_6;
  GistNSN VAR_33 = 0;
  SplitedPageLayout VAR_34;
  bool VAR_35;
  int VAR_36;

  VAR_35 = (VAR_22 == VAR_4);





  VAR_28 = FUNC_37(VAR_23, &VAR_29);
  if (FUNC_18(VAR_15))
  {

   int VAR_37 = VAR_15 - VAR_2;

   VAR_29--;
   if (VAR_37 != VAR_29)
    FUNC_44(VAR_28 + VAR_37, VAR_28 + VAR_37 + 1, sizeof(IndexTuple) * (VAR_29 - VAR_37));
  }
  VAR_28 = FUNC_40(VAR_28, &VAR_29, VAR_13, VAR_14);
  VAR_30 = FUNC_34(VAR_9, VAR_23, VAR_28, VAR_29, VAR_11);




  VAR_36 = 0;
  for (VAR_31 = VAR_30; VAR_31; VAR_31 = VAR_31->next)
   VAR_36++;

  if (VAR_35)
   VAR_36++;
  if (VAR_36 > VAR_3)
   FUNC_31(VAR_0, "GiST page split into too many halves (%d, maximum %d)",
     VAR_36, VAR_3);
  VAR_31 = VAR_30;
  if (!VAR_35)
  {

   VAR_32 = FUNC_9(VAR_23)->rightlink;
   VAR_33 = FUNC_8(VAR_23);

   VAR_30->buffer = VAR_12;
   VAR_30->block.blkno = FUNC_0(VAR_12);
   VAR_30->page = FUNC_20(FUNC_1(VAR_12));


   FUNC_9(VAR_30->page)->flags = (VAR_24) ? VAR_1 : 0;

   VAR_31 = VAR_31->next;
  }
  for (; VAR_31; VAR_31 = VAR_31->next)
  {

   VAR_31->buffer = FUNC_33(VAR_9);
   FUNC_4(VAR_31->buffer, (VAR_24) ? VAR_1 : 0);
   VAR_31->page = FUNC_1(VAR_31->buffer);
   VAR_31->block.blkno = FUNC_0(VAR_31->buffer);
   FUNC_25(VAR_9,
           FUNC_0(VAR_12),
           FUNC_0(VAR_31->buffer));
  }





  for (VAR_31 = VAR_30; VAR_31; VAR_31 = VAR_31->next)
  {
   FUNC_16(&(VAR_31->itup->t_tid), VAR_31->block.blkno);
   FUNC_13(VAR_31->itup);
  }






  if (VAR_35)
  {
   IndexTuple *VAR_38;
   int VAR_39 = 0;
   int VAR_40;

   VAR_34.buffer = VAR_12;
   VAR_34.page = FUNC_20(FUNC_1(VAR_34.buffer));
   FUNC_9(VAR_34.page)->flags = 0;


   for (VAR_31 = VAR_30; VAR_31; VAR_31 = VAR_31->next)
    VAR_39++;
   VAR_38 = FUNC_45(sizeof(IndexTuple) * VAR_39);
   for (VAR_40 = 0, VAR_31 = VAR_30; VAR_31; VAR_31 = VAR_31->next)
    VAR_38[VAR_40++] = VAR_31->itup;

   VAR_34.block.blkno = VAR_4;
   VAR_34.block.num = VAR_39;
   VAR_34.list = FUNC_39(VAR_38, VAR_39,
            &(VAR_34.lenlist));
   VAR_34.itup = ((void*)0);

   VAR_34.next = VAR_30;
   VAR_30 = &VAR_34;
  }
  else
  {

   for (VAR_31 = VAR_30; VAR_31; VAR_31 = VAR_31->next)
   {
    GISTPageSplitInfo *VAR_41 = FUNC_45(sizeof(GISTPageSplitInfo));

    VAR_41->buf = VAR_31->buffer;
    VAR_41->downlink = VAR_31->itup;
    *VAR_18 = FUNC_43(*VAR_18, VAR_41);
   }
  }





  for (VAR_31 = VAR_30; VAR_31; VAR_31 = VAR_31->next)
  {
   char *VAR_42 = (char *) (VAR_31->list);

   for (VAR_26 = 0; VAR_26 < VAR_31->block.num; VAR_26++)
   {
    IndexTuple VAR_43 = (IndexTuple) VAR_42;

    if (FUNC_19(VAR_31->page, (Item) VAR_42, FUNC_14(VAR_43), VAR_26 + VAR_2, 0, 0) == VAR_7)
     FUNC_31(VAR_0, "failed to add item to index page in \"%s\"", FUNC_26(VAR_9));





    if (VAR_16 && FUNC_15(&VAR_43->t_tid, &(*VAR_13)->t_tid))
     *VAR_16 = VAR_31->block.blkno;

    VAR_42 += FUNC_14(VAR_43);
   }


   if (VAR_31->next && VAR_31->block.blkno != VAR_4)
    FUNC_9(VAR_31->page)->rightlink =
     VAR_31->next->block.blkno;
   else
    FUNC_9(VAR_31->page)->rightlink = VAR_32;
   if (VAR_31->next && !VAR_35 && VAR_19)
    FUNC_7(VAR_31->page);
   else
    FUNC_5(VAR_31->page);






   FUNC_12(VAR_31->page, VAR_33);
  }






  if (!VAR_21 && FUNC_27(VAR_9))
   FUNC_30(VAR_36, 1 + VAR_36 * 2);

  FUNC_28();





  for (VAR_31 = VAR_30; VAR_31; VAR_31 = VAR_31->next)
   FUNC_17(VAR_31->buffer);
  if (FUNC_2(VAR_17))
   FUNC_17(VAR_17);





  FUNC_23(VAR_30->page, FUNC_1(VAR_30->buffer));
  VAR_30->page = FUNC_1(VAR_30->buffer);
  if (VAR_21)
   VAR_25 = VAR_5;
  else
  {
   if (FUNC_27(VAR_9))
    VAR_25 = FUNC_35(VAR_24,
            VAR_30, VAR_32, VAR_33, VAR_17,
            VAR_19);
   else
    VAR_25 = FUNC_32(VAR_9);
  }

  for (VAR_31 = VAR_30; VAR_31; VAR_31 = VAR_31->next)
   FUNC_24(VAR_31->page, VAR_25);
  if (VAR_35)
  {
   for (VAR_31 = VAR_30->next; VAR_31; VAR_31 = VAR_31->next)
    FUNC_29(VAR_31->buffer);
  }
 }
 else
 {



  FUNC_28();





  if (FUNC_18(VAR_15))
  {
   if (VAR_14 == 1)
   {

    if (!FUNC_22(VAR_23, VAR_15, (Item) *VAR_13,
            FUNC_14(*VAR_13)))
     FUNC_31(VAR_0, "failed to add item to index page in \"%s\"",
       FUNC_26(VAR_9));
   }
   else
   {

    FUNC_21(VAR_23, VAR_15);
    FUNC_38(VAR_23, VAR_13, VAR_14, VAR_7);
   }
  }
  else
  {

   FUNC_38(VAR_23, VAR_13, VAR_14, VAR_7);
  }

  FUNC_17(VAR_12);

  if (FUNC_2(VAR_17))
   FUNC_17(VAR_17);

  if (VAR_21)
   VAR_25 = VAR_5;
  else
  {
   if (FUNC_27(VAR_9))
   {
    OffsetNumber VAR_44 = 0,
       VAR_45[1];

    if (FUNC_18(VAR_15))
    {
     VAR_45[0] = VAR_15;
     VAR_44 = 1;
    }

    VAR_25 = FUNC_36(VAR_12,
          VAR_45, VAR_44, VAR_13, VAR_14,
          VAR_17);
   }
   else
    VAR_25 = FUNC_32(VAR_9);
  }
  FUNC_24(VAR_23, VAR_25);

  if (VAR_16)
   *VAR_16 = VAR_22;
 }
 if (FUNC_2(VAR_17))
 {
  Page VAR_46 = FUNC_1(VAR_17);

  FUNC_12(VAR_46, VAR_25);
  FUNC_5(VAR_46);

  FUNC_24(VAR_46, VAR_25);
 }

 FUNC_3();

 return VAR_27;
}
