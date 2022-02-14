
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int t_infomask; } ;
typedef TYPE_1__* HeapTupleHeader ;
typedef int CommandId ;


 int FUNC_0 (int) ;
 int FUNC_1 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (TYPE_1__*) ;
 int FUNC_4 (int ) ;

CommandId
FUNC_5(HeapTupleHeader VAR_2)
{
 CommandId VAR_3 = FUNC_2(VAR_2);

 FUNC_0(!(VAR_2->t_infomask & VAR_1));
 FUNC_0(FUNC_4(FUNC_3(VAR_2)));

 if (VAR_2->t_infomask & VAR_0)
  return FUNC_1(VAR_3);
 else
  return VAR_3;
}
