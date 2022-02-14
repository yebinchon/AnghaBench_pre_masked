
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int USHORT ;
typedef int ULONG ;
typedef int UCHAR ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ,int) ;
 scalar_t__ VAR_9 ;

void FUNC_2(ULONG VAR_10, ULONG VAR_11, ULONG VAR_12)
{
    ULONG VAR_13;
    UCHAR VAR_14;

    if (VAR_9 == 0) return ;
    if (VAR_11 < 5 || VAR_11 > 8) return ;
    if (VAR_12 != 1 && VAR_12 != 2) return ;
    if (VAR_10 != VAR_6 && VAR_10 != VAR_7 && VAR_10 != VAR_1)
       return;

    VAR_13 = VAR_11-5;
    VAR_13 |= ((VAR_12 == 1) ? 0x00 : 0x04);
    VAR_13 |= VAR_10;

    VAR_14 = FUNC_0((USHORT)(VAR_9 + VAR_4));
    FUNC_1((USHORT)(VAR_9 + VAR_4), (UCHAR)(VAR_14 & ~0x80));


    FUNC_1((USHORT)(VAR_9 + VAR_3), (UCHAR)0);


    FUNC_1((USHORT)(VAR_9 + VAR_2), (UCHAR)0);

    FUNC_1((USHORT)(VAR_9 + VAR_4), (UCHAR)VAR_13);

    FUNC_1((USHORT)(VAR_9 + VAR_5), VAR_0 | VAR_8);


    return ;
}
