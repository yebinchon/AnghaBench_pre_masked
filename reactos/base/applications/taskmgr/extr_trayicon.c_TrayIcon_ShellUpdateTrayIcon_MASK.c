
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int szTemp ;
typedef int WCHAR ;
struct TYPE_4__ {int cbSize; int uFlags; int szTip; int * hIcon; int uCallbackMessage; scalar_t__ uID; int hWnd; } ;
typedef TYPE_1__ NOTIFYICONDATAW ;
typedef int * HICON ;
typedef int BOOL ;


 int FUNC_0 (int *) ;
 int VAR_0 ;
 int FUNC_1 (int ,int ,int *,int) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_2 () ;
 int FUNC_3 (int ,TYPE_1__*) ;
 int * FUNC_4 () ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_5 (TYPE_1__*,int ,int) ;
 int FUNC_6 (int ,int *,int ) ;

BOOL FUNC_7(void)
{
    NOTIFYICONDATAW VAR_8;
    HICON VAR_9 = ((void*)0);
    BOOL VAR_10;
    WCHAR VAR_11[64];

    FUNC_5(&VAR_8, 0, sizeof(NOTIFYICONDATAW));

    VAR_9 = FUNC_4();

    VAR_8.cbSize = sizeof(NOTIFYICONDATAW);
    VAR_8.hWnd = VAR_7;
    VAR_8.uID = 0;
    VAR_8.uFlags = VAR_1 | VAR_2 | VAR_3;
    VAR_8.uCallbackMessage = VAR_5;
    VAR_8.hIcon = VAR_9;
    FUNC_1(VAR_6, VAR_0, VAR_11, sizeof(VAR_11)/sizeof(VAR_11[0]));
    FUNC_6(VAR_8.szTip, VAR_11, FUNC_2());

    VAR_10 = FUNC_3(VAR_4, &VAR_8);

    if (VAR_9)
        FUNC_0(VAR_9);

    return VAR_10;
}
