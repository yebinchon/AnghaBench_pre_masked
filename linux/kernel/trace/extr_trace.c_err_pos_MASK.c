
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 scalar_t__ FUNC_0 (int) ;
 int FUNC_1 (char*) ;
 char* FUNC_2 (char*,char const*) ;

unsigned int FUNC_3(char *VAR_0, const char *VAR_1)
{
 char *VAR_2;

 if (FUNC_0(!FUNC_1(VAR_0)))
  return 0;

 VAR_2 = FUNC_2(VAR_0, VAR_1);
 if (VAR_2)
  return VAR_2 - VAR_0;

 return 0;
}
