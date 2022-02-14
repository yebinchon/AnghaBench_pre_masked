
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int WordEntryPos ;


 int FUNC_0 (int const) ;

int
FUNC_1(const void *VAR_0, const void *VAR_1)
{
 int VAR_2 = FUNC_0(*(const WordEntryPos *) VAR_0);
 int VAR_3 = FUNC_0(*(const WordEntryPos *) VAR_1);

 if (VAR_2 == VAR_3)
  return 0;
 return (VAR_2 > VAR_3) ? 1 : -1;
}
