
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,char*) ;
 int FUNC_3 (char*) ;
 scalar_t__ FUNC_4 (int ,int ) ;
 int FUNC_5 () ;
 int VAR_3 ;
 int FUNC_6 (int ,int ) ;
 int VAR_4 ;
 int VAR_5 ;

__attribute__((used)) static void FUNC_7(void)
{
 FUNC_6(VAR_2, VAR_4);
 FUNC_0(10);
 for(;;)
 {
  FUNC_5();
  if (VAR_3)
  {
   FUNC_2(VAR_5, "FATAL ERROR, rdtsc() succeeded while disabled\n");
   FUNC_1(0);
  }
  if (FUNC_4(VAR_0, VAR_1) < 0)
  {
   FUNC_3("prctl");
   FUNC_1(0);
  }
  VAR_3 = 1;
 }
}
