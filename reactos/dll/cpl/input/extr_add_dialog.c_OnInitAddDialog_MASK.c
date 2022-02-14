
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


typedef int VOID ;
struct TYPE_6__ {scalar_t__ dwId; int pszName; struct TYPE_6__* pNext; } ;
typedef TYPE_1__ LOCALE_LIST_NODE ;
typedef TYPE_1__ LAYOUT_LIST_NODE ;
typedef int INT ;
typedef int HWND ;
typedef scalar_t__ DWORD ;


 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (int ,int ,TYPE_1__*) ;
 scalar_t__ FUNC_3 (scalar_t__) ;
 int FUNC_4 (int ,int ) ;
 scalar_t__ FUNC_5 () ;
 int VAR_0 ;
 int VAR_1 ;
 TYPE_1__* FUNC_6 () ;
 TYPE_1__* FUNC_7 () ;

__attribute__((used)) static VOID
FUNC_8(HWND VAR_2)
{
    HWND VAR_3 = FUNC_4(VAR_2, VAR_0);
    HWND VAR_4 = FUNC_4(VAR_2, VAR_1);
    LOCALE_LIST_NODE *VAR_5;
    LAYOUT_LIST_NODE *VAR_6;
    DWORD VAR_7;
    DWORD VAR_8;
    INT VAR_9;

    VAR_7 = FUNC_5();

    for (VAR_5 = FUNC_7();
         VAR_5 != ((void*)0);
         VAR_5 = VAR_5->pNext)
    {
        VAR_9 = FUNC_0(VAR_3, VAR_5->pszName);
        FUNC_2(VAR_3, VAR_9, VAR_5);

        if (VAR_5->dwId == VAR_7)
        {
            FUNC_1(VAR_3, VAR_9);
        }
    }

    VAR_8 = FUNC_3(VAR_7);

    for (VAR_6 = FUNC_6();
         VAR_6 != ((void*)0);
         VAR_6 = VAR_6->pNext)
    {
        VAR_9 = FUNC_0(VAR_4, VAR_6->pszName);
        FUNC_2(VAR_4, VAR_9, VAR_6);

        if (VAR_6->dwId == VAR_8)
        {
            FUNC_1(VAR_4, VAR_9);
        }
    }

    if (VAR_8 == 0)
        FUNC_1(VAR_4, 0);
}
