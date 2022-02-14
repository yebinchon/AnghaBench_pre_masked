
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_9__ {int flags; scalar_t__ offnum; int xmax; int infobits_set; } ;
typedef TYPE_1__ xl_heap_lock_updated ;
typedef int XLogRecPtr ;
struct TYPE_10__ {int EndRecPtr; } ;
typedef TYPE_2__ XLogReaderState ;
struct TYPE_11__ {int t_infomask; int t_infomask2; } ;
typedef int Relation ;
typedef int RelFileNode ;
typedef int Page ;
typedef scalar_t__ OffsetNumber ;
typedef int * ItemId ;
typedef TYPE_3__* HeapTupleHeader ;
typedef int Buffer ;
typedef int BlockNumber ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_4 (TYPE_3__*,int ) ;
 int VAR_4 ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int ) ;
 int VAR_5 ;
 scalar_t__ FUNC_7 (int ,int *) ;
 int * FUNC_8 (int ,scalar_t__) ;
 scalar_t__ FUNC_9 (int ) ;
 int FUNC_10 (int ,int ) ;
 int FUNC_11 (int ) ;
 int FUNC_12 (int ) ;
 int VAR_6 ;
 int VAR_7 ;
 scalar_t__ FUNC_13 (TYPE_2__*,int ,int *) ;
 int FUNC_14 (TYPE_2__*,int ,int *,int *,int *) ;
 scalar_t__ FUNC_15 (TYPE_2__*) ;
 int FUNC_16 (int ,char*) ;
 int FUNC_17 (int ,int*,int *) ;
 int FUNC_18 (int ,int ,int ,int ) ;
 int FUNC_19 (int ,int ,int *) ;

__attribute__((used)) static void
FUNC_20(XLogReaderState *VAR_8)
{
 XLogRecPtr VAR_9 = VAR_8->EndRecPtr;
 xl_heap_lock_updated *VAR_10;
 Buffer VAR_11;
 Page VAR_12;
 OffsetNumber VAR_13;
 ItemId VAR_14 = ((void*)0);
 HeapTupleHeader VAR_15;

 VAR_10 = (xl_heap_lock_updated *) FUNC_15(VAR_8);





 if (VAR_10->flags & VAR_7)
 {
  RelFileNode VAR_16;
  Buffer VAR_17 = VAR_4;
  BlockNumber VAR_18;
  Relation VAR_19;

  FUNC_14(VAR_8, 0, &VAR_16, ((void*)0), &VAR_18);
  VAR_19 = FUNC_2(VAR_16);

  FUNC_19(VAR_19, VAR_18, &VAR_17);
  FUNC_18(VAR_19, VAR_18, VAR_17, VAR_6);

  FUNC_11(VAR_17);
  FUNC_3(VAR_19);
 }

 if (FUNC_13(VAR_8, 0, &VAR_11) == VAR_0)
 {
  VAR_12 = FUNC_0(VAR_11);

  VAR_13 = VAR_10->offnum;
  if (FUNC_9(VAR_12) >= VAR_13)
   VAR_14 = FUNC_8(VAR_12, VAR_13);

  if (FUNC_9(VAR_12) < VAR_13 || !FUNC_5(VAR_14))
   FUNC_16(VAR_5, "invalid lp");

  VAR_15 = (HeapTupleHeader) FUNC_7(VAR_12, VAR_14);

  VAR_15->t_infomask &= ~(VAR_3 | VAR_2);
  VAR_15->t_infomask2 &= ~VAR_1;
  FUNC_17(VAR_10->infobits_set, &VAR_15->t_infomask,
           &VAR_15->t_infomask2);
  FUNC_4(VAR_15, VAR_10->xmax);

  FUNC_10(VAR_12, VAR_9);
  FUNC_6(VAR_11);
 }
 if (FUNC_1(VAR_11))
  FUNC_12(VAR_11);
}
