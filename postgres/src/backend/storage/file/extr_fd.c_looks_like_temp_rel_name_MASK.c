
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (char const*,int *) ;
 scalar_t__ FUNC_1 (unsigned char) ;

bool
FUNC_2(const char *VAR_0)
{
 int VAR_1;
 int VAR_2;


 if (VAR_0[0] != 't')
  return 0;


 for (VAR_1 = 1; FUNC_1((unsigned char) VAR_0[VAR_1]); ++VAR_1)
  ;
 if (VAR_1 == 1 || VAR_0[VAR_1] != '_')
  return 0;


 for (VAR_2 = ++VAR_1; FUNC_1((unsigned char) VAR_0[VAR_1]); ++VAR_1)
  ;
 if (VAR_2 == VAR_1)
  return 0;


 if (VAR_0[VAR_1] == '_')
 {
  int VAR_3 = FUNC_0(&VAR_0[VAR_1 + 1], ((void*)0));

  if (VAR_3 <= 0)
   return 0;
  VAR_1 += VAR_3 + 1;
 }
 if (VAR_0[VAR_1] == '.')
 {
  int VAR_4;

  for (VAR_4 = 1; FUNC_1((unsigned char) VAR_0[VAR_1 + VAR_4]); ++VAR_4)
   ;
  if (VAR_4 <= 1)
   return 0;
  VAR_1 += VAR_4;
 }


 if (VAR_0[VAR_1] != '\0')
  return 0;
 return 1;
}
