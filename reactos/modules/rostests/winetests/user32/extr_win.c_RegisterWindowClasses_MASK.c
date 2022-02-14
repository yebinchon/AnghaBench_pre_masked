
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int lpszClassName; int * lpszMenuName; void* hbrBackground; void* hCursor; scalar_t__ hIcon; void* hInstance; scalar_t__ cbWndExtra; scalar_t__ cbClsExtra; int lpfnWndProc; void* style; } ;
typedef TYPE_1__ WNDCLASSW ;
struct TYPE_6__ {char* lpszClassName; int * lpszMenuName; void* hbrBackground; void* hCursor; scalar_t__ hIcon; void* hInstance; scalar_t__ cbWndExtra; scalar_t__ cbClsExtra; int lpfnWndProc; void* style; } ;
typedef TYPE_2__ WNDCLASSA ;
typedef int LPCSTR ;
typedef int BOOL ;


 void* VAR_0 ;
 int VAR_1 ;
 void* FUNC_0 (int ) ;
 void* FUNC_1 (int ) ;
 scalar_t__ VAR_2 ;
 void* FUNC_2 (int ,int ) ;
 int FUNC_3 (TYPE_2__*) ;
 int FUNC_4 (TYPE_1__*) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;

__attribute__((used)) static BOOL FUNC_5(void)
{
    WNDCLASSW VAR_9;
    WNDCLASSA VAR_10;

    VAR_10.style = VAR_0;
    VAR_10.lpfnWndProc = VAR_5;
    VAR_10.cbClsExtra = 0;
    VAR_10.cbWndExtra = 0;
    VAR_10.hInstance = FUNC_0(0);
    VAR_10.hIcon = 0;
    VAR_10.hCursor = FUNC_2(0, (LPCSTR)VAR_2);
    VAR_10.hbrBackground = FUNC_1(VAR_4);
    VAR_10.lpszMenuName = ((void*)0);
    VAR_10.lpszClassName = "MainWindowClass";

    if(!FUNC_3(&VAR_10)) return VAR_1;

    VAR_9.style = VAR_0;
    VAR_9.lpfnWndProc = VAR_6;
    VAR_9.cbClsExtra = 0;
    VAR_9.cbWndExtra = 0;
    VAR_9.hInstance = FUNC_0(0);
    VAR_9.hIcon = 0;
    VAR_9.hCursor = FUNC_2(0, (LPCSTR)VAR_2);
    VAR_9.hbrBackground = FUNC_1(VAR_4);
    VAR_9.lpszMenuName = ((void*)0);
    VAR_9.lpszClassName = VAR_7;

    if(!FUNC_4(&VAR_9)) return VAR_1;

    VAR_10.style = 0;
    VAR_10.lpfnWndProc = VAR_8;
    VAR_10.cbClsExtra = 0;
    VAR_10.cbWndExtra = 0;
    VAR_10.hInstance = FUNC_0(0);
    VAR_10.hIcon = 0;
    VAR_10.hCursor = FUNC_2(0, (LPCSTR)VAR_2);
    VAR_10.hbrBackground = FUNC_1(VAR_4);
    VAR_10.lpszMenuName = ((void*)0);
    VAR_10.lpszClassName = "ToolWindowClass";

    if(!FUNC_3(&VAR_10)) return VAR_1;

    return VAR_3;
}
