
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t uint8_t ;
typedef size_t uint16_t ;
typedef int LED_TYPE ;


 int FUNC_0 (int ,size_t) ;

void FUNC_1(LED_TYPE *VAR_0, uint16_t VAR_1) {
  uint8_t VAR_2 = 0;
  while (VAR_2 < VAR_1) {
    FUNC_0(VAR_0[VAR_2], VAR_2);
    VAR_2++;
  }
}
