
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int iItem; scalar_t__ lParam; int mask; } ;
typedef TYPE_1__ LV_ITEM ;
typedef scalar_t__ LPPROCESS_PAGE_LIST_ITEM ;


 int FUNC_0 () ;
 int FUNC_1 (int ,int ,scalar_t__) ;
 int VAR_0 ;
 int FUNC_2 (int ,TYPE_1__*) ;
 int FUNC_3 (int ) ;
 int VAR_1 ;
 int FUNC_4 (TYPE_1__*,int ,int) ;

void FUNC_5(void)
{
    int VAR_2;
    LV_ITEM VAR_3;
    LPPROCESS_PAGE_LIST_ITEM VAR_4;
    for (VAR_2 = 0; VAR_2 < FUNC_3(VAR_1); VAR_2++)
    {
        FUNC_4(&VAR_3, 0, sizeof(LV_ITEM));
        VAR_3.mask = VAR_0;
        VAR_3.iItem = VAR_2;
        (void)FUNC_2(VAR_1, &VAR_3);
        VAR_4 = (LPPROCESS_PAGE_LIST_ITEM)VAR_3.lParam;
        FUNC_1(FUNC_0(), 0, VAR_4);
    }
}
