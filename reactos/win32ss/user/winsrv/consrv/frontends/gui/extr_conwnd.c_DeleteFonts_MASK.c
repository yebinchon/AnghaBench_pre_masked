
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int VOID ;
typedef size_t ULONG ;
struct TYPE_3__ {int ** Font; } ;
typedef TYPE_1__* PGUI_CONSOLE_DATA ;


 size_t FUNC_0 (int **) ;
 int FUNC_1 (int *) ;

VOID
FUNC_2(PGUI_CONSOLE_DATA VAR_0)
{
    ULONG VAR_1;
    for (VAR_1 = 0; VAR_1 < FUNC_0(VAR_0->Font); ++VAR_1)
    {
        if (VAR_0->Font[VAR_1] != ((void*)0)) FUNC_1(VAR_0->Font[VAR_1]);
        VAR_0->Font[VAR_1] = ((void*)0);
    }
}
