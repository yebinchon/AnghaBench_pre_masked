
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ hWnd; } ;
typedef scalar_t__ HWND ;


 TYPE_1__* VAR_0 ;

__attribute__((used)) static int FUNC_0(HWND VAR_1)
{
    if(VAR_1 == VAR_0[0].hWnd) return 0;
    else if(VAR_1 == VAR_0[1].hWnd) return 1;
    else if(VAR_1 == VAR_0[2].hWnd) return 2;
    else if(VAR_1 == VAR_0[3].hWnd) return 3;
    else if(VAR_1 == VAR_0[4].hWnd) return 4;
    else return -1;
}
