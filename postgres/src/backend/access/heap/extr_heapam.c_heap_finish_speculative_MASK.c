
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {void* offnum; } ;
typedef TYPE_1__ xl_heap_confirm ;
typedef int XLogRecPtr ;
struct TYPE_5__ {int t_ctid; } ;
typedef int Relation ;
typedef scalar_t__ Page ;
typedef scalar_t__ OffsetNumber ;
typedef int * ItemPointer ;
typedef int * ItemId ;
typedef TYPE_2__* HeapTupleHeader ;
typedef int Buffer ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 () ;
 int VAR_1 ;
 int FUNC_3 (TYPE_2__*) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 void* FUNC_6 (int *) ;
 int FUNC_7 (int ,int ) ;
 int FUNC_8 (int ) ;
 scalar_t__ VAR_2 ;
 scalar_t__ FUNC_9 (scalar_t__,int *) ;
 int * FUNC_10 (scalar_t__,scalar_t__) ;
 scalar_t__ FUNC_11 (scalar_t__) ;
 int FUNC_12 (scalar_t__,int ) ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_13 (int ,int ) ;
 scalar_t__ FUNC_14 (int ) ;
 int FUNC_15 () ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 int FUNC_16 (int,char*) ;
 int FUNC_17 (int ) ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_18 () ;
 int FUNC_19 (int ,int ) ;
 int FUNC_20 (int ,int ,int ) ;
 int FUNC_21 (char*,int ) ;
 int FUNC_22 (int ) ;
 int FUNC_23 (int ,char*) ;

void
FUNC_24(Relation VAR_9, ItemPointer VAR_10)
{
 Buffer VAR_11;
 Page VAR_12;
 OffsetNumber VAR_13;
 ItemId VAR_14 = ((void*)0);
 HeapTupleHeader VAR_15;

 VAR_11 = FUNC_13(VAR_9, FUNC_5(VAR_10));
 FUNC_7(VAR_11, VAR_0);
 VAR_12 = (Page) FUNC_1(VAR_11);

 VAR_13 = FUNC_6(VAR_10);
 if (FUNC_11(VAR_12) >= VAR_13)
  VAR_14 = FUNC_10(VAR_12, VAR_13);

 if (FUNC_11(VAR_12) < VAR_13 || !FUNC_4(VAR_14))
  FUNC_23(VAR_1, "invalid lp");

 VAR_15 = (HeapTupleHeader) FUNC_9(VAR_12, VAR_14);


 FUNC_16(VAR_2 < VAR_6,
      "invalid speculative token constant");


 FUNC_15();

 FUNC_0(FUNC_3(VAR_15));

 FUNC_8(VAR_11);





 VAR_15->t_ctid = *VAR_10;


 if (FUNC_14(VAR_9))
 {
  xl_heap_confirm VAR_16;
  XLogRecPtr VAR_17;

  VAR_16.offnum = FUNC_6(VAR_10);

  FUNC_18();


  FUNC_22(VAR_8);

  FUNC_21((char *) &VAR_16, VAR_5);
  FUNC_20(0, VAR_11, VAR_3);

  VAR_17 = FUNC_19(VAR_4, VAR_7);

  FUNC_12(VAR_12, VAR_17);
 }

 FUNC_2();

 FUNC_17(VAR_11);
}
