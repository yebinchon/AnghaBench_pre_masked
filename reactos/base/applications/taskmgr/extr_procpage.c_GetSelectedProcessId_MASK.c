
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {int ProcessId; } ;
struct TYPE_5__ {int iItem; scalar_t__ lParam; int mask; } ;
typedef TYPE_1__ LVITEM ;
typedef TYPE_2__* LPPROCESS_PAGE_LIST_ITEM ;
typedef int DWORD ;


 int VAR_0 ;
 int FUNC_0 (int ,TYPE_1__*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int VAR_1 ;
 int FUNC_3 (TYPE_1__*,int ,int) ;

DWORD FUNC_4(void)
{
    int VAR_2;
    LVITEM VAR_3;

    if(FUNC_1(VAR_1) == 1)
    {
        VAR_2 = FUNC_2(VAR_1);

        FUNC_3(&VAR_3, 0, sizeof(LVITEM));

        VAR_3.mask = VAR_0;
        VAR_3.iItem = VAR_2;

        (void)FUNC_0(VAR_1, &VAR_3);

        if (VAR_3.lParam)
            return ((LPPROCESS_PAGE_LIST_ITEM)VAR_3.lParam)->ProcessId;
    }

    return 0;
}
