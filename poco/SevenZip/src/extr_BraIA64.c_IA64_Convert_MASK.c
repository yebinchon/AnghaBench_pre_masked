
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int UInt64 ;
typedef size_t UInt32 ;
typedef int SizeT ;
typedef int Byte ;


 size_t* VAR_0 ;

SizeT FUNC_0(Byte *VAR_1, SizeT VAR_2, UInt32 VAR_3, int VAR_4)
{
  SizeT VAR_5;
  if (VAR_2 < 16)
    return 0;
  VAR_2 -= 16;
  for (VAR_5 = 0; VAR_5 <= VAR_2; VAR_5 += 16)
  {
    UInt32 VAR_6 = VAR_1[VAR_5] & 0x1F;
    UInt32 VAR_7 = VAR_0[VAR_6];
    UInt32 VAR_8 = 5;
    int VAR_9;
    for (VAR_9 = 0; VAR_9 < 3; VAR_9++, VAR_8 += 41)
    {
      UInt32 VAR_10, VAR_11;
      UInt64 VAR_12, VAR_13;
      int VAR_14;
      if (((VAR_7 >> VAR_9) & 1) == 0)
        continue;
      VAR_10 = (VAR_8 >> 3);
      VAR_11 = VAR_8 & 0x7;
      VAR_12 = 0;
      for (VAR_14 = 0; VAR_14 < 6; VAR_14++)
        VAR_12 += (UInt64)VAR_1[VAR_5 + VAR_14 + VAR_10] << (8 * VAR_14);

      VAR_13 = VAR_12 >> VAR_11;
      if (((VAR_13 >> 37) & 0xF) == 0x5 && ((VAR_13 >> 9) & 0x7) == 0)
      {
        UInt32 VAR_15 = (UInt32)((VAR_13 >> 13) & 0xFFFFF);
        UInt32 VAR_16;
        VAR_15 |= ((UInt32)(VAR_13 >> 36) & 1) << 20;

        VAR_15 <<= 4;

        if (VAR_4)
          VAR_16 = VAR_3 + (UInt32)VAR_5 + VAR_15;
        else
          VAR_16 = VAR_15 - (VAR_3 + (UInt32)VAR_5);

        VAR_16 >>= 4;

        VAR_13 &= ~((UInt64)(0x8FFFFF) << 13);
        VAR_13 |= ((UInt64)(VAR_16 & 0xFFFFF) << 13);
        VAR_13 |= ((UInt64)(VAR_16 & 0x100000) << (36 - 20));

        VAR_12 &= (1 << VAR_11) - 1;
        VAR_12 |= (VAR_13 << VAR_11);
        for (VAR_14 = 0; VAR_14 < 6; VAR_14++)
          VAR_1[VAR_5 + VAR_14 + VAR_10] = (Byte)(VAR_12 >> (8 * VAR_14));
      }
    }
  }
  return VAR_5;
}
