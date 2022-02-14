
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ float8 ;



__attribute__((used)) static int
FUNC_0(const void *VAR_0, const void *VAR_1)
{
 const float8 *VAR_2 = (const float8 *) VAR_0;
 const float8 *VAR_3 = (const float8 *) VAR_1;

 if (*VAR_2 < *VAR_3)
  return -1;
 else if (*VAR_2 == *VAR_3)
  return 0;
 else
  return 1;
}
