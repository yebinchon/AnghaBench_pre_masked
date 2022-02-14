
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int uint64_t ;



__attribute__((used)) static inline void FUNC_0(void *VAR_0, uint64_t VAR_1)
{
 uint8_t *VAR_2 = VAR_0;

 VAR_2[0] = VAR_1 >> 56;
 VAR_2[1] = (VAR_1 >> 48) & 0xff;
 VAR_2[2] = (VAR_1 >> 40) & 0xff;
 VAR_2[3] = (VAR_1 >> 32) & 0xff;
 VAR_2[4] = (VAR_1 >> 24) & 0xff;
 VAR_2[5] = (VAR_1 >> 16) & 0xff;
 VAR_2[6] = (VAR_1 >> 8) & 0xff;
 VAR_2[7] = VAR_1 & 0xff;
}
