
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ int32 ;



__attribute__((used)) static int
FUNC_0(const void *VAR_0, const void *VAR_1)
{
 int32 VAR_2 = *((const int32 *) VAR_0);
 int32 VAR_3 = *((const int32 *) VAR_1);

 if (VAR_2 == VAR_3)
  return 0;
 return (VAR_2 > VAR_3) ? 1 : -1;
}
