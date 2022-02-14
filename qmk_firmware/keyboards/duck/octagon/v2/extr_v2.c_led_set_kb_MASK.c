
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
 int FUNC_0 (int*) ;

void FUNC_1(uint8_t VAR_6) {
    bool VAR_7[7] = {
    VAR_5 & (1<<VAR_1),
    VAR_5 & (1<<VAR_3),
    VAR_5 & (1<<VAR_2),
    VAR_4 & (1<<1),
    VAR_4 & (1<<2),
    VAR_4 & (1<<3),
    VAR_4 & (1<<4)
  };
  FUNC_0(VAR_7);
  VAR_5 & (1<<VAR_1) ? (VAR_0 &= ~0b00000001) : (VAR_0 |= 0b00000001);
  VAR_5 & (1<<VAR_3) ? (VAR_0 &= ~0b00010000) : (VAR_0 |= 0b00010000);
}
