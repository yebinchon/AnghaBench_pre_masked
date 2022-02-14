
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;



__attribute__((used)) static void FUNC_0(uint32_t VAR_0,
                      uint32_t* const VAR_1, uint32_t* const VAR_2,
                      uint32_t* const VAR_3, uint32_t* const VAR_4) {
  ++VAR_1[(VAR_0 >> 24) & 0xff];
  ++VAR_2[(VAR_0 >> 16) & 0xff];
  ++VAR_3[(VAR_0 >> 8) & 0xff];
  ++VAR_4[(VAR_0 >> 0) & 0xff];
}
