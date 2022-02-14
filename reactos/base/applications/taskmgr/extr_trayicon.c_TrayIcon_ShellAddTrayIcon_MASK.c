
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int szMsg ;
typedef int WCHAR ;
struct TYPE_4__ {int cbSize; int uFlags; int szTip; int * hIcon; int uCallbackMessage; scalar_t__ uID; int hWnd; } ;
typedef TYPE_1__ NOTIFYICONDATAW ;
typedef int * HICON ;
typedef int BOOL ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int VAR_0 ;
 int FUNC_2 (int ,int ,int *,int) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_3 () ;
 int FUNC_4 (int ,TYPE_1__*) ;
 int * FUNC_5 () ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_6 (TYPE_1__*,int ,int) ;
 int FUNC_7 (int ,int *,int ) ;

BOOL FUNC_8(void)
{
    NOTIFYICONDATAW VAR_7;
    HICON VAR_8 = ((void*)0);
    BOOL VAR_9;
    WCHAR VAR_10[64];

    FUNC_6(&VAR_7, 0, sizeof(NOTIFYICONDATAW));

    VAR_8 = FUNC_5();

    VAR_7.cbSize = sizeof(NOTIFYICONDATAW);
    VAR_7.hWnd = VAR_6;
    VAR_7.uID = 0;
    VAR_7.uFlags = VAR_1 | VAR_2 | VAR_3;
    VAR_7.uCallbackMessage = VAR_5;
    VAR_7.hIcon = VAR_8;


    FUNC_2( FUNC_1(((void*)0)), VAR_0, VAR_10, sizeof(VAR_10) / sizeof(VAR_10[0]));
    FUNC_7(VAR_7.szTip, VAR_10, FUNC_3());

    VAR_9 = FUNC_4(VAR_4, &VAR_7);

    if (VAR_8)
        FUNC_0(VAR_8);

    return VAR_9;
}
