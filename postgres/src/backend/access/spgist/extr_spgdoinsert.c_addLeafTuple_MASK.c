
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_4__ ;
typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


typedef int xlrec ;
struct TYPE_11__ {int newPage; int storesNulls; scalar_t__ offnumLeaf; scalar_t__ offnumHeadLeaf; scalar_t__ offnumParent; scalar_t__ nodeI; } ;
typedef TYPE_1__ spgxlogAddLeaf ;
typedef int XLogRecPtr ;
struct TYPE_14__ {scalar_t__ offnum; scalar_t__ buffer; int page; int blkno; scalar_t__ node; } ;
struct TYPE_13__ {int size; scalar_t__ tupstate; void* nextOffset; } ;
struct TYPE_12__ {int isBuild; } ;
typedef TYPE_2__ SpGistState ;
typedef TYPE_3__* SpGistLeafTuple ;
typedef TYPE_4__ SPPageDesc ;
typedef int Relation ;
typedef void* OffsetNumber ;
typedef int Item ;


 int FUNC_0 () ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_1 (scalar_t__) ;
 scalar_t__ FUNC_2 (int ,int ,int,scalar_t__,int,int) ;
 scalar_t__ FUNC_3 (int ,int ) ;
 int FUNC_4 (int ,scalar_t__) ;
 int FUNC_5 (int ,scalar_t__) ;
 int FUNC_6 (int ,int ) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ FUNC_7 (int ) ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 int FUNC_8 () ;
 scalar_t__ FUNC_9 (int ) ;
 void* FUNC_10 (TYPE_2__*,int ,int ,int,int *,int) ;
 int VAR_8 ;
 int FUNC_11 () ;
 int FUNC_12 (int ,int ) ;
 int FUNC_13 (int,scalar_t__,int) ;
 int FUNC_14 (char*,int) ;
 int FUNC_15 (int ,char*,int) ;
 int FUNC_16 (int ,TYPE_4__*,int ,scalar_t__) ;

__attribute__((used)) static void
FUNC_17(Relation VAR_9, SpGistState *VAR_10, SpGistLeafTuple VAR_11,
    SPPageDesc *VAR_12, SPPageDesc *VAR_13, bool VAR_14, bool VAR_15)
{
 spgxlogAddLeaf VAR_16;

 VAR_16.newPage = VAR_15;
 VAR_16.storesNulls = VAR_14;


 VAR_16.offnumLeaf = VAR_2;
 VAR_16.offnumHeadLeaf = VAR_2;
 VAR_16.offnumParent = VAR_2;
 VAR_16.nodeI = 0;

 FUNC_8();

 if (VAR_12->offnum == VAR_2 ||
  FUNC_9(VAR_12->blkno))
 {

  VAR_11->nextOffset = VAR_2;
  VAR_12->offnum = FUNC_10(VAR_10, VAR_12->page,
              (Item) VAR_11, VAR_11->size,
              ((void*)0), 0);

  VAR_16.offnumLeaf = VAR_12->offnum;


  if (VAR_13->buffer != VAR_1)
  {
   VAR_16.offnumParent = VAR_13->offnum;
   VAR_16.nodeI = VAR_13->node;

   FUNC_16(VAR_9, VAR_13, VAR_12->blkno, VAR_12->offnum);
  }
 }
 else
 {
  SpGistLeafTuple VAR_17;
  OffsetNumber VAR_18;

  VAR_17 = (SpGistLeafTuple) FUNC_3(VAR_12->page,
            FUNC_4(VAR_12->page, VAR_12->offnum));
  if (VAR_17->tupstate == VAR_7)
  {
   VAR_11->nextOffset = VAR_17->nextOffset;
   VAR_18 = FUNC_10(VAR_10, VAR_12->page,
            (Item) VAR_11, VAR_11->size,
            ((void*)0), 0);





   VAR_17 = (SpGistLeafTuple) FUNC_3(VAR_12->page,
             FUNC_4(VAR_12->page, VAR_12->offnum));
   VAR_17->nextOffset = VAR_18;

   VAR_16.offnumLeaf = VAR_18;
   VAR_16.offnumHeadLeaf = VAR_12->offnum;
  }
  else if (VAR_17->tupstate == VAR_6)
  {
   VAR_11->nextOffset = VAR_2;
   FUNC_5(VAR_12->page, VAR_12->offnum);
   if (FUNC_2(VAR_12->page,
       (Item) VAR_11, VAR_11->size,
       VAR_12->offnum, 0, 0) != VAR_12->offnum)
    FUNC_15(VAR_0, "failed to add item of size %u to SPGiST index page",
      VAR_11->size);


   VAR_16.offnumLeaf = VAR_12->offnum;
   VAR_16.offnumHeadLeaf = VAR_12->offnum;
  }
  else
   FUNC_15(VAR_0, "unexpected SPGiST tuple state: %d", VAR_17->tupstate);
 }

 FUNC_1(VAR_12->buffer);

 if (FUNC_7(VAR_9) && !VAR_10->isBuild)
 {
  XLogRecPtr VAR_19;
  int VAR_20;

  FUNC_11();
  FUNC_14((char *) &VAR_16, sizeof(VAR_16));
  FUNC_14((char *) VAR_11, VAR_11->size);

  VAR_20 = VAR_3;
  if (VAR_16.newPage)
   VAR_20 |= VAR_4;
  FUNC_13(0, VAR_12->buffer, VAR_20);
  if (VAR_16.offnumParent != VAR_2)
   FUNC_13(1, VAR_13->buffer, VAR_3);

  VAR_19 = FUNC_12(VAR_5, VAR_8);

  FUNC_6(VAR_12->page, VAR_19);


  if (VAR_16.offnumParent != VAR_2)
  {
   FUNC_6(VAR_13->page, VAR_19);
  }
 }

 FUNC_0();
}
