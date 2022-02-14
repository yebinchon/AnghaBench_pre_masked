
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
typedef int uint16_t ;



__attribute__((used)) static uint16_t FUNC_0(uint16_t VAR_0) {
  if (VAR_0 <= 5243)
    return VAR_0 / 9;
  else {
    uint32_t VAR_1 = (((uint32_t)VAR_0 + 10486) << 8) / (10486 + 0xFFFFUL);


    VAR_1 = VAR_1 * VAR_1 * VAR_1 >> 8;
    if (VAR_1 > 0xFFFFUL)
      return 0xFFFFU;
    else
      return (uint16_t)VAR_1;
  }
}
