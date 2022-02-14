
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

__attribute__((used)) static void FUNC_0(uint8_t VAR_7) {
  VAR_0 |= (1<<VAR_1 | 1<<VAR_2 | 1<<VAR_3 | 1<<VAR_4 | 1<<VAR_5);

  VAR_6 &= ~(1<<VAR_1);

  if (VAR_7 & (1<<0)) {
    VAR_6 |= (1<<VAR_2);
  }
  else {
    VAR_6 &= ~(1<<VAR_2);
  }
  if (VAR_7 & (1<<1)) {
    VAR_6 |= (1<<VAR_3);
  }
  else {
    VAR_6 &= ~(1<<VAR_3);
  }
  if (VAR_7 & (1<<2)) {
    VAR_6 |= (1<<VAR_4);
  }
  else {
    VAR_6 &= ~(1<<VAR_4);
  }
  if (VAR_7 & (1<<3)) {
    VAR_6 |= (1<<VAR_5);
  }
  else {
    VAR_6 &= ~(1<<VAR_5);
  }
}
