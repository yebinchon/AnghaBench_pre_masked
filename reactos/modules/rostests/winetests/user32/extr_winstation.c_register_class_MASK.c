
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {char* lpszClassName; int * lpszMenuName; int hbrBackground; int hCursor; scalar_t__ hIcon; int hInstance; scalar_t__ cbWndExtra; scalar_t__ cbClsExtra; int lpfnWndProc; int style; } ;
typedef TYPE_1__ WNDCLASSA ;
typedef int LPCSTR ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 scalar_t__ VAR_2 ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (TYPE_1__*) ;
 int VAR_3 ;

__attribute__((used)) static void FUNC_4(void)
{
    WNDCLASSA VAR_4;

    VAR_4.style = VAR_0;
    VAR_4.lpfnWndProc = VAR_1;
    VAR_4.cbClsExtra = 0;
    VAR_4.cbWndExtra = 0;
    VAR_4.hInstance = FUNC_0(0);
    VAR_4.hIcon = 0;
    VAR_4.hCursor = FUNC_2(0, (LPCSTR)VAR_2);
    VAR_4.hbrBackground = FUNC_1(VAR_3);
    VAR_4.lpszMenuName = ((void*)0);
    VAR_4.lpszClassName = "WinStationClass";
    FUNC_3(&VAR_4);
}
