
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int top; } ;
typedef TYPE_1__ RECT ;
typedef int LPARAM ;
typedef int HWND ;
typedef int BOOL ;


 int FUNC_0 (int ,int ,int,int ) ;
 int VAR_0 ;
 int FUNC_1 (int,char*,int) ;

__attribute__((used)) static BOOL FUNC_2(HWND VAR_1)
{
    RECT VAR_2;
    FUNC_0(VAR_1, VAR_0, 1, (LPARAM)&VAR_2);
    FUNC_1(VAR_2.top == 2 || VAR_2.top == 0, "Unexpected top margin %d in recalc test\n",
        VAR_2.top);
    return (VAR_2.top == 0);
}
