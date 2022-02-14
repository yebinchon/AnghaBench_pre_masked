
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int VOID ;
struct TYPE_4__ {int wFlags; struct TYPE_4__* pNext; } ;
typedef TYPE_1__ INPUT_LIST_NODE ;
typedef int HWND ;
typedef int * HIMAGELIST ;


 int FUNC_0 (int ,TYPE_1__*) ;
 int VAR_0 ;
 int FUNC_1 (int *) ;
 TYPE_1__* FUNC_2 () ;
 int VAR_1 ;
 int FUNC_3 (int ) ;
 int * FUNC_4 (int ,int ) ;

__attribute__((used)) static VOID
FUNC_5(HWND VAR_2)
{
    INPUT_LIST_NODE *VAR_3;
    HIMAGELIST VAR_4;

    VAR_4 = FUNC_4(VAR_2, VAR_1);
    if (VAR_4 != ((void*)0))
    {
        FUNC_1(VAR_4);
    }

    FUNC_3(VAR_2);

    for (VAR_3 = FUNC_2();
         VAR_3 != ((void*)0);
         VAR_3 = VAR_3->pNext)
    {
        if (!(VAR_3->wFlags & VAR_0))
        {
            FUNC_0(VAR_2, VAR_3);
        }
    }
}
