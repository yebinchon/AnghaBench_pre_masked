
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int uint64_t ;
typedef int fdt64_t ;



__attribute__((used)) static inline uint64_t FUNC_0(const fdt64_t *VAR_0)
{
 const uint8_t *VAR_1 = (const uint8_t *)VAR_0;

 return ((uint64_t)VAR_1[0] << 56)
  | ((uint64_t)VAR_1[1] << 48)
  | ((uint64_t)VAR_1[2] << 40)
  | ((uint64_t)VAR_1[3] << 32)
  | ((uint64_t)VAR_1[4] << 24)
  | ((uint64_t)VAR_1[5] << 16)
  | ((uint64_t)VAR_1[6] << 8)
  | VAR_1[7];
}
