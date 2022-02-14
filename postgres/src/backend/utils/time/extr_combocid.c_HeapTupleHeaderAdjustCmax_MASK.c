
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int HeapTupleHeader ;
typedef int CommandId ;


 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 scalar_t__ FUNC_4 (int ) ;

void
FUNC_5(HeapTupleHeader VAR_0,
        CommandId *VAR_1,
        bool *VAR_2)
{






 if (!FUNC_3(VAR_0) &&
  FUNC_4(FUNC_2(VAR_0)))
 {
  CommandId VAR_3 = FUNC_1(VAR_0);

  *VAR_1 = FUNC_0(VAR_3, *VAR_1);
  *VAR_2 = 1;
 }
 else
 {
  *VAR_2 = 0;
 }
}
