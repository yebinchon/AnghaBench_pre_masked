
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int left; int right; } ;
typedef TYPE_1__ RECT ;
typedef int HWND ;
typedef int HDC ;


 int FUNC_0 (int ,TYPE_1__*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,TYPE_1__*) ;
 int FUNC_3 (int ,int ) ;
 int VAR_0 ;

__attribute__((used)) static void FUNC_4(HWND VAR_1, int VAR_2)
{
    RECT VAR_3;
    HDC VAR_4 = FUNC_1(VAR_1);

    FUNC_0(VAR_1, &VAR_3);
    VAR_3.left = VAR_2 - VAR_0/2;
    VAR_3.right = VAR_2 + VAR_0/2+1;
    FUNC_2(VAR_4, &VAR_3);
    FUNC_3(VAR_1, VAR_4);
}
