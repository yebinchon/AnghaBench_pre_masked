
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int UInt64 ;
typedef int Byte ;



unsigned FUNC_0(Byte *VAR_0, UInt64 VAR_1)
{
  unsigned VAR_2 = 0;
  do
  {
    VAR_0[VAR_2++] = (Byte)((VAR_1 & 0x7F) | 0x80);
    VAR_1 >>= 7;
  }
  while (VAR_1 != 0);
  VAR_0[VAR_2 - 1] &= 0x7F;
  return VAR_2;
}
