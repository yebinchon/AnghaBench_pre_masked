
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint8_t ;
typedef scalar_t__ uint32_t ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 () ;

uint32_t FUNC_1(volatile uint8_t *VAR_1, uint32_t VAR_2)
{
 uint32_t VAR_3 = VAR_2 * VAR_0;
 uint32_t VAR_4, VAR_5;


 while (!*VAR_1) {
  if (--VAR_3 == 0) return 0;
 }

 while (*VAR_1) {
  if (--VAR_3 == 0) return 0;
 }
 VAR_4 = FUNC_0();

 while (!*VAR_1) {
  if (--VAR_3 == 0) return 0;
 }
 VAR_5 = FUNC_0();
 return VAR_5 - VAR_4;
}
