
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t uint8_t ;
typedef int uint16_t ;
typedef int LED_TYPE ;


 size_t VAR_0 ;
 size_t VAR_1 ;
 int * VAR_2 ;
 int * VAR_3 ;
 int FUNC_0 () ;
 int FUNC_1 (int ,size_t,size_t,int *) ;

void FUNC_2(uint8_t VAR_4, uint8_t VAR_5)
{
  uint8_t VAR_6 = 255;

  for (uint8_t VAR_7 = 0; VAR_7 < VAR_1; VAR_7++) {
    FUNC_1(VAR_3[VAR_4], VAR_6, VAR_5, (LED_TYPE *)&VAR_2[VAR_7]);
  }

  uint8_t VAR_8 = VAR_4 < VAR_0 ? VAR_4 + 1 : VAR_4;

  uint16_t VAR_9 = VAR_4 < VAR_0 ? VAR_3[VAR_8] : 0;
  uint8_t VAR_10 = VAR_4 < VAR_0 ? VAR_5 : 0;
  uint8_t VAR_11 = VAR_4 < VAR_0 ? VAR_6 : 0;


  for (uint8_t VAR_12 = 0; VAR_12 < 3; VAR_12++) {
    FUNC_1(VAR_9, VAR_11, VAR_10, (LED_TYPE *)&VAR_2[VAR_12]);
  }

  for (uint8_t VAR_13 = 11; VAR_13 < 14; VAR_13++) {
    FUNC_1(VAR_9, VAR_11, VAR_10, (LED_TYPE *)&VAR_2[VAR_13]);
  }

  FUNC_0();
}
