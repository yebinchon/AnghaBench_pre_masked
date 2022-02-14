
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {char* lpszClassName; int lpfnWndProc; int member_0; } ;
typedef TYPE_1__ WNDCLASSA ;
typedef int HWND ;


 int FUNC_0 (char*,char*,int ,int ,int ,int ,int ,int ,int ,int ,int ) ;
 int VAR_0 ;
 int FUNC_1 (TYPE_1__*) ;

__attribute__((used)) static HWND FUNC_2(void)
{
    WNDCLASSA VAR_1 = {0};
    VAR_1.lpfnWndProc = VAR_0;
    VAR_1.lpszClassName = "d3d9_test_wc";
    FUNC_1(&VAR_1);

    return FUNC_0("d3d9_test_wc", "d3d9_test", 0, 0, 0, 0, 0, 0, 0, 0, 0);
}
