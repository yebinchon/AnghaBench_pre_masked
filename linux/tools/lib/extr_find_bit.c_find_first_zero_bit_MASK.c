
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 unsigned long VAR_0 ;
 scalar_t__ FUNC_0 (unsigned long const) ;
 unsigned long FUNC_1 (scalar_t__,unsigned long) ;

unsigned long FUNC_2(const unsigned long *VAR_1, unsigned long VAR_2)
{
 unsigned long VAR_3;

 for (VAR_3 = 0; VAR_3 * VAR_0 < VAR_2; VAR_3++) {
  if (VAR_1[VAR_3] != ~0UL)
   return FUNC_1(VAR_3 * VAR_0 + FUNC_0(VAR_1[VAR_3]), VAR_2);
 }

 return VAR_2;
}
