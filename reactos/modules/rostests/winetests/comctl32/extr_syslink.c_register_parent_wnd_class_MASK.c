
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int lpszClassName; int * lpszMenuName; int hbrBackground; int hCursor; scalar_t__ hIcon; int hInstance; scalar_t__ cbWndExtra; scalar_t__ cbClsExtra; int lpfnWndProc; scalar_t__ style; } ;
typedef TYPE_1__ WNDCLASSW ;
typedef int LPCWSTR ;
typedef int BOOL ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int ) ;
 scalar_t__ VAR_0 ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (TYPE_1__*) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;

__attribute__((used)) static BOOL FUNC_4(void)
{
    WNDCLASSW VAR_4;

    VAR_4.style = 0;
    VAR_4.lpfnWndProc = VAR_3;
    VAR_4.cbClsExtra = 0;
    VAR_4.cbWndExtra = 0;
    VAR_4.hInstance = FUNC_0(((void*)0));
    VAR_4.hIcon = 0;
    VAR_4.hCursor = FUNC_2(0, (LPCWSTR)VAR_0);
    VAR_4.hbrBackground = FUNC_1(VAR_1);
    VAR_4.lpszMenuName = ((void*)0);
    VAR_4.lpszClassName = VAR_2;
    return FUNC_3(&VAR_4);
}
