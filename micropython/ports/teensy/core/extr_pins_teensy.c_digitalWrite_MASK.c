
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint8_t ;
typedef int uint32_t ;


 scalar_t__ VAR_0 ;
 int volatile VAR_1 ;
 int volatile VAR_2 ;
 int* FUNC_0 (scalar_t__) ;
 int* FUNC_1 (scalar_t__) ;
 scalar_t__* FUNC_2 (scalar_t__) ;
 int* FUNC_3 (scalar_t__) ;

void FUNC_4(uint8_t VAR_3, uint8_t VAR_4)
{
 if (VAR_3 >= VAR_0) return;
 if (*FUNC_2(VAR_3)) {
  if (VAR_4) {
   *FUNC_3(VAR_3) = 1;
  } else {
   *FUNC_0(VAR_3) = 1;
  }
 } else {
  volatile uint32_t *VAR_5 = FUNC_1(VAR_3);
  if (VAR_4) {

   *VAR_5 |= (VAR_1 | VAR_2);

  } else {

   *VAR_5 &= ~(VAR_1);

  }
 }

}
