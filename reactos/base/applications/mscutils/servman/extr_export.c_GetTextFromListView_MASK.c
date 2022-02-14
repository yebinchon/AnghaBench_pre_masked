
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int item ;
struct TYPE_6__ {int cchTextMax; int pszText; void* iSubItem; int mask; } ;
struct TYPE_5__ {int hListView; } ;
typedef TYPE_1__* PMAIN_WND_INFO ;
typedef TYPE_2__ LVITEM ;
typedef int LPWSTR ;
typedef int LPARAM ;
typedef void* INT ;
typedef void* DWORD ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int ,int ,void*,int ) ;
 int FUNC_1 (TYPE_2__*,int) ;

__attribute__((used)) static DWORD
FUNC_2(PMAIN_WND_INFO VAR_2,
                    LPWSTR VAR_3,
                    INT VAR_4,
                    INT VAR_5)
{
    LVITEM VAR_6;
    DWORD VAR_7;

    FUNC_1(&VAR_6, sizeof(VAR_6));
    VAR_6.mask = VAR_0;
    VAR_6.iSubItem = VAR_5;
    VAR_6.pszText = VAR_3;
    VAR_6.cchTextMax = 500;
    VAR_7 = (INT)FUNC_0(VAR_2->hListView,
                                 VAR_1,
                                 VAR_4,
                                 (LPARAM)&VAR_6);
    return VAR_7;
}
