
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int TransactionId ;
struct TYPE_8__ {scalar_t__ t_tableOid; int t_self; TYPE_1__* t_data; } ;
struct TYPE_7__ {int t_infomask; } ;
typedef TYPE_1__* HeapTupleHeader ;
typedef TYPE_2__* HeapTuple ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_1 (int) ;
 int VAR_2 ;
 int FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (TYPE_1__*) ;
 scalar_t__ FUNC_4 (TYPE_1__*) ;
 scalar_t__ VAR_3 ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int ,int ) ;

bool
FUNC_7(HeapTuple VAR_4, TransactionId VAR_5)
{
 HeapTupleHeader VAR_6 = VAR_4->t_data;

 FUNC_0(FUNC_5(&VAR_4->t_self));
 FUNC_0(VAR_4->t_tableOid != VAR_3);







 if (!FUNC_3(VAR_6))
  return FUNC_4(VAR_6) ? 1 : 0;





 if (VAR_6->t_infomask & VAR_1)
  return 0;




 if (FUNC_1(VAR_6->t_infomask))
  return 0;





 if (VAR_6->t_infomask & VAR_2)
  return 0;


 if (!(VAR_6->t_infomask & VAR_0))
  return 0;


 return FUNC_6(FUNC_2(VAR_6), VAR_5);
}
