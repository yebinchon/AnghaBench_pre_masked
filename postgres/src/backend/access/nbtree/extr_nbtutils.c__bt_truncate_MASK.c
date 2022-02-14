
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_21__ TYPE_2__ ;
typedef struct TYPE_20__ TYPE_1__ ;


typedef int int16 ;
typedef int TupleDesc ;
struct TYPE_21__ {int heapkeyspace; } ;
struct TYPE_20__ {int t_info; int t_tid; } ;
typedef int Size ;
typedef int Relation ;
typedef int ItemPointerData ;
typedef int * ItemPointer ;
typedef TYPE_1__* IndexTuple ;
typedef TYPE_2__* BTScanInsert ;


 int FUNC_0 (int) ;
 int FUNC_1 (TYPE_1__*,int ) ;
 int FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (TYPE_1__*,int) ;
 int VAR_0 ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (TYPE_1__*) ;
 scalar_t__ FUNC_7 (int *,int *) ;
 int FUNC_8 (int *,int *) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (int *,int ) ;
 int FUNC_11 (int) ;
 int FUNC_12 (int ) ;
 int FUNC_13 (int ) ;
 int FUNC_14 (int ,TYPE_1__*,TYPE_1__*,TYPE_2__*) ;
 TYPE_1__* FUNC_15 (int ,TYPE_1__*,int) ;
 int FUNC_16 (TYPE_1__*,TYPE_1__*,int) ;
 TYPE_1__* FUNC_17 (int) ;
 int FUNC_18 (TYPE_1__*) ;

IndexTuple
FUNC_19(Relation VAR_1, IndexTuple VAR_2, IndexTuple VAR_3,
    BTScanInsert VAR_4)
{
 TupleDesc VAR_5 = FUNC_13(VAR_1);
 int16 VAR_6 = FUNC_4(VAR_1);
 int16 VAR_7 = FUNC_5(VAR_1);
 int VAR_8;
 IndexTuple VAR_9;
 ItemPointer VAR_10;
 Size VAR_11;





 FUNC_0(FUNC_1(VAR_2, VAR_1) == VAR_6);
 FUNC_0(FUNC_1(VAR_3, VAR_1) == VAR_6);


 VAR_8 = FUNC_14(VAR_1, VAR_2, VAR_3, VAR_4);






 if (VAR_8 <= VAR_6)
 {
  IndexTuple VAR_12;

  VAR_9 = FUNC_15(VAR_5, VAR_3, VAR_8);





  if (VAR_8 <= VAR_7)
  {
   FUNC_3(VAR_9, VAR_8);
   return VAR_9;
  }






  FUNC_0(VAR_6 != VAR_7);
  VAR_11 = FUNC_6(VAR_9) + FUNC_11(sizeof(ItemPointerData));
  VAR_12 = FUNC_17(VAR_11);
  FUNC_16(VAR_12, VAR_9, FUNC_6(VAR_9));

  FUNC_18(VAR_9);
  VAR_9 = VAR_12;
 }
 else
 {




  FUNC_0(VAR_6 == VAR_7);
  VAR_11 = FUNC_6(VAR_3) + FUNC_11(sizeof(ItemPointerData));
  VAR_9 = FUNC_17(VAR_11);
  FUNC_16(VAR_9, VAR_3, FUNC_6(VAR_3));
 }
 FUNC_0(VAR_4->heapkeyspace);
 VAR_9->t_info &= ~VAR_0;
 VAR_9->t_info |= VAR_11;
 VAR_10 = (ItemPointer) ((char *) VAR_9 + VAR_11 -
          sizeof(ItemPointerData));
 FUNC_8(&VAR_2->t_tid, VAR_10);
 FUNC_0(FUNC_7(&VAR_2->t_tid, &VAR_3->t_tid) < 0);
 FUNC_0(FUNC_7(VAR_10, &VAR_2->t_tid) >= 0);
 FUNC_0(FUNC_7(VAR_10, &VAR_3->t_tid) < 0);
 FUNC_3(VAR_9, VAR_7);
 FUNC_2(VAR_9);

 return VAR_9;
}
