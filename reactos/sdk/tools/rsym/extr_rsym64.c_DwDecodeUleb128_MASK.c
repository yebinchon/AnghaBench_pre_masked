
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
unsigned long
FUNC_0(unsigned long *VAR_0, char *VAR_1)
{
 unsigned long VAR_2 = 0;
 unsigned long VAR_3 = 0;
 unsigned char VAR_4;
 unsigned long VAR_5 = 0;

 do
 {
  VAR_4 = VAR_1[VAR_5];
  VAR_5++;
  VAR_2 |= (VAR_4 & 0x7f) << VAR_3;
  VAR_3 += 7;
 }
 while (VAR_4 & 0x80);

    *VAR_0 = VAR_2;
 return VAR_5;
}
