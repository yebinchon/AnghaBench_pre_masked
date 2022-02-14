
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int const VAR_0 ;
 int const VAR_1 ;

__attribute__((used)) static bool
FUNC_0(int *VAR_2, int VAR_3)
{
 int const VAR_4 = *VAR_2;
 if ((VAR_4 >= 0) ? (VAR_3 > VAR_0 - VAR_4) : (VAR_3 < VAR_1 - VAR_4))
  return 1;
 *VAR_2 += VAR_3;
 return 0;
}
