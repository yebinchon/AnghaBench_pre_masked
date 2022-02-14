
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int hdc; } ;
typedef int RECT ;
typedef TYPE_1__ PAINTSTRUCT ;
typedef int HWND ;
typedef int ChildWnd ;


 int VAR_0 ;
 int FUNC_0 (int ,TYPE_1__*) ;
 int FUNC_1 (int ,TYPE_1__*) ;
 int FUNC_2 (int ,int *,int ) ;
 int FUNC_3 (int ,int *) ;
 int FUNC_4 (int ) ;

__attribute__((used)) static void FUNC_5(HWND VAR_1, ChildWnd* VAR_2)
{
    PAINTSTRUCT VAR_3;
    RECT VAR_4;
    FUNC_3(VAR_1, &VAR_4);
    FUNC_0(VAR_1, &VAR_3);





    FUNC_2(VAR_3.hdc, &VAR_4, FUNC_4(VAR_0));
    FUNC_1(VAR_1, &VAR_3);
}
