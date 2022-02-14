
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int t_infomask; } ;
typedef TYPE_1__* HeapTupleHeader ;
typedef int CommandId ;


 int FUNC_0 (int) ;
 scalar_t__ VAR_0 ;
 int FUNC_1 (int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (TYPE_1__*) ;
 scalar_t__ FUNC_4 (int ) ;

CommandId
FUNC_5(HeapTupleHeader VAR_3)
{
 CommandId VAR_4 = FUNC_2(VAR_3);

 FUNC_0(!(VAR_3->t_infomask & VAR_2));







 FUNC_0(VAR_0 > 0 ||
     FUNC_4(FUNC_3(VAR_3)));

 if (VAR_3->t_infomask & VAR_1)
  return FUNC_1(VAR_4);
 else
  return VAR_4;
}
