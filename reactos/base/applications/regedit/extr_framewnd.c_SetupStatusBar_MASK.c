
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int right; } ;
typedef TYPE_1__ RECT ;
typedef int LPARAM ;
typedef int HWND ;
typedef scalar_t__ BOOL ;


 int FUNC_0 (int ,TYPE_1__*) ;
 int VAR_0 ;
 int FUNC_1 (int ,int ,int,int ) ;
 int VAR_1 ;
 int VAR_2 ;

void FUNC_2(HWND VAR_3, BOOL VAR_4)
{
    RECT VAR_5;
    int VAR_6;
    FUNC_0(VAR_3, &VAR_5);
    VAR_6 = VAR_5.right;

    if (VAR_4)
        FUNC_1(VAR_2, VAR_1, 0, 0);
    FUNC_1(VAR_2, VAR_0, 1, (LPARAM)&VAR_6);
}
