
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;


 int VAR_0 ;
 int* VAR_1 ;

__attribute__((used)) static uint32_t FUNC_0(int VAR_2, uint32_t VAR_3) {
  uint32_t VAR_4 = 0;
  int VAR_5 = 0;
  while (VAR_5 < VAR_2) {
    VAR_5 += 4;
    VAR_4 |= VAR_1[VAR_3 & 0xf] << (VAR_0 + 1 - VAR_5);
    VAR_3 >>= 4;
  }
  VAR_4 >>= (VAR_0 + 1 - VAR_2);
  return VAR_4;
}
