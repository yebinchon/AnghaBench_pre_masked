
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int cbSize; int uCallbackMessage; scalar_t__ uFlags; scalar_t__ uID; int hWnd; } ;
typedef TYPE_1__ NOTIFYICONDATAW ;
typedef int BOOL ;


 int VAR_0 ;
 int FUNC_0 (int ,TYPE_1__*) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (TYPE_1__*,int ,int) ;

BOOL FUNC_2(void)
{
    NOTIFYICONDATAW VAR_3;
    BOOL VAR_4;

    FUNC_1(&VAR_3, 0, sizeof(NOTIFYICONDATAW));

    VAR_3.cbSize = sizeof(NOTIFYICONDATAW);
    VAR_3.hWnd = VAR_2;
    VAR_3.uID = 0;
    VAR_3.uFlags = 0;
    VAR_3.uCallbackMessage = VAR_1;

    VAR_4 = FUNC_0(VAR_0, &VAR_3);

    return VAR_4;
}
