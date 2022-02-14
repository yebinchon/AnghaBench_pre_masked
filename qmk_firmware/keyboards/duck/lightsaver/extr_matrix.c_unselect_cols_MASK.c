
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;

__attribute__((used)) static void FUNC_0(void) {
  VAR_0 |= 0b01110000;
  VAR_4 &= ~0b01110000;

  VAR_1 |= (1<<6) | (1<<7);
  VAR_5 &= ~((1<<6) | (1<<7));

  VAR_3 |= (1<<0) | (1<<1);
  VAR_7 &= ~((1<<0) | (1<<1));

  VAR_2 |= (1<<7);
  VAR_6 &= ~(1<<7);
}
