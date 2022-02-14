
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_4__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


typedef int mii ;
struct TYPE_13__ {int opendropdown_has_selection; int dlg_hwnd; int opendropdown_selection; int hmenu_opendropdown; } ;
struct TYPE_12__ {int cbSize; int wID; int fMask; } ;
struct TYPE_11__ {int wParam; scalar_t__ lParam; } ;
struct TYPE_10__ {int bottom; int left; } ;
typedef TYPE_1__ RECT ;
typedef TYPE_2__ MSG ;
typedef TYPE_3__ MENUITEMINFOW ;
typedef int HWND ;
typedef int HMENU ;
typedef TYPE_4__ FileDialogImpl ;


 int FUNC_0 (int ,int ) ;
 int VAR_0 ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (int ,int ,int ,TYPE_3__*) ;
 int FUNC_3 (int ,TYPE_1__*) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_4 (TYPE_2__*,int ,int ,int ,int ) ;
 scalar_t__ FUNC_5 (int ) ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ FUNC_6 (int ,int ,int ,int ,int ,int ,int *) ;
 int VAR_6 ;
 int FUNC_7 (TYPE_4__*) ;

__attribute__((used)) static void FUNC_8(FileDialogImpl *VAR_7)
{
    HWND VAR_8;
    RECT VAR_9;
    MSG VAR_10;

    VAR_8 = FUNC_1(VAR_7->dlg_hwnd, VAR_1);

    FUNC_3(VAR_8, &VAR_9);

    if (FUNC_6(VAR_7->hmenu_opendropdown, 0, VAR_9.left, VAR_9.bottom, 0, VAR_7->dlg_hwnd, ((void*)0)) &&
        FUNC_4(&VAR_10, VAR_7->dlg_hwnd, VAR_6, VAR_6, VAR_3))
    {
        MENUITEMINFOW VAR_11;

        VAR_7->opendropdown_has_selection = VAR_5;

        VAR_11.cbSize = sizeof(VAR_11);
        VAR_11.fMask = VAR_2;
        FUNC_2((HMENU)VAR_10.lParam, VAR_10.wParam, VAR_5, &VAR_11);
        VAR_7->opendropdown_selection = VAR_11.wID;

        if(FUNC_5(FUNC_7(VAR_7)))
            FUNC_0(VAR_7->dlg_hwnd, VAR_4);
        else
            VAR_7->opendropdown_has_selection = VAR_0;
    }
}
