
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int right; int bottom; } ;
typedef TYPE_1__ RECT ;
typedef int PAINTSTRUCT ;
typedef int HWND ;
typedef int HDC ;


 int FUNC_0 (int ,int *) ;
 int FUNC_1 (int ,int *) ;
 int FUNC_2 (int ,TYPE_1__*,int ) ;
 int VAR_0 ;
 int FUNC_3 (int ,TYPE_1__*) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ,int,int) ;
 int FUNC_6 (int ,int,int,int *) ;
 int FUNC_7 (int ,int ) ;
 int VAR_1 ;

__attribute__((used)) static void FUNC_8(HWND VAR_2)
{
    PAINTSTRUCT VAR_3;
    HDC VAR_4;
    RECT VAR_5;

    VAR_4 = FUNC_0(VAR_2, &VAR_3);

    FUNC_3(VAR_2, &VAR_5);


    VAR_5.right += 1;
    VAR_5.bottom -= 1;
    FUNC_2(VAR_4, &VAR_5, FUNC_4(VAR_0));


    FUNC_7(VAR_4, FUNC_4(VAR_1));
    FUNC_6(VAR_4, VAR_5.right, 1, ((void*)0));
    FUNC_5(VAR_4, 1, 1);
    FUNC_5(VAR_4, 1, VAR_5.bottom - 1);


    FUNC_6(VAR_4, 0, VAR_5.bottom, ((void*)0));
    FUNC_5(VAR_4, VAR_5.right, VAR_5.bottom);

    FUNC_1(VAR_2, &VAR_3);
}
