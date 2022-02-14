
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (char const*) ;

__attribute__((used)) static int
FUNC_1(const unsigned char *VAR_0, const unsigned char *VAR_1)
{
 int VAR_2 = FUNC_0((const char *) VAR_0) - 1,
    VAR_3 = FUNC_0((const char *) VAR_1) - 1;

 while (VAR_2 >= 0 && VAR_3 >= 0)
 {
  if (VAR_0[VAR_2] < VAR_1[VAR_3])
   return -1;
  if (VAR_0[VAR_2] > VAR_1[VAR_3])
   return 1;
  VAR_2--;
  VAR_3--;
 }
 if (VAR_2 < VAR_3)
  return -1;
 if (VAR_2 > VAR_3)
  return 1;

 return 0;
}
