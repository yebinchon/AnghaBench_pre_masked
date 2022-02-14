
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {struct TYPE_6__* Next; int lpSource; } ;
struct TYPE_5__ {TYPE_2__* Data; } ;
typedef TYPE_1__* PALIAS_HEADER ;
typedef TYPE_2__* PALIAS_ENTRY ;
typedef int LPCWSTR ;
typedef scalar_t__ INT ;


 int FUNC_0 (char*,int ) ;
 scalar_t__ FUNC_1 (int ,int ) ;

PALIAS_ENTRY
FUNC_2(PALIAS_HEADER VAR_0, LPCWSTR VAR_1)
{
    PALIAS_ENTRY VAR_2;

    if (VAR_0 == ((void*)0)) return ((void*)0);

    VAR_2 = VAR_0->Data;
    while (VAR_2)
    {
        INT VAR_3;
        FUNC_0("IntGetAliasEntry->lpSource %S\n", VAR_2->lpSource);
        VAR_3 = FUNC_1(VAR_2->lpSource, VAR_1);
        if (!VAR_3) return VAR_2;
        if (VAR_3 > 0) break;

        VAR_2 = VAR_2->Next;
    }
    return ((void*)0);
}
