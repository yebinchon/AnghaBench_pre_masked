
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


struct TYPE_11__ {int flags; int locking_xid; int infobits_set; int offnum; } ;
typedef TYPE_1__ xl_heap_lock ;
typedef int XLogRecPtr ;
struct TYPE_12__ {int EndRecPtr; } ;
typedef TYPE_2__ XLogReaderState ;
struct TYPE_13__ {int t_infomask; int t_ctid; int t_infomask2; } ;
typedef int Relation ;
typedef int RelFileNode ;
typedef scalar_t__ Page ;
typedef int OffsetNumber ;
typedef int * ItemId ;
typedef TYPE_3__* HeapTupleHeader ;
typedef int Buffer ;
typedef int BlockNumber ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int VAR_1 ;
 int FUNC_4 (int ) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_5 (int) ;
 int FUNC_6 (TYPE_3__*) ;
 int FUNC_7 (TYPE_3__*,int ,int) ;
 int FUNC_8 (TYPE_3__*,int ) ;
 int VAR_5 ;
 int FUNC_9 (int *) ;
 int FUNC_10 (int *,int ,int ) ;
 int FUNC_11 (int ) ;
 int VAR_6 ;
 scalar_t__ FUNC_12 (scalar_t__,int *) ;
 int * FUNC_13 (scalar_t__,int ) ;
 int FUNC_14 (scalar_t__) ;
 int FUNC_15 (scalar_t__,int ) ;
 int FUNC_16 (int ) ;
 int FUNC_17 (int ) ;
 int VAR_7 ;
 int VAR_8 ;
 scalar_t__ FUNC_18 (TYPE_2__*,int ,int *) ;
 int FUNC_19 (TYPE_2__*,int ,int *,int *,int *) ;
 scalar_t__ FUNC_20 (TYPE_2__*) ;
 int FUNC_21 (int ,char*) ;
 int FUNC_22 (int ,int*,int *) ;
 int FUNC_23 (int ,int ,int ,int ) ;
 int FUNC_24 (int ,int ,int *) ;

__attribute__((used)) static void
FUNC_25(XLogReaderState *VAR_9)
{
 XLogRecPtr VAR_10 = VAR_9->EndRecPtr;
 xl_heap_lock *VAR_11 = (xl_heap_lock *) FUNC_20(VAR_9);
 Buffer VAR_12;
 Page VAR_13;
 OffsetNumber VAR_14;
 ItemId VAR_15 = ((void*)0);
 HeapTupleHeader VAR_16;





 if (VAR_11->flags & VAR_8)
 {
  RelFileNode VAR_17;
  Buffer VAR_18 = VAR_5;
  BlockNumber VAR_19;
  Relation VAR_20;

  FUNC_19(VAR_9, 0, &VAR_17, ((void*)0), &VAR_19);
  VAR_20 = FUNC_3(VAR_17);

  FUNC_24(VAR_20, VAR_19, &VAR_18);
  FUNC_23(VAR_20, VAR_19, VAR_18, VAR_7);

  FUNC_16(VAR_18);
  FUNC_4(VAR_20);
 }

 if (FUNC_18(VAR_9, 0, &VAR_12) == VAR_0)
 {
  VAR_13 = (Page) FUNC_1(VAR_12);

  VAR_14 = VAR_11->offnum;
  if (FUNC_14(VAR_13) >= VAR_14)
   VAR_15 = FUNC_13(VAR_13, VAR_14);

  if (FUNC_14(VAR_13) < VAR_14 || !FUNC_9(VAR_15))
   FUNC_21(VAR_6, "invalid lp");

  VAR_16 = (HeapTupleHeader) FUNC_12(VAR_13, VAR_15);

  VAR_16->t_infomask &= ~(VAR_4 | VAR_3);
  VAR_16->t_infomask2 &= ~VAR_2;
  FUNC_22(VAR_11->infobits_set, &VAR_16->t_infomask,
           &VAR_16->t_infomask2);





  if (FUNC_5(VAR_16->t_infomask))
  {
   FUNC_6(VAR_16);

   FUNC_10(&VAR_16->t_ctid,
         FUNC_0(VAR_12),
         VAR_14);
  }
  FUNC_8(VAR_16, VAR_11->locking_xid);
  FUNC_7(VAR_16, VAR_1, 0);
  FUNC_15(VAR_13, VAR_10);
  FUNC_11(VAR_12);
 }
 if (FUNC_2(VAR_12))
  FUNC_17(VAR_12);
}
