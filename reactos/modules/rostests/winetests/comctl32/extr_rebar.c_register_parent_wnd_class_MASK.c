
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int style; char* lpszClassName; int lpfnWndProc; int * lpszMenuName; int hbrBackground; int hCursor; int * hIcon; int hInstance; scalar_t__ cbWndExtra; scalar_t__ cbClsExtra; } ;
typedef TYPE_1__ WNDCLASSA ;
typedef int LPCSTR ;
typedef int BOOL ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int ) ;
 scalar_t__ VAR_3 ;
 int FUNC_2 (int *,int ) ;
 int FUNC_3 (TYPE_1__*) ;
 int VAR_4 ;

__attribute__((used)) static BOOL FUNC_4(void)
{
    WNDCLASSA VAR_5;

    VAR_5.style = VAR_1 | VAR_2;
    VAR_5.cbClsExtra = 0;
    VAR_5.cbWndExtra = 0;
    VAR_5.hInstance = FUNC_0(((void*)0));
    VAR_5.hIcon = ((void*)0);
    VAR_5.hCursor = FUNC_2(((void*)0), (LPCSTR)VAR_3);
    VAR_5.hbrBackground = FUNC_1(VAR_0);
    VAR_5.lpszMenuName = ((void*)0);
    VAR_5.lpszClassName = "MyTestWnd";
    VAR_5.lpfnWndProc = VAR_4;

    return FUNC_3(&VAR_5);
}
