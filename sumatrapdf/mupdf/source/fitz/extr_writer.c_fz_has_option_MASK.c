
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int fz_context ;


 char* FUNC_0 (int *,char const**,char const**,char const*) ;
 size_t FUNC_1 (char const*) ;
 int FUNC_2 (char const*,char const*,size_t) ;

int
FUNC_3(fz_context *VAR_0, const char *VAR_1, const char *VAR_2, const char **VAR_3)
{
 const char *VAR_4;
 size_t VAR_5 = FUNC_1(VAR_2);
 while ((VAR_1 = FUNC_0(VAR_0, &VAR_4, VAR_3, VAR_1)))
  if (!FUNC_2(VAR_4, VAR_2, VAR_5) && (VAR_4[VAR_5] == '=' || VAR_4[VAR_5] == ',' || VAR_4[VAR_5] == 0))
   return 1;
 return 0;
}
