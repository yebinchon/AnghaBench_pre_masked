
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint64 ;



void
FUNC_0(char *VAR_0, int VAR_1, uint64 VAR_2)
{
 if (VAR_2 < (((uint64) 1) << ((VAR_1 - 1) * 3)))
 {

  VAR_0[--VAR_1] = ' ';
  while (VAR_1)
  {
   VAR_0[--VAR_1] = (VAR_2 & 7) + '0';
   VAR_2 >>= 3;
  }
 }
 else
 {

  VAR_0[0] = '\200';
  while (VAR_1 > 1)
  {
   VAR_0[--VAR_1] = (VAR_2 & 255);
   VAR_2 >>= 8;
  }
 }
}
