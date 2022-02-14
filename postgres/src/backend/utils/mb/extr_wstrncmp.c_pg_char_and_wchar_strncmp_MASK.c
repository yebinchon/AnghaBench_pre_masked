
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ pg_wchar ;



int
FUNC_0(const char *VAR_0, const pg_wchar *VAR_1, size_t VAR_2)
{
 if (VAR_2 == 0)
  return 0;
 do
 {
  if ((pg_wchar) ((unsigned char) *VAR_0) != *VAR_1++)
   return ((pg_wchar) ((unsigned char) *VAR_0) - *(VAR_1 - 1));
  if (*VAR_0++ == 0)
   break;
 } while (--VAR_2 != 0);
 return 0;
}
