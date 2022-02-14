
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef unsigned long uint16_t ;



__attribute__((used)) static uint16_t FUNC_0(const uint16_t *VAR_0, int VAR_1,
       unsigned long VAR_2)
{
 int VAR_3;

 for (VAR_3 = 0; VAR_3 < VAR_1; VAR_3++)
  VAR_2 += VAR_0[VAR_3];

 while (VAR_2 >> 16)
  VAR_2 = (VAR_2 & 0xFFFF) + (VAR_2 >> 16);

 return ~VAR_2;
}
