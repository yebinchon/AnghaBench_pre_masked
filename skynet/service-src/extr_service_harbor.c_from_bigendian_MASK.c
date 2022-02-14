
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int uint32_t ;



__attribute__((used)) static inline uint32_t
FUNC_0(uint32_t VAR_0) {
 union {
  uint32_t big;
  uint8_t bytes[4];
 } VAR_1;
 VAR_1.big = VAR_0;
 return VAR_1.bytes[0] << 24 | VAR_1.bytes[1] << 16 | VAR_1.bytes[2] << 8 | VAR_1.bytes[3];
}
