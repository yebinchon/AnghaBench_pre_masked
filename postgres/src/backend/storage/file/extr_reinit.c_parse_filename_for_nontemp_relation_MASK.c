
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int ForkNumber ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char const*,int *) ;
 scalar_t__ FUNC_1 (unsigned char) ;

bool
FUNC_2(const char *VAR_2, int *VAR_3,
         ForkNumber *VAR_4)
{
 int VAR_5;


 for (VAR_5 = 0; FUNC_1((unsigned char) VAR_2[VAR_5]); ++VAR_5)
  ;
 if (VAR_5 == 0 || VAR_5 > VAR_1)
  return 0;
 *VAR_3 = VAR_5;


 if (VAR_2[VAR_5] != '_')
  *VAR_4 = VAR_0;
 else
 {
  int VAR_6;

  VAR_6 = FUNC_0(&VAR_2[VAR_5 + 1], VAR_4);
  if (VAR_6 <= 0)
   return 0;
  VAR_5 += VAR_6 + 1;
 }


 if (VAR_2[VAR_5] == '.')
 {
  int VAR_7;

  for (VAR_7 = 1; FUNC_1((unsigned char) VAR_2[VAR_5 + VAR_7]); ++VAR_7)
   ;
  if (VAR_7 <= 1)
   return 0;
  VAR_5 += VAR_7;
 }


 if (VAR_2[VAR_5] != '\0')
  return 0;
 return 1;
}
