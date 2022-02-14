
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int int32_t ;



__attribute__((used)) static inline int32_t
FUNC_0(const uint8_t * VAR_0) {
 const uint8_t * VAR_1 = (const uint8_t *)VAR_0;
 int32_t VAR_2 = VAR_1[0] | VAR_1[1]<<8 | VAR_1[2]<<16 | VAR_1[3]<<24;
 return VAR_2;
}
