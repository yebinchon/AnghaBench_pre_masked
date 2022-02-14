
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (char*) ;
 char* FUNC_1 (char const*,int) ;
 int FUNC_2 (char,char const*,int) ;
 int FUNC_3 (char const*) ;

void
FUNC_4(char VAR_0, const char *VAR_1)
{
 int VAR_2 = FUNC_3(VAR_1);
 char *VAR_3;

 VAR_3 = FUNC_1(VAR_1, VAR_2);
 if (VAR_3 != VAR_1)
 {
  (void) FUNC_2(VAR_0, VAR_3, FUNC_3(VAR_3) + 1);
  FUNC_0(VAR_3);
  return;
 }
 (void) FUNC_2(VAR_0, VAR_1, VAR_2 + 1);
}
