
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int uint16_t ;
typedef int ordinal ;



__attribute__((used)) static inline void FUNC_0(uint16_t *VAR_0, uint8_t VAR_1) {
 *VAR_0 = (((*VAR_0) & 0x00ff) | (((VAR_1) & 0xff) << 8));
}
