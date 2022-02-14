
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int UINT8 ;



UINT8
FUNC_0 (
    int VAR_0)
{



    if (VAR_0 <= '9')
    {
        return ((UINT8) (VAR_0 - '0'));
    }



    if (VAR_0 <= 'F')
    {
        return ((UINT8) (VAR_0 - 0x37));
    }



    return ((UINT8) (VAR_0 - 0x57));
}
