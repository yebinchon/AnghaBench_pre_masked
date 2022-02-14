
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int VOID ;
struct TYPE_3__ {scalar_t__ hModule; } ;
typedef TYPE_1__* PDYN_FUNCS ;
typedef scalar_t__ HMODULE ;


 int FUNC_0 (scalar_t__) ;

VOID
FUNC_1(PDYN_FUNCS VAR_0)
{
    if (VAR_0->hModule)
    {
        FUNC_0(VAR_0->hModule);
        VAR_0->hModule = (HMODULE)0;
    }
}
