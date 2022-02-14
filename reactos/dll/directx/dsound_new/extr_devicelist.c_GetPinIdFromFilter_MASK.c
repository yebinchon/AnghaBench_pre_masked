
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef size_t ULONG ;
struct TYPE_3__ {size_t PinCount; scalar_t__* Pin; } ;
typedef TYPE_1__* LPFILTERINFO ;
typedef scalar_t__ BOOL ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 size_t VAR_2 ;

ULONG
FUNC_0(
    LPFILTERINFO VAR_3,
    BOOL VAR_4,
    ULONG VAR_5)
{
    ULONG VAR_6;

    for(VAR_6 = VAR_5; VAR_6 < VAR_3->PinCount; VAR_6++)
    {
        if (VAR_3->Pin[VAR_6] == VAR_0 && !VAR_4)
            return VAR_6;

        if (VAR_3->Pin[VAR_6] == VAR_1 && VAR_4)
            return VAR_6;
    }
    return VAR_2;
}
