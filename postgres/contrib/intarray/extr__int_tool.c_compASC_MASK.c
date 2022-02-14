
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ int32 ;



int
FUNC_0(const void *VAR_0, const void *VAR_1)
{
 if (*(const int32 *) VAR_0 == *(const int32 *) VAR_1)
  return 0;
 return (*(const int32 *) VAR_0 > *(const int32 *) VAR_1) ? 1 : -1;
}
