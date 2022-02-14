
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ dwSpecialId; int dwId; struct TYPE_4__* pNext; } ;
typedef TYPE_1__ LAYOUT_LIST_NODE ;
typedef int HKL ;
typedef scalar_t__ DWORD ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 TYPE_1__* VAR_0 ;

LAYOUT_LIST_NODE*
FUNC_2(HKL VAR_1)
{
    LAYOUT_LIST_NODE *VAR_2;

    if ((FUNC_0(VAR_1) & 0xF000) == 0xF000)
    {
        DWORD VAR_3 = (FUNC_0(VAR_1) & 0x0FFF);

        for (VAR_2 = VAR_0; VAR_2 != ((void*)0); VAR_2 = VAR_2->pNext)
        {
            if (VAR_3 == VAR_2->dwSpecialId)
            {
                return VAR_2;
            }
        }
    }
    else
    {
        for (VAR_2 = VAR_0; VAR_2 != ((void*)0); VAR_2 = VAR_2->pNext)
        {
            if (FUNC_0(VAR_1) == FUNC_1(VAR_2->dwId))
            {
                return VAR_2;
            }
        }
    }

    return ((void*)0);
}
