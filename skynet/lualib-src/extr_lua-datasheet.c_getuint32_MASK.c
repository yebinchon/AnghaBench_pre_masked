
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int uint32_t ;



__attribute__((used)) static inline uint32_t
FUNC_0(const void *VAR_0) {
 union {
  uint32_t d;
  uint8_t t[4];
 } VAR_1 = { 1 };
 if (VAR_1.t[0] == 0) {

  VAR_1.d = *(const uint32_t *)VAR_0;
  return VAR_1.t[0] | VAR_1.t[1] << 4 | VAR_1.t[2] << 8 | VAR_1.t[3] << 12;
 } else {
  return *(const uint32_t *)VAR_0;
 }
}
