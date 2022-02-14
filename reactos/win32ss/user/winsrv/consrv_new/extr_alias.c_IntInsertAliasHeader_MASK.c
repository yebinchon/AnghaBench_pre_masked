
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int VOID ;
struct TYPE_4__ {struct TYPE_4__* Next; int lpExeName; } ;
typedef TYPE_1__* PALIAS_HEADER ;
typedef scalar_t__ INT ;


 scalar_t__ FUNC_0 (int ,int ) ;

VOID
FUNC_1(PALIAS_HEADER * VAR_0, PALIAS_HEADER VAR_1)
{
    PALIAS_HEADER VAR_2;
    PALIAS_HEADER *VAR_3 = VAR_0;

    while ((VAR_2 = *VAR_3) != ((void*)0))
    {
        INT VAR_4 = FUNC_0(VAR_1->lpExeName, VAR_2->lpExeName);
        if (VAR_4 < 0) break;

        VAR_3 = &VAR_2->Next;
    }

    *VAR_3 = VAR_1;
    VAR_1->Next = VAR_2;
}
