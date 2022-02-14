
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {char* lpszClassName; int * lpszMenuName; int hbrBackground; int hCursor; scalar_t__ hIcon; int hInstance; scalar_t__ cbWndExtra; scalar_t__ cbClsExtra; int lpfnWndProc; scalar_t__ style; } ;
typedef TYPE_1__ WNDCLASSA ;
typedef int LPCSTR ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 scalar_t__ VAR_0 ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (TYPE_1__*) ;
 int VAR_1 ;
 int VAR_2 ;

__attribute__((used)) static void FUNC_4(void)
{
    WNDCLASSA VAR_3;

    VAR_3.style = 0;
    VAR_3.lpfnWndProc = VAR_2;
    VAR_3.cbClsExtra = 0;
    VAR_3.cbWndExtra = 0;
    VAR_3.hInstance = FUNC_0(0);
    VAR_3.hIcon = 0;
    VAR_3.hCursor = FUNC_2(0, (LPCSTR)VAR_0);
    VAR_3.hbrBackground = FUNC_1(VAR_1);
    VAR_3.lpszMenuName = ((void*)0);
    VAR_3.lpszClassName = "TestParentClass";
    FUNC_3(&VAR_3);
}
