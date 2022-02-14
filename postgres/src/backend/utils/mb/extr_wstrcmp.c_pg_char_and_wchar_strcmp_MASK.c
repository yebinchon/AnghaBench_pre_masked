
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ pg_wchar ;



int
FUNC_0(const char *VAR_0, const pg_wchar *VAR_1)
{
 while ((pg_wchar) *VAR_0 == *VAR_1++)
  if (*VAR_0++ == 0)
   return 0;
 return *(const unsigned char *) VAR_0 - *(const pg_wchar *) (VAR_1 - 1);
}
