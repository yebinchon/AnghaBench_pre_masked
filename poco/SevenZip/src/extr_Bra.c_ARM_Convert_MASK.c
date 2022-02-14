
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int UInt32 ;
typedef int SizeT ;
typedef int Byte ;



SizeT FUNC_0(Byte *VAR_0, SizeT VAR_1, UInt32 VAR_2, int VAR_3)
{
  SizeT VAR_4;
  if (VAR_1 < 4)
    return 0;
  VAR_1 -= 4;
  VAR_2 += 8;
  for (VAR_4 = 0; VAR_4 <= VAR_1; VAR_4 += 4)
  {
    if (VAR_0[VAR_4 + 3] == 0xEB)
    {
      UInt32 VAR_5;
      UInt32 VAR_6 = ((UInt32)VAR_0[VAR_4 + 2] << 16) | ((UInt32)VAR_0[VAR_4 + 1] << 8) | (VAR_0[VAR_4 + 0]);
      VAR_6 <<= 2;
      if (VAR_3)
        VAR_5 = VAR_2 + (UInt32)VAR_4 + VAR_6;
      else
        VAR_5 = VAR_6 - (VAR_2 + (UInt32)VAR_4);
      VAR_5 >>= 2;
      VAR_0[VAR_4 + 2] = (Byte)(VAR_5 >> 16);
      VAR_0[VAR_4 + 1] = (Byte)(VAR_5 >> 8);
      VAR_0[VAR_4 + 0] = (Byte)VAR_5;
    }
  }
  return VAR_4;
}
