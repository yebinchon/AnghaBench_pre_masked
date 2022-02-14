
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


typedef void* TransactionId ;
struct TYPE_6__ {int t_infomask; } ;
typedef void* MultiXactId ;
typedef TYPE_1__* HeapTupleHeader ;


 int VAR_0 ;
 int VAR_1 ;
 void* FUNC_0 (TYPE_1__*) ;
 void* FUNC_1 (TYPE_1__*) ;
 void* FUNC_2 (TYPE_1__*) ;
 scalar_t__ FUNC_3 (void*) ;
 scalar_t__ FUNC_4 (void*) ;

bool
FUNC_5(HeapTupleHeader VAR_2)
{
 TransactionId VAR_3;





 VAR_3 = FUNC_1(VAR_2);
 if (FUNC_4(VAR_3))
  return 1;




 if (VAR_2->t_infomask & VAR_1)
 {
  MultiXactId VAR_4;

  VAR_4 = FUNC_0(VAR_2);
  if (FUNC_3(VAR_4))
   return 1;
 }
 else
 {
  VAR_3 = FUNC_0(VAR_2);
  if (FUNC_4(VAR_3))
   return 1;
 }

 if (VAR_2->t_infomask & VAR_0)
 {
  VAR_3 = FUNC_2(VAR_2);
  if (FUNC_4(VAR_3))
   return 1;
 }

 return 0;
}
