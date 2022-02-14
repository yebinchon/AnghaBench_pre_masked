
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_24__ TYPE_5__ ;
typedef struct TYPE_23__ TYPE_4__ ;
typedef struct TYPE_22__ TYPE_3__ ;
typedef struct TYPE_21__ TYPE_2__ ;
typedef struct TYPE_20__ TYPE_1__ ;
typedef struct TYPE_19__ TYPE_16__ ;


typedef int xlrec ;
struct TYPE_20__ {scalar_t__ offnum; int parentBlk; scalar_t__ offnumParent; scalar_t__ offnumNew; int newPage; scalar_t__ nodeI; int stateSrc; } ;
typedef TYPE_1__ spgxlogAddNode ;
typedef int XLogRecPtr ;
struct TYPE_24__ {scalar_t__ offnum; scalar_t__ buffer; scalar_t__ blkno; int page; scalar_t__ node; } ;
struct TYPE_23__ {scalar_t__ size; } ;
struct TYPE_22__ {scalar_t__ size; } ;
struct TYPE_21__ {scalar_t__ isBuild; } ;
struct TYPE_19__ {int nRedirection; int nPlaceholder; } ;
typedef TYPE_2__ SpGistState ;
typedef TYPE_3__* SpGistInnerTuple ;
typedef TYPE_4__* SpGistDeadTuple ;
typedef TYPE_5__ SPPageDesc ;
typedef int Relation ;
typedef int ItemIdData ;
typedef int Item ;
typedef int Datum ;


 int FUNC_0 (int) ;
 scalar_t__ FUNC_1 (scalar_t__) ;
 int FUNC_2 (scalar_t__) ;
 int FUNC_3 () ;
 int VAR_0 ;
 int FUNC_4 (scalar_t__) ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 void* VAR_3 ;
 int FUNC_5 (scalar_t__) ;
 scalar_t__ FUNC_6 (int ,int ,scalar_t__,scalar_t__,int,int) ;
 scalar_t__ FUNC_7 (int ) ;
 int FUNC_8 (int ,scalar_t__) ;
 int FUNC_9 (int ,int ) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ FUNC_10 (int ) ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_11 () ;
 int FUNC_12 (TYPE_2__*,int ) ;
 scalar_t__ FUNC_13 (scalar_t__) ;
 scalar_t__ FUNC_14 (int ,int ,int,int*) ;
 scalar_t__ FUNC_15 (TYPE_2__*,int ,int ,int,int *,int) ;
 TYPE_16__* FUNC_16 (int ) ;
 int FUNC_17 (int ) ;
 int FUNC_18 (int ,scalar_t__) ;
 int FUNC_19 (scalar_t__) ;
 int VAR_9 ;
 int FUNC_20 () ;
 int FUNC_21 (int ,int ) ;
 int FUNC_22 (int,scalar_t__,int) ;
 int FUNC_23 (char*,int) ;
 TYPE_3__* FUNC_24 (TYPE_2__*,TYPE_3__*,int ,int) ;
 int FUNC_25 (int ,char*,...) ;
 int FUNC_26 (int ,TYPE_5__*,scalar_t__,scalar_t__) ;
 TYPE_4__* FUNC_27 (TYPE_2__*,int ,scalar_t__,void*) ;

__attribute__((used)) static void
FUNC_28(Relation VAR_10, SpGistState *VAR_11,
     SpGistInnerTuple VAR_12,
     SPPageDesc *VAR_13, SPPageDesc *VAR_14,
     int VAR_15, Datum VAR_16)
{
 SpGistInnerTuple VAR_17;
 spgxlogAddNode VAR_18;


 FUNC_0(!FUNC_17(VAR_13->page));


 VAR_17 = FUNC_24(VAR_11, VAR_12, VAR_16, VAR_15);


 FUNC_12(VAR_11, VAR_18.stateSrc);
 VAR_18.offnum = VAR_13->offnum;


 VAR_18.parentBlk = -1;
 VAR_18.offnumParent = VAR_3;
 VAR_18.nodeI = 0;


 VAR_18.offnumNew = VAR_3;
 VAR_18.newPage = 0;

 if (FUNC_7(VAR_13->page) >=
  VAR_17->size - VAR_12->size)
 {



  FUNC_11();

  FUNC_8(VAR_13->page, VAR_13->offnum);
  if (FUNC_6(VAR_13->page,
      (Item) VAR_17, VAR_17->size,
      VAR_13->offnum, 0, 0) != VAR_13->offnum)
   FUNC_25(VAR_0, "failed to add item of size %u to SPGiST index page",
     VAR_17->size);

  FUNC_5(VAR_13->buffer);

  if (FUNC_10(VAR_10) && !VAR_11->isBuild)
  {
   XLogRecPtr VAR_19;

   FUNC_20();
   FUNC_23((char *) &VAR_18, sizeof(VAR_18));
   FUNC_23((char *) VAR_17, VAR_17->size);

   FUNC_22(0, VAR_13->buffer, VAR_4);

   VAR_19 = FUNC_21(VAR_6, VAR_9);

   FUNC_9(VAR_13->page, VAR_19);
  }

  FUNC_3();
 }
 else
 {



  SpGistDeadTuple VAR_20;
  SPPageDesc VAR_21;






  if (FUNC_13(VAR_13->blkno))
   FUNC_25(VAR_0, "cannot enlarge root tuple any more");
  FUNC_0(VAR_14->buffer != VAR_2);

  VAR_21 = *VAR_13;

  VAR_18.offnumParent = VAR_14->offnum;
  VAR_18.nodeI = VAR_14->node;





  VAR_13->buffer = FUNC_14(VAR_10,
            FUNC_4(VAR_13->blkno),
            VAR_17->size + sizeof(ItemIdData),
            &VAR_18.newPage);
  VAR_13->blkno = FUNC_1(VAR_13->buffer);
  VAR_13->page = FUNC_2(VAR_13->buffer);
  if (VAR_13->blkno == VAR_21.blkno)
   FUNC_25(VAR_0, "SPGiST new buffer shouldn't be same as old buffer");





  if (VAR_14->buffer == VAR_21.buffer)
   VAR_18.parentBlk = 0;
  else if (VAR_14->buffer == VAR_13->buffer)
   VAR_18.parentBlk = 1;
  else
   VAR_18.parentBlk = 2;

  FUNC_11();


  VAR_18.offnumNew = VAR_13->offnum =
   FUNC_15(VAR_11, VAR_13->page,
         (Item) VAR_17, VAR_17->size,
         ((void*)0), 0);

  FUNC_5(VAR_13->buffer);


  FUNC_26(VAR_10, VAR_14, VAR_13->blkno, VAR_13->offnum);
  if (VAR_11->isBuild)
   VAR_20 = FUNC_27(VAR_11, VAR_7,
          VAR_1, VAR_3);
  else
   VAR_20 = FUNC_27(VAR_11, VAR_8,
          VAR_13->blkno, VAR_13->offnum);

  FUNC_8(VAR_21.page, VAR_21.offnum);
  if (FUNC_6(VAR_21.page, (Item) VAR_20, VAR_20->size,
      VAR_21.offnum,
      0, 0) != VAR_21.offnum)
   FUNC_25(VAR_0, "failed to add item of size %u to SPGiST index page",
     VAR_20->size);

  if (VAR_11->isBuild)
   FUNC_16(VAR_21.page)->nPlaceholder++;
  else
   FUNC_16(VAR_21.page)->nRedirection++;

  FUNC_5(VAR_21.buffer);

  if (FUNC_10(VAR_10) && !VAR_11->isBuild)
  {
   XLogRecPtr VAR_22;
   int VAR_23;

   FUNC_20();


   FUNC_22(0, VAR_21.buffer, VAR_4);

   VAR_23 = VAR_4;
   if (VAR_18.newPage)
    VAR_23 |= VAR_5;
   FUNC_22(1, VAR_13->buffer, VAR_23);

   if (VAR_18.parentBlk == 2)
    FUNC_22(2, VAR_14->buffer, VAR_4);

   FUNC_23((char *) &VAR_18, sizeof(VAR_18));
   FUNC_23((char *) VAR_17, VAR_17->size);

   VAR_22 = FUNC_21(VAR_6, VAR_9);


   FUNC_9(VAR_13->page, VAR_22);
   FUNC_9(VAR_14->page, VAR_22);
   FUNC_9(VAR_21.page, VAR_22);
  }

  FUNC_3();


  if (VAR_21.buffer != VAR_13->buffer &&
   VAR_21.buffer != VAR_14->buffer)
  {
   FUNC_18(VAR_10, VAR_21.buffer);
   FUNC_19(VAR_21.buffer);
  }
 }
}
