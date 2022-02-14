
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int TransactionId ;
struct TYPE_3__ {int t_self; int t_data; } ;
typedef int TM_Result ;
typedef int Relation ;
typedef int LockTupleMode ;
typedef int ItemPointer ;
typedef TYPE_1__* HeapTuple ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int *,int ) ;
 int FUNC_2 () ;
 int VAR_0 ;
 int FUNC_3 (int ,int ,int ,int ) ;

__attribute__((used)) static TM_Result
FUNC_4(Relation VAR_1, HeapTuple VAR_2, ItemPointer VAR_3,
      TransactionId VAR_4, LockTupleMode VAR_5)
{




 if (!FUNC_0(VAR_2->t_data) &&
  !FUNC_1(&VAR_2->t_self, VAR_3))
 {
  FUNC_2();

  return FUNC_3(VAR_1, VAR_3, VAR_4, VAR_5);
 }


 return VAR_0;
}
