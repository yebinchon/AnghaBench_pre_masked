
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int Page ;
typedef int FullTransactionId ;


 scalar_t__ FUNC_0 (int ,int ) ;
 int FUNC_1 () ;
 int FUNC_2 (int ) ;
 scalar_t__ FUNC_3 (int ) ;
 scalar_t__ FUNC_4 (int ) ;

bool
FUNC_5(Page VAR_0)
{
 if (FUNC_4(VAR_0))
  return 1;
 if (FUNC_3(VAR_0))
 {
  FullTransactionId VAR_1 = FUNC_2(VAR_0);
  FullTransactionId VAR_2 = FUNC_1();

  if (FUNC_0(VAR_1, VAR_2))
   return 1;
 }
 return 0;
}
