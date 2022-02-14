
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


typedef int WCHAR ;
struct TYPE_6__ {struct TYPE_6__* pNext; struct TYPE_6__* pPrev; int dwId; int * pszName; } ;
typedef TYPE_1__ LOCALE_LIST_NODE ;
typedef int DWORD ;


 int FUNC_0 (TYPE_1__*,int) ;
 TYPE_1__* VAR_0 ;
 int * FUNC_1 (int const*) ;
 int FUNC_2 (TYPE_1__*) ;
 scalar_t__ FUNC_3 (int) ;

__attribute__((used)) static LOCALE_LIST_NODE*
FUNC_4(DWORD VAR_1, const WCHAR *VAR_2)
{
    LOCALE_LIST_NODE *VAR_3;
    LOCALE_LIST_NODE *VAR_4;

    if (VAR_2 == ((void*)0))
        return ((void*)0);

    VAR_3 = VAR_0;

    VAR_4 = (LOCALE_LIST_NODE*)FUNC_3(sizeof(LOCALE_LIST_NODE));
    if (VAR_4 == ((void*)0))
        return ((void*)0);

    FUNC_0(VAR_4, sizeof(LOCALE_LIST_NODE));

    VAR_4->pszName = FUNC_1(VAR_2);
    if (VAR_4->pszName == ((void*)0))
    {
        FUNC_2(VAR_4);
        return ((void*)0);
    }

    VAR_4->dwId = VAR_1;

    if (VAR_3 == ((void*)0))
    {
        VAR_0 = VAR_4;
    }
    else
    {
        while (VAR_3->pNext != ((void*)0))
        {
            VAR_3 = VAR_3->pNext;
        }

        VAR_4->pPrev = VAR_3;
        VAR_3->pNext = VAR_4;
    }

    return VAR_4;
}
