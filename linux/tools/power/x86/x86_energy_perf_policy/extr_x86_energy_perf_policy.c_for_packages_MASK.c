
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;

void FUNC_0(unsigned long long VAR_1, int (VAR_2)(int))
{
 int VAR_3;

 for (VAR_3 = 0; VAR_3 <= VAR_0; ++VAR_3) {
  if (VAR_1 & (1UL << VAR_3))
   VAR_2(VAR_3);
 }
}
