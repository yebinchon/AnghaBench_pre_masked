
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int USHORT ;
typedef int ULONG ;
typedef int UCHAR ;



void FUNC_0(ULONG VAR_0[4], ULONG VAR_1, USHORT VAR_2)
{
 UCHAR VAR_3, VAR_4, VAR_5, VAR_6, VAR_7, VAR_8, VAR_9, VAR_10, VAR_11, VAR_12;
 VAR_3 = (UCHAR) (VAR_1 / 1000000);
 VAR_4 = (UCHAR) ((VAR_1 % 1000000) / 100000);
 VAR_5 = (UCHAR) ((VAR_1 % 100000) / 10000);
 VAR_6 = (UCHAR) ((VAR_1 % 10000) / 1000);
 VAR_7 = (UCHAR) ((VAR_1 % 1000) / 100);
 VAR_8 = (UCHAR) ((VAR_1 % 100) / 10);
 VAR_9 = (UCHAR) (VAR_1 % 10);
 VAR_10 = (UCHAR) ((VAR_2 % 100) / 10);
 VAR_11 = (UCHAR) (VAR_2 % 10);
 VAR_12 = VAR_3 ^ VAR_4 ^ VAR_5 ^ VAR_10 ^ VAR_11 ^ 0 ^ VAR_6 ^ VAR_7 ^ VAR_8 ^ VAR_9;
 VAR_0[0] = 0x00088068;
 VAR_0[1] = 0xbb0214ff;
 VAR_0[2] = (VAR_3 << 28) | (VAR_4 << 24) | (VAR_5 << 20) | (VAR_10 << 16) | (VAR_11 << 12) | (VAR_6 << 4) | VAR_7;
 VAR_0[3] = (VAR_8 << 28) | (VAR_9 << 24) | (VAR_12 << 20) | (7 << 16);
}
