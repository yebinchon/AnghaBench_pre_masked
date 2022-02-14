
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ pg_wchar ;



__attribute__((used)) static int
FUNC_0(const pg_wchar *VAR_0, const pg_wchar *VAR_1)
{
 for (;;)
 {
  if (*VAR_0 < *VAR_1)
   return -1;
  if (*VAR_0 > *VAR_1)
   return 1;
  if (*VAR_0 == 0)
   return 0;
  VAR_0++;
  VAR_1++;
 }
}
