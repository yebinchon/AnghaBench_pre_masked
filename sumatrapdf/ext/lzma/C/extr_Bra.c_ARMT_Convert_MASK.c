
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
  VAR_2 += 4;
  for (VAR_4 = 0; VAR_4 <= VAR_1; VAR_4 += 2)
  {
    if ((VAR_0[VAR_4 + 1] & 0xF8) == 0xF0 &&
        (VAR_0[VAR_4 + 3] & 0xF8) == 0xF8)
    {
      UInt32 VAR_5;
      UInt32 VAR_6 =
        (((UInt32)VAR_0[VAR_4 + 1] & 0x7) << 19) |
        ((UInt32)VAR_0[VAR_4 + 0] << 11) |
        (((UInt32)VAR_0[VAR_4 + 3] & 0x7) << 8) |
        (VAR_0[VAR_4 + 2]);

      VAR_6 <<= 1;
      if (VAR_3)
        VAR_5 = VAR_2 + (UInt32)VAR_4 + VAR_6;
      else
        VAR_5 = VAR_6 - (VAR_2 + (UInt32)VAR_4);
      VAR_5 >>= 1;

      VAR_0[VAR_4 + 1] = (Byte)(0xF0 | ((VAR_5 >> 19) & 0x7));
      VAR_0[VAR_4 + 0] = (Byte)(VAR_5 >> 11);
      VAR_0[VAR_4 + 3] = (Byte)(0xF8 | ((VAR_5 >> 8) & 0x7));
      VAR_0[VAR_4 + 2] = (Byte)VAR_5;
      VAR_4 += 2;
    }
  }
  return VAR_4;
}
