
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int UINT ;
struct TYPE_2__ {int ptCursor; int uNotification; int hWnd; } ;
typedef int LRESULT ;
typedef int LPARAM ;
typedef int HWND ;
typedef TYPE_1__ DRAGLISTINFO ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ,int ,int ,int ) ;
 int VAR_0 ;

__attribute__((used)) static LRESULT FUNC_4(HWND VAR_1, UINT VAR_2)
{
    DRAGLISTINFO VAR_3;
    VAR_3.hWnd = VAR_1;
    VAR_3.uNotification = VAR_2;
    FUNC_0(&VAR_3.ptCursor);
    return FUNC_3(FUNC_2(VAR_1), VAR_0, FUNC_1(VAR_1), (LPARAM)&VAR_3);
}
