
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef unsigned int uint8_t ;
typedef unsigned int uint32_t ;


 unsigned int FUNC_0 (void*) ;

__attribute__((used)) static void FUNC_1(void *VAR_0, uint8_t *VAR_1, unsigned VAR_2)
{
 uint32_t VAR_3, VAR_4, VAR_5;

 for (VAR_3 = 0; VAR_3 < VAR_2; VAR_3 += 4) {
  VAR_5 = FUNC_0(VAR_0 + VAR_3);
  for (VAR_4 = 0; (VAR_4 < 4) && (VAR_3 + VAR_4 < VAR_2); ++VAR_4) {
   VAR_1[VAR_3 + VAR_4] = VAR_5 & 0xFF;
   VAR_5 >>= 8;
  }
 }
}
