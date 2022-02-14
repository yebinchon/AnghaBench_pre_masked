
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int tnid ;
typedef int VOID ;
struct TYPE_4__ {int cbSize; int uID; int uFlags; int * szTip; int hIcon; int uCallbackMessage; int hWnd; } ;
typedef int TCHAR ;
typedef TYPE_1__ NOTIFYICONDATA ;
typedef int HWND ;


 int FUNC_0 (int *) ;
 int VAR_0 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int ,int *,int ) ;
 int FUNC_3 (int ,int *,int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_4 (int ,TYPE_1__*) ;
 int FUNC_5 (int *,int ,int *) ;
 int VAR_6 ;
 int FUNC_6 (char*) ;
 int FUNC_7 (TYPE_1__*,int ,int) ;

__attribute__((used)) static VOID
FUNC_8(HWND VAR_7)
{
    NOTIFYICONDATA VAR_8;
    TCHAR VAR_9[VAR_0 + 1];
    TCHAR VAR_10[VAR_1];

    FUNC_2(FUNC_6("1"), VAR_9, FUNC_0(VAR_9));
    FUNC_3(FUNC_6("1"), VAR_10, FUNC_0(VAR_10));

    FUNC_7(&VAR_8, 0, sizeof(VAR_8));
    VAR_8.cbSize = sizeof(NOTIFYICONDATA);
    VAR_8.hWnd = VAR_7;
    VAR_8.uID = 1;
    VAR_8.uFlags = VAR_2 | VAR_3 | VAR_4;
    VAR_8.uCallbackMessage = VAR_6;
    VAR_8.hIcon = FUNC_1(VAR_9);

    FUNC_5(VAR_8.szTip, FUNC_0(VAR_8.szTip), VAR_10);

    FUNC_4(VAR_5, &VAR_8);
}
