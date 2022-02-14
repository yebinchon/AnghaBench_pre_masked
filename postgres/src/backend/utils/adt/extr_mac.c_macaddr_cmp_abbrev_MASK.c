
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int SortSupport ;
typedef scalar_t__ Datum ;



__attribute__((used)) static int
FUNC_0(Datum VAR_0, Datum VAR_1, SortSupport VAR_2)
{
 if (VAR_0 > VAR_1)
  return 1;
 else if (VAR_0 == VAR_1)
  return 0;
 else
  return -1;
}
