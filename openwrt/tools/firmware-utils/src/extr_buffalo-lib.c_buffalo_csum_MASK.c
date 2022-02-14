
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;



uint32_t FUNC_0(uint32_t VAR_0, void *VAR_1, unsigned long VAR_2)
{
 signed char *VAR_3 = VAR_1;

 while (VAR_2--) {
  int VAR_4;

  VAR_0 ^= *VAR_3++;
  for (VAR_4 = 0; VAR_4 < 8; VAR_4++)
   VAR_0 = (VAR_0 >> 1) ^ ((VAR_0 & 1) ? 0xedb88320ul : 0);
 }

 return VAR_0;
}
