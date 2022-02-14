
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
__attribute__((used)) static unsigned long int FUNC_0 (unsigned char* VAR_0, unsigned int VAR_1, unsigned int VAR_2)
{
 unsigned int VAR_3;
 unsigned long int VAR_4 = 0;

 for (VAR_3 = VAR_1; VAR_3 < VAR_1 + VAR_2; VAR_3++)
 {
  VAR_4 = VAR_4 +
   ((((VAR_0[VAR_3 / 8]) >> (7 - (VAR_3 % 8))) & 0x01) << (VAR_2 - (VAR_3 - VAR_1) - 1));
 }
 return VAR_4;
}
