
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;

__attribute__((used)) static void FUNC_0(uint8_t VAR_3) {




  if (VAR_3 & (1<<0)) {
    VAR_2 |= (1<<6);
  } else {
    VAR_2 &= ~(1<<6);
  }

  if (VAR_3 & (1<<1)) {
    VAR_0 |= (1<<7);
  } else {
    VAR_0 &= ~(1<<7);
  }

  if (VAR_3 & (1<<2)) {
    VAR_1 |= (1<<0);
  } else {
    VAR_1 &= ~(1<<0);
  }

  if (VAR_3 & (1<<3)) {
    VAR_1 |= (1<<1);
  } else {
    VAR_1 &= ~(1<<1);
  }
}
