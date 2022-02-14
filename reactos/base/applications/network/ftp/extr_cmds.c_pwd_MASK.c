
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (char*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (char*) ;
 int VAR_2 ;
 int VAR_3 ;

void FUNC_3(int VAR_4, const char *VAR_5[])
{
 int VAR_6 = VAR_3;




 VAR_3 = 1;
 if (FUNC_0("PWD") == VAR_0 && VAR_1 == 500) {
  FUNC_2("PWD command not recognized, trying XPWD\n");
  (void) FUNC_1(VAR_2);
  (void) FUNC_0("XPWD");
 }
 VAR_3 = VAR_6;
}
