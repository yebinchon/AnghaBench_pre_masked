
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


struct TYPE_10__ {scalar_t__ heapBlk; scalar_t__ offnum; int pagesPerRange; } ;
typedef TYPE_1__ xl_brin_insert ;
typedef scalar_t__ XLogRedoAction ;
typedef int XLogRecPtr ;
struct TYPE_11__ {int EndRecPtr; } ;
typedef TYPE_2__ XLogReaderState ;
struct TYPE_12__ {scalar_t__ bt_blkno; } ;
typedef int Size ;
typedef scalar_t__ Page ;
typedef scalar_t__ OffsetNumber ;
typedef int ItemPointerData ;
typedef int Item ;
typedef int Buffer ;
typedef TYPE_3__ BrinTuple ;
typedef int BlockNumber ;


 int FUNC_0 (int) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (int ) ;
 scalar_t__ FUNC_3 (int ) ;
 scalar_t__ VAR_2 ;
 int FUNC_4 (int *,int ,scalar_t__) ;
 int FUNC_5 (int ) ;
 int VAR_3 ;
 scalar_t__ FUNC_6 (scalar_t__,int ,int ,scalar_t__,int,int) ;
 scalar_t__ FUNC_7 (scalar_t__) ;
 int FUNC_8 (scalar_t__,int ) ;
 int FUNC_9 (int ) ;
 int VAR_4 ;
 int FUNC_10 (TYPE_2__*,int ) ;
 scalar_t__ FUNC_11 (TYPE_2__*,int,int *) ;
 scalar_t__ FUNC_12 (TYPE_2__*,int ,int *) ;
 int FUNC_13 (TYPE_2__*) ;
 int FUNC_14 (int ,int ,scalar_t__,int ) ;
 int FUNC_15 (scalar_t__,int ) ;
 int FUNC_16 (int ,char*) ;

__attribute__((used)) static void
FUNC_17(XLogReaderState *VAR_5,
      xl_brin_insert *VAR_6)
{
 XLogRecPtr VAR_7 = VAR_5->EndRecPtr;
 Buffer VAR_8;
 BlockNumber VAR_9;
 Page VAR_10;
 XLogRedoAction VAR_11;





 if (FUNC_13(VAR_5) & VAR_4)
 {
  VAR_8 = FUNC_10(VAR_5, 0);
  VAR_10 = FUNC_2(VAR_8);
  FUNC_15(VAR_10, VAR_1);
  VAR_11 = VAR_0;
 }
 else
 {
  VAR_11 = FUNC_11(VAR_5, 0, &VAR_8);
 }


 VAR_9 = FUNC_1(VAR_8);


 if (VAR_11 == VAR_0)
 {
  OffsetNumber VAR_12;
  BrinTuple *VAR_13;
  Size VAR_14;

  VAR_13 = (BrinTuple *) FUNC_12(VAR_5, 0, &VAR_14);

  FUNC_0(VAR_13->bt_blkno == VAR_6->heapBlk);

  VAR_10 = (Page) FUNC_2(VAR_8);
  VAR_12 = VAR_6->offnum;
  if (FUNC_7(VAR_10) + 1 < VAR_12)
   FUNC_16(VAR_3, "brin_xlog_insert_update: invalid max offset number");

  VAR_12 = FUNC_6(VAR_10, (Item) VAR_13, VAR_14, VAR_12, 1, 0);
  if (VAR_12 == VAR_2)
   FUNC_16(VAR_3, "brin_xlog_insert_update: failed to add tuple");

  FUNC_8(VAR_10, VAR_7);
  FUNC_5(VAR_8);
 }
 if (FUNC_3(VAR_8))
  FUNC_9(VAR_8);


 VAR_11 = FUNC_11(VAR_5, 1, &VAR_8);
 if (VAR_11 == VAR_0)
 {
  ItemPointerData VAR_15;

  FUNC_4(&VAR_15, VAR_9, VAR_6->offnum);
  VAR_10 = (Page) FUNC_2(VAR_8);

  FUNC_14(VAR_8, VAR_6->pagesPerRange, VAR_6->heapBlk,
        VAR_15);
  FUNC_8(VAR_10, VAR_7);
  FUNC_5(VAR_8);
 }
 if (FUNC_3(VAR_8))
  FUNC_9(VAR_8);


}
