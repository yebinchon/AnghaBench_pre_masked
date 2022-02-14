
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;



__attribute__((used)) static uint8_t FUNC_0(uint8_t VAR_0, int VAR_1){
  uint8_t VAR_2 = 0;
  if (VAR_0 & (1 << (2*(3-VAR_1))))
    VAR_2 = 0b1110;
  else
    VAR_2 = 0b1000;
  if (VAR_0 & (2 << (2*(3-VAR_1))))
    VAR_2 += 0b11100000;
  else
    VAR_2 += 0b10000000;
  return VAR_2;
}
