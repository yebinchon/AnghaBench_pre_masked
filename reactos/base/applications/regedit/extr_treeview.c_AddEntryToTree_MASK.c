
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int mask; scalar_t__ lParam; scalar_t__ cChildren; int iSelectedImage; int iImage; int pszText; int cchTextMax; } ;
struct TYPE_5__ {void* hParent; void* hInsertAfter; TYPE_1__ item; } ;
typedef TYPE_1__ TVITEMW ;
typedef TYPE_2__ TVINSERTSTRUCTW ;
typedef int LPWSTR ;
typedef scalar_t__ LPARAM ;
typedef int HWND ;
typedef void* HTREEITEM ;
typedef scalar_t__ HKEY ;
typedef scalar_t__ DWORD ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (scalar_t__,int ,int ,int ,scalar_t__*,int ,int ,int ,int ,int ,int ,int ) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;
 void* FUNC_1 (int ,TYPE_2__*) ;
 int FUNC_2 (int ) ;

__attribute__((used)) static HTREEITEM FUNC_3(HWND VAR_10, HTREEITEM VAR_11, LPWSTR VAR_12, HKEY VAR_13, DWORD VAR_14)
{
    TVITEMW VAR_15;
    TVINSERTSTRUCTW VAR_16;

    if (VAR_13)
    {
        if (FUNC_0(VAR_13, 0, 0, 0, &VAR_14, 0, 0, 0, 0, 0, 0, 0) != VAR_0)
        {
            VAR_14 = 0;
        }
    }

    VAR_15.mask = VAR_7 | VAR_4 | VAR_6 | VAR_3 | VAR_5;
    VAR_15.pszText = VAR_12;
    VAR_15.cchTextMax = FUNC_2(VAR_15.pszText);
    VAR_15.iImage = VAR_1;
    VAR_15.iSelectedImage = VAR_2;
    VAR_15.cChildren = VAR_14;
    VAR_15.lParam = (LPARAM)VAR_13;
    VAR_16.item = VAR_15;
    VAR_16.hInsertAfter = (HTREEITEM)(VAR_13 ? VAR_9 : VAR_8);
    VAR_16.hParent = VAR_11;
    return FUNC_1(VAR_10, &VAR_16);
}
