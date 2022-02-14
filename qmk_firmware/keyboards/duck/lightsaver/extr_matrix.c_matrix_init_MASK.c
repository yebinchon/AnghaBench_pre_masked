
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t uint8_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 size_t VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 () ;
 scalar_t__* VAR_7 ;
 scalar_t__* VAR_8 ;
 int FUNC_1 () ;
 int FUNC_2 () ;

void FUNC_3(void) {
  VAR_1 |= 0b11010000;
  VAR_5 &= ~0b01010000;
  VAR_0 |= 0b00011111;
  VAR_4 &= ~0b00001110;
  VAR_4 |= 0b00010001;
  VAR_2 |= 0b01000000;
  VAR_6 &= ~0b01000000;

  FUNC_2();
  FUNC_0();

  for (uint8_t VAR_9=0; VAR_9 < VAR_3; VAR_9++) {
    VAR_7[VAR_9] = 0;
    VAR_8[VAR_9] = 0;
  }

  FUNC_1();
}
