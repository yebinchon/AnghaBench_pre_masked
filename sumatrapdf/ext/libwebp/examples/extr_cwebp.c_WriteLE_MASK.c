
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint8_t ;
typedef int uint32_t ;
typedef int FILE ;


 int FUNC_0 (scalar_t__*,int,int,int * const) ;

__attribute__((used)) static int FUNC_1(FILE* const VAR_0, uint32_t VAR_1, int VAR_2) {
  uint8_t VAR_3[4];
  int VAR_4;
  for (VAR_4 = 0; VAR_4 < VAR_2; ++VAR_4) {
    VAR_3[VAR_4] = (uint8_t)(VAR_1 & 0xff);
    VAR_1 >>= 8;
  }
  return (FUNC_0(VAR_3, VAR_2, 1, VAR_0) == 1);
}
