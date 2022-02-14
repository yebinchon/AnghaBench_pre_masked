
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 unsigned long FUNC_0 (char*) ;
 int FUNC_1 (unsigned long) ;
 int VAR_0 ;
 int FUNC_2 (int) ;
 int FUNC_3 (int ,char*,char*) ;
 char* VAR_1 ;
 int VAR_2 ;
 int FUNC_4 (char*,char*) ;
 int FUNC_5 (int ,char*) ;

int FUNC_6(int VAR_3, char *VAR_4[])
{
 if (VAR_3 == 3 && !FUNC_4(VAR_4[1], "exec")) {
  unsigned long VAR_5;

  VAR_5 = FUNC_0(VAR_4[2]);
  FUNC_1(VAR_5);
 } else if (VAR_3 != 1) {
  FUNC_3(VAR_2, "Usage: %s\n", VAR_4[0]);
  FUNC_2(1);
 }

 VAR_1 = VAR_4[0];
 return FUNC_5(VAR_0, "dscr_inherit_exec_test");
}
