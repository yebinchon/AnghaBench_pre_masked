
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef enum Device { ____Placeholder_Device } Device ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int) ;

void FUNC_2(uint8_t VAR_2, enum Device VAR_3) {
  for(uint8_t VAR_4 = 0; VAR_4 < 8; VAR_4++) {
    if(VAR_3 == VAR_1) {
      FUNC_0(VAR_2 & 0b10000000);
    }
    if(VAR_3 == VAR_0) {
      FUNC_1(VAR_2 & 0b10000000);
    }
    VAR_2 <<= 1;
  }
}
