
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 char* FUNC_0 (char const*,char,int) ;
 scalar_t__ FUNC_1 (char const*,char const*,int) ;
 int FUNC_2 (char const*) ;

int FUNC_3(const char *VAR_0, int VAR_1, const char *VAR_2)
{
 int VAR_3 = FUNC_2(VAR_2);
 const char *VAR_4;

 while (VAR_1 >= VAR_3) {
  if (FUNC_1(VAR_2, VAR_0, VAR_3+1) == 0)
   return 1;
  VAR_4 = FUNC_0(VAR_0, '\0', VAR_1);
  if (!VAR_4)
   return 0;
  VAR_1 -= (VAR_4-VAR_0) + 1;
  VAR_0 = VAR_4 + 1;
 }
 return 0;
}
