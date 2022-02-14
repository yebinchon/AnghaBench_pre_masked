
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;


 int* VAR_0 ;

__attribute__((used)) static inline uint32_t
FUNC_0(uint32_t VAR_1, const void *VAR_2, int VAR_3)
{
 const unsigned char *VAR_4 = VAR_2;
 while (--VAR_3 >= 0)
  VAR_1 = VAR_0[(VAR_1 ^ *VAR_4++) & 0xff] ^ (VAR_1 >> 8);
 return VAR_1;
}
