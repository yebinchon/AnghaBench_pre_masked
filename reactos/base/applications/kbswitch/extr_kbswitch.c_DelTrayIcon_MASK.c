
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int tnid ;
typedef int VOID ;
struct TYPE_4__ {int cbSize; int uID; int hWnd; } ;
typedef TYPE_1__ NOTIFYICONDATA ;
typedef int HWND ;


 int VAR_0 ;
 int FUNC_0 (int ,TYPE_1__*) ;
 int FUNC_1 (TYPE_1__*,int ,int) ;

__attribute__((used)) static VOID
FUNC_2(HWND VAR_1)
{
    NOTIFYICONDATA VAR_2;

    FUNC_1(&VAR_2, 0, sizeof(VAR_2));
    VAR_2.cbSize = sizeof(NOTIFYICONDATA);
    VAR_2.hWnd = VAR_1;
    VAR_2.uID = 1;

    FUNC_0(VAR_0, &VAR_2);
}
