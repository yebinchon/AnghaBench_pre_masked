
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int ssize_t ;
typedef int buf ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_0 () ;
 scalar_t__ FUNC_1 () ;
 int FUNC_2 (char*) ;
 int FUNC_3 (int ,int ,char*,...) ;

int FUNC_4(int VAR_5, char **VAR_6)
{
 char VAR_7[4096];
 ssize_t VAR_8 = 0;
 if (FUNC_0())
  return 1;
 if (FUNC_1())
  return 1;
 FUNC_3(VAR_4, VAR_2,
  FUNC_2("OHAI! WHAT IS YOUR NAME? "));
 VAR_8 = FUNC_3(VAR_3, VAR_1, VAR_7, sizeof(VAR_7));
 FUNC_3(VAR_4, VAR_2, FUNC_2("HELLO, "));
 FUNC_3(VAR_4, VAR_2, VAR_7, VAR_8);
 FUNC_3(VAR_4, VAR_0,
  FUNC_2("Error message going to STDERR\n"));
 return 0;
}
