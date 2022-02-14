
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int buf ;


 int VAR_0 ;
 long FUNC_0 (char*) ;
 scalar_t__ FUNC_1 (char const*,char const*,char*,int) ;
 int FUNC_2 (char const*) ;
 char* FUNC_3 (char*,char const*) ;

long FUNC_4(const char *VAR_1, const char *VAR_2, const char *VAR_3)
{
 char VAR_4[VAR_0];
 char *VAR_5;

 if (FUNC_1(VAR_1, VAR_2, VAR_4, sizeof(VAR_4)))
  return -1;

 VAR_5 = FUNC_3(VAR_4, VAR_3);
 if (!VAR_5)
  return -1;

 return FUNC_0(VAR_5 + FUNC_2(VAR_3));
}
