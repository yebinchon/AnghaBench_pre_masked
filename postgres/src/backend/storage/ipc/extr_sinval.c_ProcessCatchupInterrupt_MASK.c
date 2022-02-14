
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 () ;
 int FUNC_1 () ;
 int VAR_0 ;
 scalar_t__ FUNC_2 () ;
 int FUNC_3 () ;
 scalar_t__ VAR_1 ;
 int FUNC_4 (int ,char*) ;

void
FUNC_5(void)
{
 while (VAR_1)
 {
  if (FUNC_2())
  {
   FUNC_4(VAR_0, "ProcessCatchupEvent inside transaction");
   FUNC_0();
  }
  else
  {
   FUNC_4(VAR_0, "ProcessCatchupEvent outside transaction");
   FUNC_3();
   FUNC_1();
  }
 }
}
