
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;

void FUNC_0(uint8_t VAR_3) {
  switch(VAR_3) {
  case 0:
    VAR_2 |= VAR_0;
    VAR_2 |= VAR_1;
  break;
  case 1:
    VAR_2 &= ~VAR_0;
    VAR_2 |= VAR_1;
  break;
  case 2:
    VAR_2 |= VAR_0;
    VAR_2 &= ~VAR_1;
  break;
  case 3:
    VAR_2 &= ~VAR_0;
    VAR_2 &= ~VAR_1;
  break;
  }
}
