
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int left; int top; int right; int bottom; } ;
typedef TYPE_1__ RECT ;
typedef int LPPOINT ;
typedef int INT ;
typedef int HRGN ;
typedef int HDC ;
typedef int HBITMAP ;


 int FUNC_0 (int ,int,int) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int,int,int,int) ;
 int FUNC_3 (int ,int ,int) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int ,int ,int ) ;
 int FUNC_7 (int ,TYPE_1__*) ;
 int FUNC_8 (int ,int,int,int,int,int ) ;
 int VAR_0 ;
 int FUNC_9 (int ,int ) ;
 int FUNC_10 (int ,int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_11 (int ,int) ;
 int FUNC_12 (int,int) ;
 int FUNC_13 (char*) ;

void FUNC_14()
{
    HDC VAR_3;
    HRGN VAR_4, VAR_5;
    INT VAR_6;
    RECT VAR_7, VAR_8;
    HBITMAP VAR_9;

    VAR_4 = FUNC_2(11, 17, 23, 42);
    if (!VAR_4)
    {
        FUNC_13("Coun't create a region\n");
        return;
    }

    VAR_3 = FUNC_1(0);
    if (!VAR_3)
    {
        FUNC_13("Coun't create a dc\n");
        return;
    }

    VAR_6 = FUNC_6(VAR_3, VAR_4, VAR_0);
    FUNC_11(VAR_6, 1);
    FUNC_7(VAR_4, &VAR_7);
    FUNC_12(VAR_7.left, 0);
    FUNC_12(VAR_7.top, 0);
    FUNC_12(VAR_7.right, 1);
    FUNC_12(VAR_7.bottom, 1);

    VAR_5 = FUNC_2(1, 2, 3, 4);
    FUNC_9(VAR_3, VAR_5);
    FUNC_5(VAR_5);
    VAR_6 = FUNC_6(VAR_3, VAR_4, VAR_0);
    FUNC_11(VAR_6, 1);
    FUNC_7(VAR_4, &VAR_7);
    FUNC_12(VAR_7.left, 0);
    FUNC_12(VAR_7.top, 0);
    FUNC_12(VAR_7.right, 1);
    FUNC_12(VAR_7.bottom, 1);

    VAR_9 = FUNC_0(VAR_3, 4, 7);
    FUNC_10(VAR_3, VAR_9);
    VAR_6 = FUNC_6(VAR_3, VAR_4, VAR_0);
    FUNC_11(VAR_6, 1);
    FUNC_7(VAR_4, &VAR_7);
    FUNC_12(VAR_7.left, 0);
    FUNC_12(VAR_7.top, 0);
    FUNC_12(VAR_7.right, 4);
    FUNC_12(VAR_7.bottom, 7);
    FUNC_5(VAR_9);

    FUNC_8(VAR_2, 100, 100, 100, 100, 0);
    VAR_6 = FUNC_6(VAR_1, VAR_4, VAR_0);
    FUNC_11(VAR_6, 1);
    FUNC_7(VAR_4, &VAR_7);
    FUNC_3(VAR_1, (LPPOINT)&VAR_7, 2);







    FUNC_8(VAR_2, 200, 400, 200, 200, 0);

    VAR_6 = FUNC_6(VAR_1, VAR_4, VAR_0);
    FUNC_11(VAR_6, 1);
    FUNC_7(VAR_4, &VAR_8);
    FUNC_3(VAR_1, (LPPOINT)&VAR_8, 2);







    FUNC_5(VAR_4);
    FUNC_4(VAR_3);

}
