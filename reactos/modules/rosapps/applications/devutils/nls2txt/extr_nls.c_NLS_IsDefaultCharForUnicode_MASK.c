
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef size_t USHORT ;
struct TYPE_4__ {size_t DefaultChar; int WideCharTable; } ;
typedef size_t* PUSHORT ;
typedef size_t* PUCHAR ;
typedef TYPE_1__* PCPTABLEINFO ;
typedef int BOOL ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (TYPE_1__*) ;
 int VAR_1 ;

BOOL
FUNC_1(PCPTABLEINFO VAR_2, USHORT VAR_3)
{
    USHORT VAR_4;

    if (FUNC_0(VAR_2))
    {
        PUSHORT VAR_5 = (PUSHORT)VAR_2->WideCharTable;
        VAR_4 = VAR_5[VAR_3];
    }
    else
    {
        PUCHAR VAR_6 = (PUCHAR)VAR_2->WideCharTable;
        VAR_4 = VAR_6[VAR_3];
    }

    if (VAR_4 != VAR_2->DefaultChar)
        return VAR_0;

    return VAR_1;
}
