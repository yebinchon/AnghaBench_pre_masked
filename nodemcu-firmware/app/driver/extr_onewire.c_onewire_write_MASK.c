
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;


 int FUNC_0 (int,int,int) ;

void FUNC_1(uint8_t VAR_0, uint8_t VAR_1, uint8_t VAR_2 ) {
  uint8_t VAR_3;

  for (VAR_3 = 0x01; VAR_3; VAR_3 <<= 1) {

    FUNC_0(VAR_0, (VAR_3 & VAR_1)?1:0, VAR_3 & 0x80 ? VAR_2 : 0);
  }
}
