
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int UINT ;
typedef scalar_t__ DWORD ;


 scalar_t__ FUNC_0 () ;
 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_1 () ;
 int FUNC_2 (int,char*,...) ;

void FUNC_3(void)
{
   DWORD VAR_1, VAR_2;

   VAR_2 = FUNC_0();

   VAR_1 = FUNC_1();

   if (VAR_2)
      FUNC_2(VAR_2, "function failed?");
   else
      FUNC_2(VAR_1 == VAR_0, "function last error wrong expected ERROR_ACCESS_DENIED but got %d\n", (UINT)VAR_1);

}
