
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {scalar_t__ lParam; int iItem; int mask; } ;
struct TYPE_4__ {int hListView; int SelectedItem; } ;
typedef TYPE_1__* PMAIN_WND_INFO ;
typedef TYPE_2__ LVITEM ;
typedef int LPARAM ;
typedef int ENUM_SERVICE_STATUS_PROCESS ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int ,int ,int ) ;

ENUM_SERVICE_STATUS_PROCESS*
FUNC_1(PMAIN_WND_INFO VAR_2)
{
    LVITEM VAR_3;

    VAR_3.mask = VAR_0;
    VAR_3.iItem = VAR_2->SelectedItem;
    FUNC_0(VAR_2->hListView,
                VAR_1,
                0,
                (LPARAM)&VAR_3);


    return (ENUM_SERVICE_STATUS_PROCESS *)VAR_3.lParam;
}
