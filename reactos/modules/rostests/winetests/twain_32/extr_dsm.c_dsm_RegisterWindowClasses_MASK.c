
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {char* lpszClassName; int * lpszMenuName; int hbrBackground; int hCursor; scalar_t__ hIcon; int hInstance; scalar_t__ cbWndExtra; scalar_t__ cbClsExtra; int lpfnWndProc; scalar_t__ style; } ;
typedef TYPE_1__ WNDCLASSA ;
typedef int LPCSTR ;
typedef int BOOL ;


 int VAR_0 ;
 int FUNC_0 () ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 scalar_t__ VAR_1 ;
 int FUNC_3 (int ,int ) ;
 int FUNC_4 (TYPE_1__*) ;
 int VAR_2 ;
 int FUNC_5 (int ,char*,int ) ;

__attribute__((used)) static BOOL FUNC_6(void)
{
    WNDCLASSA VAR_3;
    BOOL VAR_4;

    VAR_3.style = 0;
    VAR_3.lpfnWndProc = VAR_0;
    VAR_3.cbClsExtra = 0;
    VAR_3.cbWndExtra = 0;
    VAR_3.hInstance = FUNC_1(0);
    VAR_3.hIcon = 0;
    VAR_3.hCursor = FUNC_3(0, (LPCSTR)VAR_1);
    VAR_3.hbrBackground = FUNC_2(VAR_2);
    VAR_3.lpszMenuName = ((void*)0);
    VAR_3.lpszClassName = "TWAIN_dsm_class";

    VAR_4 = FUNC_4(&VAR_3);
    FUNC_5(VAR_4, "RegisterClassA failed: le=%u\n", FUNC_0());
    return VAR_4;
}
