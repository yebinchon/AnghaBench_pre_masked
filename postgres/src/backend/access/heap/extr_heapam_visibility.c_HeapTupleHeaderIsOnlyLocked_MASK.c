
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef int TransactionId ;
struct TYPE_5__ {int t_infomask; } ;
typedef TYPE_1__* HeapTupleHeader ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (TYPE_1__*) ;
 scalar_t__ FUNC_3 (int ) ;
 scalar_t__ FUNC_4 (int ) ;
 scalar_t__ FUNC_5 (int ) ;
 int FUNC_6 (int ) ;

bool
FUNC_7(HeapTupleHeader VAR_3)
{
 TransactionId VAR_4;


 if (VAR_3->t_infomask & VAR_0)
  return 1;

 if (VAR_3->t_infomask & VAR_2)
  return 1;


 if (!FUNC_6(FUNC_2(VAR_3)))
  return 1;





 if (!(VAR_3->t_infomask & VAR_1))
  return 0;


 VAR_4 = FUNC_1(VAR_3);


 FUNC_0(FUNC_6(VAR_4));

 if (FUNC_4(VAR_4))
  return 0;
 if (FUNC_5(VAR_4))
  return 0;
 if (FUNC_3(VAR_4))
  return 0;





 return 1;
}
