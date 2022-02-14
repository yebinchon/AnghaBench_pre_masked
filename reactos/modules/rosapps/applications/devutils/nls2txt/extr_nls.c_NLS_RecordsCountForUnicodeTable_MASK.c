
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ USHORT ;
typedef int ULONG ;
typedef int PCPTABLEINFO ;


 int FUNC_0 (int ,int) ;

USHORT
FUNC_1(PCPTABLEINFO VAR_0)
{
    ULONG VAR_1;
    USHORT VAR_2 = 0;

    for (VAR_1 = 0; VAR_1 <= 0xFFFF; VAR_1++)
    {
        if (!FUNC_0(VAR_0, VAR_1))
            VAR_2++;
    }

    return VAR_2;
}
