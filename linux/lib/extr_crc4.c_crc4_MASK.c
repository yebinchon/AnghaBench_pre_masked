
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef unsigned long long uint8_t ;
typedef unsigned long long uint64_t ;


 unsigned long long* VAR_0 ;

uint8_t FUNC_0(uint8_t VAR_1, uint64_t VAR_2, int VAR_3)
{
 int VAR_4;


 VAR_2 &= (1ull << VAR_3) - 1;


 VAR_3 = (VAR_3 + 3) & ~0x3;


 for (VAR_4 = VAR_3 - 4; VAR_4 >= 0; VAR_4 -= 4)
  VAR_1 = VAR_0[VAR_1 ^ ((VAR_2 >> VAR_4) & 0xf)];

 return VAR_1;
}
