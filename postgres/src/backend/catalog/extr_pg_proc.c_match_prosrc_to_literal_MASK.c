
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (char const*) ;
 scalar_t__ FUNC_1 (char const*,char const*,int) ;

__attribute__((used)) static bool
FUNC_2(const char *VAR_0, const char *VAR_1,
      int VAR_2, int *VAR_3)
{
 int VAR_4 = VAR_2;
 int VAR_5;
 while (*VAR_0)
 {
  VAR_2--;





  if (*VAR_1 == '\\')
  {
   VAR_1++;
   if (VAR_2 > 0)
    VAR_4++;
  }
  else if (*VAR_1 == '\'')
  {
   if (VAR_1[1] != '\'')
    goto fail;
   VAR_1++;
   if (VAR_2 > 0)
    VAR_4++;
  }
  VAR_5 = FUNC_0(VAR_0);
  if (FUNC_1(VAR_0, VAR_1, VAR_5) != 0)
   goto fail;
  VAR_0 += VAR_5;
  VAR_1 += VAR_5;
 }

 if (*VAR_1 == '\'' && VAR_1[1] != '\'')
 {

  *VAR_3 = VAR_4;
  return 1;
 }

fail:

 *VAR_3 = VAR_4;
 return 0;
}
