
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int uint32_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ,int,int) ;

void FUNC_1(uint8_t VAR_4) {
  uint32_t VAR_5 = ((VAR_3|VAR_2)&0b01100000)>>1 | ((VAR_3|VAR_2)&0b00010000)<<1 | ((VAR_3|VAR_2)&0b01000000)>>2;



  uint32_t VAR_6 = (VAR_4&0b1)<<5 | ((VAR_3|VAR_2)&0b1000)>>2;



  FUNC_0(VAR_1, ~VAR_5, 0b00110000);
  FUNC_0(VAR_0, ~VAR_6, 0b00100010);
}
