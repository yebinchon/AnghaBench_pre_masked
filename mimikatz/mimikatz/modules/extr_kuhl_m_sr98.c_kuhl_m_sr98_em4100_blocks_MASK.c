
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int ULONGLONG ;
typedef int ULONG ;
typedef int UCHAR ;



void FUNC_0(ULONG VAR_0[3], ULONGLONG VAR_1)
{
 ULONGLONG VAR_2 = 0xff80000000000000;
 UCHAR VAR_3, VAR_4, VAR_5, VAR_6, VAR_7, VAR_8[4] = {0};
 for(VAR_4 = 0; VAR_4 < 10; VAR_4++)
 {
  VAR_3 = (VAR_1 >> (36 - (VAR_4 * 4))) & 0xf;
  for(VAR_7 = VAR_5 = 0; VAR_5 < 4; VAR_5++)
  {
   VAR_6 = (VAR_3 >> VAR_5) & 1;
   VAR_7 ^= VAR_6;
   VAR_8[VAR_5] ^= VAR_6;
  }
  VAR_2 |= (ULONGLONG) VAR_3 << (51 - (VAR_4 * 5)) | (ULONGLONG) VAR_7 << (50 - (VAR_4 * 5));
 }
 VAR_2 |= VAR_8[3] << 4 | VAR_8[2] << 3 | VAR_8[1] << 2 | VAR_8[0] << 1;
 VAR_0[0] = 0x00148040;
 VAR_0[1] = (ULONG) (VAR_2 >> 32);
 VAR_0[2] = (ULONG) VAR_2;
}
