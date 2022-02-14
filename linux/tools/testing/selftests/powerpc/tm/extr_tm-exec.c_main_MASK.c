
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 () ;
 char* VAR_0 ;
 scalar_t__ FUNC_1 (char*,char*) ;
 int VAR_1 ;
 int FUNC_2 (int ,char*) ;

int FUNC_3(int VAR_2, char *VAR_3[])
{
 VAR_0 = VAR_3[0];

 if (VAR_2 > 1 && FUNC_1(VAR_3[1], "--child") == 0)
  return FUNC_0();

 return FUNC_2(VAR_1, "tm_exec");
}
