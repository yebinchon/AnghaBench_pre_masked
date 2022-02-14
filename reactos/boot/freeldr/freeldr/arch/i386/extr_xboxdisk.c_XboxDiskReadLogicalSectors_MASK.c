
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int ULONGLONG ;
typedef int ULONG ;
typedef int UCHAR ;
typedef scalar_t__ PVOID ;
typedef scalar_t__ PCHAR ;
typedef int BOOLEAN ;


 int VAR_0 ;
 int FUNC_0 (char*) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_1 (int) ;
 int FUNC_2 (char*) ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_3 (int ,int ,int ,int,int,int,int,int,int ,scalar_t__) ;

BOOLEAN
FUNC_4(UCHAR VAR_9, ULONGLONG VAR_10, ULONG VAR_11, PVOID VAR_12)
{
    ULONG VAR_13;
    UCHAR VAR_14;

    if (VAR_9 < 0x80 || (VAR_9 & 0x0f) >= 2)
    {

        FUNC_2("Invalid drive number\n");
        return VAR_0;
    }

    if (((VAR_10 + VAR_11) & FUNC_1(0xfffffffff0000000)) != FUNC_1(0))
    {
        FUNC_0("48bit LBA required but not implemented\n");
        return VAR_0;
    }

    VAR_13 = (ULONG) VAR_10;
    while (VAR_11 > 0)
    {
        VAR_14 = (VAR_11 <= 255 ? (UCHAR)VAR_11 : 255);
        if (!FUNC_3(VAR_7,
                                VAR_8,
                                0, VAR_14,
                                VAR_13 & 0xff,
                                (VAR_13 >> 8) & 0xff,
                                (VAR_13 >> 16) & 0xff,
                                ((VAR_13 >> 24) & 0x0f) | VAR_4 |
                                ((VAR_9 & 0x0f) == 0 ? VAR_2 : VAR_3),
                                VAR_1,
                                VAR_12))
        {
            return VAR_0;
        }
        VAR_11 -= VAR_14;
        VAR_12 = (PVOID) ((PCHAR) VAR_12 + VAR_14 * VAR_5);
    }

    return VAR_6;
}
