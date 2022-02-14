
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

void FUNC_0(uint8_t VAR_7) {
  VAR_0 |= (1 << 4);
  VAR_1 |= (1 << 6) | (1 << 7);

  if (VAR_7 & (1 << VAR_5)) {
    VAR_3 |= (1 << 7);
  } else {
    VAR_3 &= ~(1 << 7);
  }

  if (VAR_7 & (1 << VAR_4)) {
    VAR_2 |= (1 << 4);
  } else {
    VAR_2 &= ~(1 << 4);
  }

  if (VAR_7 & (1 << VAR_6)) {
    VAR_3 |= (1 << 6);
  } else {
    VAR_3 &= ~(1 << 6);
  }
}
