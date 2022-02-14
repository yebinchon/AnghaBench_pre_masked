
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int UInt32 ;
typedef int SizeT ;
typedef int Byte ;



SizeT FUNC_0(Byte *VAR_0, SizeT VAR_1, UInt32 VAR_2, int VAR_3)
{
  UInt32 VAR_4;
  if (VAR_1 < 4)
    return 0;
  VAR_1 -= 4;
  for (VAR_4 = 0; VAR_4 <= VAR_1; VAR_4 += 4)
  {
    if ((VAR_0[VAR_4] == 0x40 && (VAR_0[VAR_4 + 1] & 0xC0) == 0x00) ||
        (VAR_0[VAR_4] == 0x7F && (VAR_0[VAR_4 + 1] & 0xC0) == 0xC0))
    {
      UInt32 VAR_5 =
        ((UInt32)VAR_0[VAR_4 + 0] << 24) |
        ((UInt32)VAR_0[VAR_4 + 1] << 16) |
        ((UInt32)VAR_0[VAR_4 + 2] << 8) |
        ((UInt32)VAR_0[VAR_4 + 3]);
      UInt32 VAR_6;

      VAR_5 <<= 2;
      if (VAR_3)
        VAR_6 = VAR_2 + VAR_4 + VAR_5;
      else
        VAR_6 = VAR_5 - (VAR_2 + VAR_4);
      VAR_6 >>= 2;

      VAR_6 = (((0 - ((VAR_6 >> 22) & 1)) << 22) & 0x3FFFFFFF) | (VAR_6 & 0x3FFFFF) | 0x40000000;

      VAR_0[VAR_4 + 0] = (Byte)(VAR_6 >> 24);
      VAR_0[VAR_4 + 1] = (Byte)(VAR_6 >> 16);
      VAR_0[VAR_4 + 2] = (Byte)(VAR_6 >> 8);
      VAR_0[VAR_4 + 3] = (Byte)VAR_6;
    }
  }
  return VAR_4;
}
