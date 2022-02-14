
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint8_t ;
typedef int uint32_t ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int* FUNC_1 (scalar_t__) ;
 int* FUNC_2 (scalar_t__) ;

void FUNC_3(uint8_t VAR_7, uint8_t VAR_8)
{
 volatile uint32_t *VAR_9;

 if (VAR_7 >= VAR_0) return;
 VAR_9 = FUNC_1(VAR_7);

 if (VAR_8 == VAR_2) {
  *FUNC_2(VAR_7) = 1;
  *VAR_9 = VAR_6 | VAR_3 | FUNC_0(1);
 } else {
  *FUNC_2(VAR_7) = 0;
  if (VAR_8 == VAR_1) {
   *VAR_9 = FUNC_0(1);
  } else {
   *VAR_9 = FUNC_0(1) | VAR_4 | VAR_5;
  }
 }
}
