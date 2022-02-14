
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef enum Device { ____Placeholder_Device } Device ;


 int VAR_0 ;
 int FUNC_0 (int) ;

void FUNC_1(uint8_t VAR_1, enum Device VAR_2) {
  for(uint8_t VAR_3 = 0; VAR_3 < 8; VAR_3++) {
    if(VAR_2 == VAR_0) {
      FUNC_0(VAR_1 & 0b10000000);
      VAR_1 <<= 1;
    }
  }
}
