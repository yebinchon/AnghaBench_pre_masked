
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int UCHAR ;
typedef int LONGLONG ;
typedef int BOOLEAN ;



UCHAR
FUNC_0(LONGLONG VAR_0,
                   BOOLEAN VAR_1)
{
    if (!VAR_1)
    {
        if (VAR_0 >= 0x0100000000000000)
            return 8;
        if (VAR_0 >= 0x0001000000000000)
            return 7;
        if (VAR_0 >= 0x0000010000000000)
            return 6;
        if (VAR_0 >= 0x0000000100000000)
            return 5;
        if (VAR_0 >= 0x0000000001000000)
            return 4;
        if (VAR_0 >= 0x0000000000010000)
            return 3;
        if (VAR_0 >= 0x0000000000000100)
            return 2;
        return 1;
    }

    if (VAR_0 > 0)
    {

        if (VAR_0 >= 0x0080000000000000)
            return 8;
        if (VAR_0 >= 0x0000800000000000)
            return 7;
        if (VAR_0 >= 0x0000008000000000)
            return 6;
        if (VAR_0 >= 0x0000000080000000)
            return 5;
        if (VAR_0 >= 0x0000000000800000)
            return 4;
        if (VAR_0 >= 0x0000000000008000)
            return 3;
        if (VAR_0 >= 0x0000000000000080)
            return 2;
    }
    else
    {

        if (VAR_0 <= 0xff80000000000000)
            return 8;
        if (VAR_0 <= 0xffff800000000000)
            return 7;
        if (VAR_0 <= 0xffffff8000000000)
            return 6;
        if (VAR_0 <= 0xffffffff80000000)
            return 5;
        if (VAR_0 <= 0xffffffffff800000)
            return 4;
        if (VAR_0 <= 0xffffffffffff8000)
            return 3;
        if (VAR_0 <= 0xffffffffffffff80)
            return 2;
    }
    return 1;
}
