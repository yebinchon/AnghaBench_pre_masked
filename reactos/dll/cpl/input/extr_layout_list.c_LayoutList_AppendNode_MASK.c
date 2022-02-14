
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


typedef int WCHAR ;
struct TYPE_6__ {struct TYPE_6__* pNext; struct TYPE_6__* pPrev; void* dwSpecialId; void* dwId; int * pszName; } ;
typedef TYPE_1__ LAYOUT_LIST_NODE ;
typedef void* DWORD ;


 int FUNC_0 (TYPE_1__*,int) ;
 TYPE_1__* VAR_0 ;
 int * FUNC_1 (int const*) ;
 int FUNC_2 (TYPE_1__*) ;
 scalar_t__ FUNC_3 (int) ;

__attribute__((used)) static LAYOUT_LIST_NODE*
FUNC_4(DWORD VAR_1, DWORD VAR_2, const WCHAR *VAR_3)
{
    LAYOUT_LIST_NODE *VAR_4;
    LAYOUT_LIST_NODE *VAR_5;

    if (VAR_3 == ((void*)0))
        return ((void*)0);

    VAR_4 = VAR_0;

    VAR_5 = (LAYOUT_LIST_NODE*)FUNC_3(sizeof(LAYOUT_LIST_NODE));
    if (VAR_5 == ((void*)0))
        return ((void*)0);

    FUNC_0(VAR_5, sizeof(LAYOUT_LIST_NODE));

    VAR_5->pszName = FUNC_1(VAR_3);
    if (VAR_5->pszName == ((void*)0))
    {
        FUNC_2(VAR_5);
        return ((void*)0);
    }

    VAR_5->dwId = VAR_1;
    VAR_5->dwSpecialId = VAR_2;

    if (VAR_4 == ((void*)0))
    {
        VAR_0 = VAR_5;
    }
    else
    {
        while (VAR_4->pNext != ((void*)0))
        {
            VAR_4 = VAR_4->pNext;
        }

        VAR_5->pPrev = VAR_4;
        VAR_4->pNext = VAR_5;
    }

    return VAR_5;
}
