
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
 scalar_t__* VAR_6 ;
 scalar_t__* VAR_7 ;
 int FUNC_0 () ;

void FUNC_1(void)
{

 VAR_2 |= 0b01111011;

 VAR_1 &= ~0b10000000;
 VAR_0 &= ~0b01111111;
 VAR_5 |= 0b10000000;
 VAR_4 |= 0b01111111;

 for (uint8_t VAR_8=0; VAR_8 < VAR_3; VAR_8++) {
  VAR_6[VAR_8] = 0;
  VAR_7[VAR_8] = 0;
 }

 FUNC_0();
}
