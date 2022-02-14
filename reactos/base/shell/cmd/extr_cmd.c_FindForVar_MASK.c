
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ UINT ;
struct TYPE_3__ {size_t firstvar; scalar_t__ varcount; int ** values; struct TYPE_3__* prev; } ;
typedef size_t TCHAR ;
typedef int * LPTSTR ;
typedef TYPE_1__ FOR_CONTEXT ;
typedef int BOOL ;


 int VAR_0 ;
 TYPE_1__* VAR_1 ;

__attribute__((used)) static LPTSTR FUNC_0(TCHAR VAR_2, BOOL *VAR_3)
{
    FOR_CONTEXT *VAR_4;
    *VAR_3 = VAR_0;
    for (VAR_4 = VAR_1; VAR_4 != ((void*)0); VAR_4 = VAR_4->prev)
    {
        if ((UINT)(VAR_2 - VAR_4->firstvar) < VAR_4->varcount)
            return VAR_4->values[VAR_2 - VAR_4->firstvar];
    }
    return ((void*)0);
}
