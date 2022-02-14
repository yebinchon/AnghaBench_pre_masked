
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int VOID ;
struct TYPE_6__ {struct TYPE_6__* Next; int lpSource; } ;
struct TYPE_5__ {TYPE_2__* Data; } ;
typedef TYPE_1__* PALIAS_HEADER ;
typedef TYPE_2__* PALIAS_ENTRY ;
typedef scalar_t__ INT ;


 scalar_t__ FUNC_0 (int ,int ) ;

VOID
FUNC_1(PALIAS_HEADER VAR_0, PALIAS_ENTRY VAR_1)
{
    PALIAS_ENTRY VAR_2;
    PALIAS_ENTRY *VAR_3 = &VAR_0->Data;

    while ((VAR_2 = *VAR_3) != ((void*)0))
    {
        INT VAR_4 = FUNC_0(VAR_1->lpSource, VAR_2->lpSource);
        if (VAR_4 < 0) break;

        VAR_3 = &VAR_2->Next;
    }

    *VAR_3 = VAR_1;
    VAR_1->Next = VAR_2;
}
