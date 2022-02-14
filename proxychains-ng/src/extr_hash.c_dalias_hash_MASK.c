
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint_fast32_t ;
typedef int uint32_t ;



uint32_t FUNC_0(char *VAR_0) {
 unsigned char *VAR_1 = (void *) VAR_0;
 uint_fast32_t VAR_2 = 0;
 while(*VAR_1) {
  VAR_2 = 16 * VAR_2 + *VAR_1++;
  VAR_2 ^= VAR_2 >> 24 & 0xf0;
 }
 return VAR_2 & 0xfffffff;
}
