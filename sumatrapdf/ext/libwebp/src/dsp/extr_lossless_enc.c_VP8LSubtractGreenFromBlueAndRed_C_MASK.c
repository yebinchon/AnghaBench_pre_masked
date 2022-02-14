
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;



void FUNC_0(uint32_t* VAR_0, int VAR_1) {
  int VAR_2;
  for (VAR_2 = 0; VAR_2 < VAR_1; ++VAR_2) {
    const int VAR_3 = VAR_0[VAR_2];
    const int VAR_4 = (VAR_3 >> 8) & 0xff;
    const uint32_t VAR_5 = (((VAR_3 >> 16) & 0xff) - VAR_4) & 0xff;
    const uint32_t VAR_6 = (((VAR_3 >> 0) & 0xff) - VAR_4) & 0xff;
    VAR_0[VAR_2] = (VAR_3 & 0xff00ff00u) | (VAR_5 << 16) | VAR_6;
  }
}
