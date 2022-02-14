
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_3__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int TransactionId ;
struct TYPE_5__ {int t_ctid; } ;
struct TYPE_4__ {TYPE_3__* t_data; int t_self; } ;
typedef int TM_Result ;
typedef int MultiXactStatus ;
typedef int LockTupleMode ;
typedef TYPE_1__* HeapTuple ;


 scalar_t__ FUNC_0 (int ,int ) ;
 scalar_t__ FUNC_1 (TYPE_3__*) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int *,int *) ;
 int FUNC_4 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_5 (int ) ;
 scalar_t__ FUNC_6 (int ) ;
 scalar_t__ FUNC_7 (int ) ;
 scalar_t__ FUNC_8 (int ) ;
 int FUNC_9 (int ,int) ;

__attribute__((used)) static TM_Result
FUNC_10(MultiXactStatus VAR_4, TransactionId VAR_5,
         LockTupleMode VAR_6, HeapTuple VAR_7,
         bool *VAR_8)
{
 MultiXactStatus VAR_9;

 *VAR_8 = 0;
 VAR_9 = FUNC_9(VAR_6, 0);






 if (FUNC_7(VAR_5))
 {





  return VAR_2;
 }
 else if (FUNC_8(VAR_5))
 {






  if (FUNC_0(FUNC_4(VAR_4),
        FUNC_4(VAR_9)))
  {
   *VAR_8 = 1;
  }





  return VAR_1;
 }
 else if (FUNC_5(VAR_5))
  return VAR_1;
 else if (FUNC_6(VAR_5))
 {
  if (!FUNC_2(VAR_4))
   return VAR_1;

  if (FUNC_0(FUNC_4(VAR_4),
        FUNC_4(VAR_9)))
  {

   if (!FUNC_3(&VAR_7->t_self, &VAR_7->t_data->t_ctid) ||
    FUNC_1(VAR_7->t_data))
    return VAR_3;
   else
    return VAR_0;
  }

  return VAR_1;
 }


 return VAR_1;
}
