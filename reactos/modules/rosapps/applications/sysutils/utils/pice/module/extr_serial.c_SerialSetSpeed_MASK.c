
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int USHORT ;
typedef long ULONG ;
typedef int UCHAR ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ,int) ;
 scalar_t__ VAR_3 ;

void FUNC_2(ULONG VAR_4)
{
    UCHAR VAR_5;
    ULONG VAR_6;

    VAR_6 = (ULONG) (115200L/VAR_4);

    VAR_5 = FUNC_0((USHORT)(VAR_3 + VAR_2));
    FUNC_1((USHORT)(VAR_3 + VAR_2), (UCHAR)(VAR_5 | 0x80));
    FUNC_1((USHORT)(VAR_3 + VAR_1), (UCHAR)(VAR_6 & 0x00FF));
    FUNC_1((USHORT)(VAR_3 + VAR_0), (UCHAR)((VAR_6 >> 8) & 0x00FF));
    FUNC_1((USHORT)(VAR_3 + VAR_2), VAR_5);

}
