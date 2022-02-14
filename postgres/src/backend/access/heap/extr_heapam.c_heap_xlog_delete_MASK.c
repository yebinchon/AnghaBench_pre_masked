
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_16__ TYPE_3__ ;
typedef struct TYPE_15__ TYPE_2__ ;
typedef struct TYPE_14__ TYPE_1__ ;


struct TYPE_14__ {scalar_t__ offnum; int flags; int xmax; int infobits_set; } ;
typedef TYPE_1__ xl_heap_delete ;
typedef int XLogRecPtr ;
struct TYPE_15__ {int EndRecPtr; } ;
typedef TYPE_2__ XLogReaderState ;
struct TYPE_16__ {int t_infomask; int t_ctid; int t_infomask2; } ;
typedef int Relation ;
typedef int RelFileNode ;
typedef int Page ;
typedef int ItemPointerData ;
typedef int * ItemId ;
typedef TYPE_3__* HeapTupleHeader ;
typedef int Buffer ;
typedef int BlockNumber ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int VAR_1 ;
 int FUNC_3 (int ) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_4 (TYPE_3__*) ;
 int FUNC_5 (TYPE_3__*,int ,int) ;
 int FUNC_6 (TYPE_3__*) ;
 int FUNC_7 (TYPE_3__*,int ) ;
 int FUNC_8 (TYPE_3__*,int ) ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_9 (int *) ;
 int FUNC_10 (int *,int ) ;
 int FUNC_11 (int *,scalar_t__) ;
 int FUNC_12 (int ) ;
 int VAR_7 ;
 int FUNC_13 (int ) ;
 scalar_t__ FUNC_14 (int ,int *) ;
 int * FUNC_15 (int ,scalar_t__) ;
 scalar_t__ FUNC_16 (int ) ;
 int FUNC_17 (int ,int ) ;
 int FUNC_18 (int ,int ) ;
 int FUNC_19 (int ) ;
 int FUNC_20 (int ) ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 scalar_t__ FUNC_21 (TYPE_2__*,int ,int *) ;
 int FUNC_22 (TYPE_2__*,int ,int *,int *,int *) ;
 scalar_t__ FUNC_23 (TYPE_2__*) ;
 int FUNC_24 (TYPE_2__*) ;
 int FUNC_25 (int ,char*) ;
 int FUNC_26 (int ,int*,int *) ;
 int FUNC_27 (int ,int ,int ,int ) ;
 int FUNC_28 (int ,int ,int *) ;

__attribute__((used)) static void
FUNC_29(XLogReaderState *VAR_12)
{
 XLogRecPtr VAR_13 = VAR_12->EndRecPtr;
 xl_heap_delete *VAR_14 = (xl_heap_delete *) FUNC_23(VAR_12);
 Buffer VAR_15;
 Page VAR_16;
 ItemId VAR_17 = ((void*)0);
 HeapTupleHeader VAR_18;
 BlockNumber VAR_19;
 RelFileNode VAR_20;
 ItemPointerData VAR_21;

 FUNC_22(VAR_12, 0, &VAR_20, ((void*)0), &VAR_19);
 FUNC_10(&VAR_21, VAR_19);
 FUNC_11(&VAR_21, VAR_14->offnum);





 if (VAR_14->flags & VAR_9)
 {
  Relation VAR_22 = FUNC_2(VAR_20);
  Buffer VAR_23 = VAR_5;

  FUNC_28(VAR_22, VAR_19, &VAR_23);
  FUNC_27(VAR_22, VAR_19, VAR_23, VAR_8);
  FUNC_19(VAR_23);
  FUNC_3(VAR_22);
 }

 if (FUNC_21(VAR_12, 0, &VAR_15) == VAR_0)
 {
  VAR_16 = FUNC_0(VAR_15);

  if (FUNC_16(VAR_16) >= VAR_14->offnum)
   VAR_17 = FUNC_15(VAR_16, VAR_14->offnum);

  if (FUNC_16(VAR_16) < VAR_14->offnum || !FUNC_9(VAR_17))
   FUNC_25(VAR_7, "invalid lp");

  VAR_18 = (HeapTupleHeader) FUNC_14(VAR_16, VAR_17);

  VAR_18->t_infomask &= ~(VAR_4 | VAR_3);
  VAR_18->t_infomask2 &= ~VAR_2;
  FUNC_4(VAR_18);
  FUNC_26(VAR_14->infobits_set,
           &VAR_18->t_infomask, &VAR_18->t_infomask2);
  if (!(VAR_14->flags & VAR_11))
   FUNC_7(VAR_18, VAR_14->xmax);
  else
   FUNC_8(VAR_18, VAR_6);
  FUNC_5(VAR_18, VAR_1, 0);


  FUNC_18(VAR_16, FUNC_24(VAR_12));

  if (VAR_14->flags & VAR_9)
   FUNC_13(VAR_16);


  if (VAR_14->flags & VAR_10)
   FUNC_6(VAR_18);
  else
   VAR_18->t_ctid = VAR_21;
  FUNC_17(VAR_16, VAR_13);
  FUNC_12(VAR_15);
 }
 if (FUNC_1(VAR_15))
  FUNC_20(VAR_15);
}
