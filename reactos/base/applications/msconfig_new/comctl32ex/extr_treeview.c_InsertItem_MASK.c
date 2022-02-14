
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int tvis ;
struct TYPE_5__ {void* hItem; scalar_t__ pszText; int mask; } ;
struct TYPE_6__ {TYPE_1__ itemex; void* hInsertAfter; void* hParent; } ;
typedef TYPE_2__ TVINSERTSTRUCTW ;
typedef scalar_t__ LPWSTR ;
typedef scalar_t__ LPCWSTR ;
typedef int HWND ;
typedef void* HTREEITEM ;


 int FUNC_0 (TYPE_2__*,int) ;
 int VAR_0 ;
 void* FUNC_1 (int ,TYPE_2__*) ;

HTREEITEM
FUNC_2(HWND VAR_1,
           LPCWSTR VAR_2,
           HTREEITEM VAR_3,
           HTREEITEM VAR_4)
{
    TVINSERTSTRUCTW VAR_5;
    FUNC_0(&VAR_5, sizeof(VAR_5));

    VAR_5.hParent = VAR_3;
    VAR_5.hInsertAfter = VAR_4;
    VAR_5.itemex.mask = VAR_0;
    VAR_5.itemex.pszText = (LPWSTR)VAR_2;

    return (VAR_5.itemex.hItem = FUNC_1(VAR_1, &VAR_5));
}
