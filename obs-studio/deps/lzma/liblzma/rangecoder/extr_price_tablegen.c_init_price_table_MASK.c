
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;


 int VAR_0 ;
 int const VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int) ;
 int* VAR_4 ;

__attribute__((used)) static void
FUNC_1(void)
{
 for (uint32_t VAR_5 = (FUNC_0(1) << VAR_3) / 2;
   VAR_5 < VAR_0;
   VAR_5 += (FUNC_0(1) << VAR_3)) {
  const uint32_t VAR_6 = VAR_2;
  uint32_t VAR_7 = VAR_5;
  uint32_t VAR_8 = 0;

  for (uint32_t VAR_9 = 0; VAR_9 < VAR_6; ++VAR_9) {
   VAR_7 *= VAR_7;
   VAR_8 <<= 1;

   while (VAR_7 >= (FUNC_0(1) << 16)) {
    VAR_7 >>= 1;
    ++VAR_8;
   }
  }

  VAR_4[VAR_5 >> VAR_3]
    = (VAR_1 << VAR_6)
    - 15 - VAR_8;
 }

 return;
}
