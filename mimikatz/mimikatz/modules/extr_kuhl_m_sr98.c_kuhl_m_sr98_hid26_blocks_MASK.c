
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int USHORT ;
typedef int ULONGLONG ;
typedef int ULONG ;
typedef int UCHAR ;
typedef int* PULONGLONG ;


 int FUNC_0 (int) ;

void FUNC_1(ULONG VAR_0[4], UCHAR VAR_1, USHORT VAR_2, PULONGLONG VAR_3)
{
 UCHAR VAR_4, VAR_5, VAR_6;
 ULONGLONG VAR_7 = 0x2004000000 | (VAR_1 << 17) | (VAR_2 << 1);
 for(VAR_4 = VAR_5 = VAR_6 = 0; VAR_4 < 12; VAR_4++)
 {
  VAR_5 ^= (VAR_7 >> (VAR_4 + 12 + 1)) & 1;
  VAR_6 ^= (VAR_7 >> (VAR_4 + 1)) & 1;
 }
 VAR_7 |= ((VAR_5 & 1) << 25) | (!(VAR_6 & 1));
 if(VAR_3)
  *VAR_3 = VAR_7;
 VAR_0[0] = 0x90625062;
 VAR_0[1] = (0x1d << 24) | (FUNC_0((UCHAR) (VAR_7 >> 40)) << 16) | (FUNC_0((UCHAR) (VAR_7 >> 36)) << 8) | FUNC_0((UCHAR) (VAR_7 >> 32));
 VAR_0[2] = (FUNC_0((UCHAR) (VAR_7 >> 28)) << 24) | (FUNC_0((UCHAR) (VAR_7 >> 24)) << 16) | (FUNC_0((UCHAR) (VAR_7 >> 20)) << 8) | FUNC_0((UCHAR) (VAR_7 >> 16));
 VAR_0[3] = (FUNC_0((UCHAR) (VAR_7 >> 12)) << 24) | (FUNC_0((UCHAR) (VAR_7 >> 8)) << 16) | (FUNC_0((UCHAR) (VAR_7 >> 4)) << 8) | FUNC_0((UCHAR) (VAR_7));
}
