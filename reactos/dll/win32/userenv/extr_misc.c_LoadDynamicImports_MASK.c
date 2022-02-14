
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {int * foo; } ;
struct TYPE_9__ {scalar_t__ hModule; TYPE_1__ fn; } ;
struct TYPE_8__ {int ** Functions; int Library; } ;
typedef int * PVOID ;
typedef TYPE_2__* PDYN_MODULE ;
typedef TYPE_3__* PDYN_FUNCS ;
typedef int * LPSTR ;
typedef scalar_t__ HMODULE ;
typedef int DYN_FUNCS ;
typedef int BOOL ;


 int VAR_0 ;
 int FUNC_0 (scalar_t__) ;
 int * FUNC_1 (scalar_t__,int *) ;
 scalar_t__ FUNC_2 (int ) ;
 int VAR_1 ;
 int FUNC_3 (TYPE_3__*,int) ;

BOOL
FUNC_4(PDYN_MODULE VAR_2,
                   PDYN_FUNCS VAR_3)
{
    LPSTR *VAR_4;
    PVOID *VAR_5;

    FUNC_3(VAR_3, sizeof(DYN_FUNCS));

    VAR_3->hModule = FUNC_2(VAR_2->Library);
    if (!VAR_3->hModule)
    {
        return VAR_0;
    }

    VAR_5 = &VAR_3->fn.foo;


    for (VAR_4 = VAR_2->Functions; *VAR_4 != ((void*)0); VAR_4++)
    {
        *VAR_5 = FUNC_1(VAR_3->hModule, *VAR_4);
        if (*VAR_5 == ((void*)0))
        {
            FUNC_0(VAR_3->hModule);
            VAR_3->hModule = (HMODULE)0;

            return VAR_0;
        }

        VAR_5++;
    }

    return VAR_1;
}
