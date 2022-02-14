
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef scalar_t__ ULONGLONG ;
struct TYPE_4__ {scalar_t__ MftId; struct TYPE_4__* Next; } ;
typedef TYPE_1__* PNAME_CACHE_ENTRY ;


 TYPE_1__* VAR_0 ;

PNAME_CACHE_ENTRY FUNC_0(ULONGLONG VAR_1)
{
    PNAME_CACHE_ENTRY VAR_2;

    for (VAR_2 = VAR_0; VAR_2 != ((void*)0); VAR_2 = VAR_2->Next)
    {
        if (VAR_1 == VAR_2->MftId)
        {
            return VAR_2;
        }
    }

    return ((void*)0);
}
