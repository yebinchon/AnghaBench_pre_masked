
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;



__attribute__((used)) static void FUNC_0(int VAR_0, uint32_t* const VAR_1, uint32_t* const VAR_2) {
  const int VAR_3 = VAR_0 >> 8;
  ++VAR_1[((VAR_0 >> 16) - VAR_3) & 0xff];
  ++VAR_2[((VAR_0 >> 0) - VAR_3) & 0xff];
}
