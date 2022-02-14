
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int WCHAR ;
typedef int UINT ;
struct TYPE_5__ {struct TYPE_5__* Next; int lpTarget; int lpSource; } ;
struct TYPE_4__ {TYPE_2__* Data; } ;
typedef TYPE_1__* PALIAS_HEADER ;
typedef TYPE_2__* PALIAS_ENTRY ;


 scalar_t__ FUNC_0 (int ) ;

UINT
FUNC_1(PALIAS_HEADER VAR_0)
{
    UINT VAR_1 = 0;
    PALIAS_ENTRY VAR_2 = VAR_0->Data;

    while (VAR_2)
    {
        VAR_1 += FUNC_0(VAR_2->lpSource);
        VAR_1 += FUNC_0(VAR_2->lpTarget);
        VAR_1 += 2;
        VAR_2 = VAR_2->Next;
    }

    if (VAR_1)
    {
        return (VAR_1+1) * sizeof(WCHAR);
    }
    return 0;
}
