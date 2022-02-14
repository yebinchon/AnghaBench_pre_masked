
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (int) ;

void FUNC_1(uint8_t VAR_7) {
  VAR_7 & VAR_0 ? (VAR_5 |= 0b00000010) : (VAR_5 &= ~0b00000010);
  VAR_7 & VAR_1 ? (VAR_5 |= 0b00000100) : (VAR_5 &= ~0b00000100);
  VAR_7 & VAR_3 ? (VAR_5 |= 0b00001000) : (VAR_5 &= ~0b00001000);
  VAR_7 & VAR_2 ? (VAR_6 |= 0b01000000) : (VAR_6 &= ~0b01000000);
  VAR_7 & VAR_4 ? FUNC_0(1) : FUNC_0(0);
}
