
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int TransactionId ;
struct TYPE_2__ {int t_tid; } ;
typedef int Relation ;
typedef int Page ;
typedef int OffsetNumber ;
typedef int ItemPointerData ;
typedef int ItemId ;
typedef TYPE_1__* IndexTuple ;
typedef int Buffer ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int FUNC_1 (int *,int *) ;
 scalar_t__ FUNC_2 (int ,int ) ;
 int FUNC_3 (int ,int ) ;
 scalar_t__ FUNC_4 (int) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int ,int *,int) ;

TransactionId
FUNC_7(Relation VAR_1,
          Relation VAR_2,
          Buffer VAR_3,
          OffsetNumber *VAR_4,
          int VAR_5)
{
 ItemPointerData *VAR_6 =
 (ItemPointerData *) FUNC_4(sizeof(ItemPointerData) * VAR_5);
 TransactionId VAR_7 = VAR_0;
 Page VAR_8 = FUNC_0(VAR_3);
 IndexTuple VAR_9;


 for (int VAR_10 = 0; VAR_10 < VAR_5; VAR_10++)
 {
  ItemId VAR_11;

  VAR_11 = FUNC_3(VAR_8, VAR_4[VAR_10]);
  VAR_9 = (IndexTuple) FUNC_2(VAR_8, VAR_11);

  FUNC_1(&VAR_9->t_tid, &VAR_6[VAR_10]);
 }


 VAR_7 =
  FUNC_6(VAR_2, VAR_6, VAR_5);

 FUNC_5(VAR_6);

 return VAR_7;
}
