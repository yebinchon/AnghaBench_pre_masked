
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ pg_wchar ;



__attribute__((used)) static int
FUNC_0(const void *VAR_0, const void *VAR_1)
{
 const pg_wchar *VAR_2 = (const pg_wchar *) VAR_0;
 const pg_wchar *VAR_3 = (const pg_wchar *) VAR_1;

 if (*VAR_2 < VAR_3[0])
  return -1;
 if (*VAR_2 > VAR_3[1])
  return 1;

 return 0;
}
