
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_8__ {scalar_t__ offnum; } ;
typedef TYPE_1__ xl_heap_inplace ;
typedef int uint32 ;
typedef int XLogRecPtr ;
struct TYPE_9__ {int EndRecPtr; } ;
typedef TYPE_2__ XLogReaderState ;
struct TYPE_10__ {int t_hoff; } ;
typedef int Size ;
typedef int Page ;
typedef scalar_t__ OffsetNumber ;
typedef int * ItemId ;
typedef TYPE_3__* HeapTupleHeader ;
typedef int Buffer ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int ) ;
 int VAR_1 ;
 scalar_t__ FUNC_5 (int ,int *) ;
 int * FUNC_6 (int ,scalar_t__) ;
 scalar_t__ FUNC_7 (int ) ;
 int FUNC_8 (int ,int ) ;
 int FUNC_9 (int ) ;
 scalar_t__ FUNC_10 (TYPE_2__*,int ,int *) ;
 char* FUNC_11 (TYPE_2__*,int ,int*) ;
 scalar_t__ FUNC_12 (TYPE_2__*) ;
 int FUNC_13 (int ,char*) ;
 int FUNC_14 (char*,char*,int) ;

__attribute__((used)) static void
FUNC_15(XLogReaderState *VAR_2)
{
 XLogRecPtr VAR_3 = VAR_2->EndRecPtr;
 xl_heap_inplace *VAR_4 = (xl_heap_inplace *) FUNC_12(VAR_2);
 Buffer VAR_5;
 Page VAR_6;
 OffsetNumber VAR_7;
 ItemId VAR_8 = ((void*)0);
 HeapTupleHeader VAR_9;
 uint32 VAR_10;
 Size VAR_11;

 if (FUNC_10(VAR_2, 0, &VAR_5) == VAR_0)
 {
  char *VAR_12 = FUNC_11(VAR_2, 0, &VAR_11);

  VAR_6 = FUNC_0(VAR_5);

  VAR_7 = VAR_4->offnum;
  if (FUNC_7(VAR_6) >= VAR_7)
   VAR_8 = FUNC_6(VAR_6, VAR_7);

  if (FUNC_7(VAR_6) < VAR_7 || !FUNC_3(VAR_8))
   FUNC_13(VAR_1, "invalid lp");

  VAR_9 = (HeapTupleHeader) FUNC_5(VAR_6, VAR_8);

  VAR_10 = FUNC_2(VAR_8) - VAR_9->t_hoff;
  if (VAR_10 != VAR_11)
   FUNC_13(VAR_1, "wrong tuple length");

  FUNC_14((char *) VAR_9 + VAR_9->t_hoff, VAR_12, VAR_11);

  FUNC_8(VAR_6, VAR_3);
  FUNC_4(VAR_5);
 }
 if (FUNC_1(VAR_5))
  FUNC_9(VAR_5);
}
