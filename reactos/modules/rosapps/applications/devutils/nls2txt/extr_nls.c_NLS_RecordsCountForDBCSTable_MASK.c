
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int USHORT ;
typedef size_t UCHAR ;
struct TYPE_3__ {scalar_t__ UniDefaultChar; scalar_t__* DBCSOffsets; } ;
typedef scalar_t__* PUSHORT ;
typedef TYPE_1__* PCPTABLEINFO ;



USHORT
FUNC_0(PCPTABLEINFO VAR_0, UCHAR VAR_1)
{
    PUSHORT VAR_2 = VAR_0->DBCSOffsets;
    USHORT VAR_3;
    USHORT VAR_4 = 0;

    for (VAR_3 = 0; VAR_3 <= 0xFF; VAR_3++)
    {
        USHORT VAR_5 = VAR_2[VAR_1];

        if (VAR_5 && VAR_2[VAR_5 + VAR_3] != VAR_0->UniDefaultChar)
        {
            VAR_4++;
        }
    }

    return VAR_4;
}
