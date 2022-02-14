
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_1__ ;


typedef scalar_t__ TransactionId ;
struct TYPE_8__ {int t_infomask; } ;
typedef TYPE_1__* HeapTupleHeader ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (TYPE_1__*) ;
 scalar_t__ FUNC_1 (TYPE_1__*) ;
 scalar_t__ FUNC_2 (TYPE_1__*) ;
 scalar_t__ FUNC_3 (TYPE_1__*) ;
 int FUNC_4 (TYPE_1__*) ;
 scalar_t__ FUNC_5 (scalar_t__) ;
 scalar_t__ FUNC_6 (scalar_t__,scalar_t__) ;
 scalar_t__ FUNC_7 (scalar_t__,scalar_t__) ;

void
FUNC_8(HeapTupleHeader VAR_1,
            TransactionId *VAR_2)
{
 TransactionId VAR_3 = FUNC_1(VAR_1);
 TransactionId VAR_4 = FUNC_0(VAR_1);
 TransactionId VAR_5 = FUNC_2(VAR_1);

 if (VAR_1->t_infomask & VAR_0)
 {
  if (FUNC_7(*VAR_2, VAR_5))
   *VAR_2 = VAR_5;
 }
 if (FUNC_3(VAR_1) ||
  (!FUNC_4(VAR_1) && FUNC_5(VAR_3)))
 {
  if (VAR_4 != VAR_3 &&
   FUNC_6(VAR_4, *VAR_2))
   *VAR_2 = VAR_4;
 }


}
