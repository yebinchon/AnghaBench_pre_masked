
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
__attribute__((used)) static int
FUNC_0(const void *VAR_0, const void *VAR_1)
{
 long VAR_2 = *((const long *) VAR_0);
 long VAR_3 = *((const long *) VAR_1);


 if (VAR_2 < VAR_3)
  return 1;
 if (VAR_2 > VAR_3)
  return -1;
 return 0;
}
