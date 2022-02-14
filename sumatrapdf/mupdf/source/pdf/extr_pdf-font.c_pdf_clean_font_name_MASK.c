
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 char const*** VAR_0 ;
 scalar_t__ FUNC_0 (char const***) ;
 int FUNC_1 (char const*,char const*) ;

const char *FUNC_2(const char *VAR_1)
{
 int VAR_2, VAR_3;
 for (VAR_2 = 0; VAR_2 < (int)FUNC_0(VAR_0); VAR_2++)
  for (VAR_3 = 0; VAR_0[VAR_2][VAR_3]; VAR_3++)
   if (!FUNC_1(VAR_0[VAR_2][VAR_3], VAR_1))
    return VAR_0[VAR_2][0];
 return VAR_1;
}
