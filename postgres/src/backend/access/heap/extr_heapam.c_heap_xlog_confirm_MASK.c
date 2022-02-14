
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {int offnum; } ;
typedef TYPE_1__ xl_heap_confirm ;
typedef int XLogRecPtr ;
struct TYPE_8__ {int EndRecPtr; } ;
typedef TYPE_2__ XLogReaderState ;
struct TYPE_9__ {int t_ctid; } ;
typedef int Page ;
typedef int OffsetNumber ;
typedef int * ItemId ;
typedef TYPE_3__* HeapTupleHeader ;
typedef int Buffer ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (int ) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *,int ,int ) ;
 int FUNC_5 (int ) ;
 int VAR_1 ;
 scalar_t__ FUNC_6 (int ,int *) ;
 int * FUNC_7 (int ,int ) ;
 int FUNC_8 (int ) ;
 int FUNC_9 (int ,int ) ;
 int FUNC_10 (int ) ;
 scalar_t__ FUNC_11 (TYPE_2__*,int ,int *) ;
 scalar_t__ FUNC_12 (TYPE_2__*) ;
 int FUNC_13 (int ,char*) ;

__attribute__((used)) static void
FUNC_14(XLogReaderState *VAR_2)
{
 XLogRecPtr VAR_3 = VAR_2->EndRecPtr;
 xl_heap_confirm *VAR_4 = (xl_heap_confirm *) FUNC_12(VAR_2);
 Buffer VAR_5;
 Page VAR_6;
 OffsetNumber VAR_7;
 ItemId VAR_8 = ((void*)0);
 HeapTupleHeader VAR_9;

 if (FUNC_11(VAR_2, 0, &VAR_5) == VAR_0)
 {
  VAR_6 = FUNC_1(VAR_5);

  VAR_7 = VAR_4->offnum;
  if (FUNC_8(VAR_6) >= VAR_7)
   VAR_8 = FUNC_7(VAR_6, VAR_7);

  if (FUNC_8(VAR_6) < VAR_7 || !FUNC_3(VAR_8))
   FUNC_13(VAR_1, "invalid lp");

  VAR_9 = (HeapTupleHeader) FUNC_6(VAR_6, VAR_8);




  FUNC_4(&VAR_9->t_ctid, FUNC_0(VAR_5), VAR_7);

  FUNC_9(VAR_6, VAR_3);
  FUNC_5(VAR_5);
 }
 if (FUNC_2(VAR_5))
  FUNC_10(VAR_5);
}
