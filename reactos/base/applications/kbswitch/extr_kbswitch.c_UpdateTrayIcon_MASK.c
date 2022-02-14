
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int tnid ;
typedef int VOID ;
struct TYPE_4__ {int cbSize; int uID; int uFlags; int szTip; int hIcon; int uCallbackMessage; int hWnd; } ;
typedef TYPE_1__ NOTIFYICONDATA ;
typedef int LPTSTR ;
typedef int HWND ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_2 (int ,TYPE_1__*) ;
 int FUNC_3 (int ,int ,int ) ;
 int VAR_4 ;
 int FUNC_4 (TYPE_1__*,int ,int) ;

__attribute__((used)) static VOID
FUNC_5(HWND VAR_5, LPTSTR VAR_6, LPTSTR VAR_7)
{
    NOTIFYICONDATA VAR_8;

    FUNC_4(&VAR_8, 0, sizeof(VAR_8));
    VAR_8.cbSize = sizeof(NOTIFYICONDATA);
    VAR_8.hWnd = VAR_5;
    VAR_8.uID = 1;
    VAR_8.uFlags = VAR_0 | VAR_1 | VAR_2;
    VAR_8.uCallbackMessage = VAR_4;
    VAR_8.hIcon = FUNC_1(VAR_6);

    FUNC_3(VAR_8.szTip, FUNC_0(VAR_8.szTip), VAR_7);

    FUNC_2(VAR_3, &VAR_8);
}
