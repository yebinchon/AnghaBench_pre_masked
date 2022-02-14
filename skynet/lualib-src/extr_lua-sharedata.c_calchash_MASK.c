
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int uint32_t ;



__attribute__((used)) static uint32_t
FUNC_0(const char * VAR_0, size_t VAR_1) {
 uint32_t VAR_2 = (uint32_t)VAR_1;
 size_t VAR_3;
 size_t VAR_4 = (VAR_1 >> 5) + 1;
 for (VAR_3 = VAR_1; VAR_3 >= VAR_4; VAR_3 -= VAR_4) {
  VAR_2 = VAR_2 ^ ((VAR_2<<5) + (VAR_2>>2) + (uint8_t)(VAR_0[VAR_3 - 1]));
 }
 return VAR_2;
}
