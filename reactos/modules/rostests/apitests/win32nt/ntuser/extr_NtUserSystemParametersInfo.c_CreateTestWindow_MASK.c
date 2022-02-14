
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {char* lpszClassName; int * lpszMenuName; int * hbrBackground; int * hCursor; int * hIcon; int hInstance; scalar_t__ cbWndExtra; scalar_t__ cbClsExtra; int lpfnWndProc; scalar_t__ style; } ;
typedef TYPE_1__ WNDCLASSA ;
typedef int HWND ;
typedef int HINSTANCE ;


 int FUNC_0 (char*,char*,int ,int ,int ,int,int,int *,int *,int ,int ) ;
 int VAR_0 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (TYPE_1__*) ;
 int VAR_1 ;

HWND
FUNC_3()
{
    HINSTANCE VAR_2 = FUNC_1(((void*)0));
    WNDCLASSA VAR_3;

    VAR_3.style = 0;
    VAR_3.lpfnWndProc = VAR_0;
    VAR_3.cbClsExtra = 0;
    VAR_3.cbWndExtra = 0;
    VAR_3.hInstance = VAR_2;
    VAR_3.hIcon = ((void*)0);
    VAR_3.hCursor = ((void*)0);
    VAR_3.hbrBackground = ((void*)0);
    VAR_3.lpszMenuName = ((void*)0);
    VAR_3.lpszClassName = "testclass";

    FUNC_2(&VAR_3);
    return FUNC_0("testclass",
                         "testwnd",
                         VAR_1,
                         0,
                         0,
                         50,
                         30,
                         ((void*)0),
                         ((void*)0),
                         VAR_2,
                         0);
}
