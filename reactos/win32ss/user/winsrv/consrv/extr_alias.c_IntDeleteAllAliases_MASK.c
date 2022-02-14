
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int VOID ;
struct TYPE_7__ {struct TYPE_7__* Next; struct TYPE_7__* Data; } ;
struct TYPE_6__ {TYPE_2__* Aliases; } ;
typedef TYPE_1__* PCONSRV_CONSOLE ;
typedef TYPE_2__* PALIAS_HEADER ;
typedef TYPE_2__* PALIAS_ENTRY ;


 int FUNC_0 (TYPE_2__*) ;

VOID
FUNC_1(PCONSRV_CONSOLE VAR_0)
{
    PALIAS_HEADER VAR_1, VAR_2;
    PALIAS_ENTRY VAR_3, VAR_4;

    for (VAR_1 = VAR_0->Aliases; VAR_1; VAR_1 = VAR_2)
    {
        VAR_2 = VAR_1->Next;
        for (VAR_3 = VAR_1->Data; VAR_3; VAR_3 = VAR_4)
        {
            VAR_4 = VAR_3->Next;
            FUNC_0(VAR_3);
        }
        FUNC_0(VAR_1);
    }
}
