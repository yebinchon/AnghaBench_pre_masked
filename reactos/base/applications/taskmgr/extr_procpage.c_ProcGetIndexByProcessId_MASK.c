
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {scalar_t__ ProcessId; } ;
struct TYPE_5__ {int iItem; scalar_t__ lParam; int mask; } ;
typedef int LV_ITEM ;
typedef TYPE_1__ LVITEM ;
typedef TYPE_2__* LPPROCESS_PAGE_LIST_ITEM ;
typedef scalar_t__ DWORD ;


 int VAR_0 ;
 int FUNC_0 (int ,TYPE_1__*) ;
 int FUNC_1 (int ) ;
 int VAR_1 ;
 int FUNC_2 (TYPE_1__*,int ,int) ;

int FUNC_3(DWORD VAR_2)
{
    int VAR_3;
    LVITEM VAR_4;
    LPPROCESS_PAGE_LIST_ITEM VAR_5;

    for (VAR_3=0; VAR_3<FUNC_1(VAR_1); VAR_3++)
    {
        FUNC_2(&VAR_4, 0, sizeof(LV_ITEM));
        VAR_4.mask = VAR_0;
        VAR_4.iItem = VAR_3;
        (void)FUNC_0(VAR_1, &VAR_4);
        VAR_5 = (LPPROCESS_PAGE_LIST_ITEM)VAR_4.lParam;
        if (VAR_5->ProcessId == VAR_2)
        {
            return VAR_3;
        }
    }
    return 0;
}
