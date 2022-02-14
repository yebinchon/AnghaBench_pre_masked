
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int USHORT ;
struct TYPE_4__ {int* MultiByteTable; int UniDefaultChar; } ;
typedef int* PUSHORT ;
typedef TYPE_1__* PCPTABLEINFO ;


 scalar_t__ FUNC_0 (TYPE_1__*) ;

USHORT
FUNC_1(PCPTABLEINFO VAR_0)
{
    USHORT VAR_1 = 0;

    if (FUNC_0(VAR_0))
    {
        PUSHORT VAR_2 = VAR_0->MultiByteTable + 256 + 1;
        USHORT VAR_3;

        for (VAR_3 = 0; VAR_3 <= 0xFF; VAR_3++)
        {
            USHORT VAR_4 = VAR_2[VAR_3];

            if (VAR_4 != VAR_0->UniDefaultChar)
                VAR_1++;
        }
    }

    return VAR_1;
}
