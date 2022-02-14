
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int bottom; int right; int top; int left; } ;
typedef TYPE_1__ RECT ;
typedef int INT ;
typedef int HRGN ;
typedef int HDC ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int,int,int,int) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ,int ,int ) ;
 int FUNC_5 (int ,TYPE_1__*) ;
 int FUNC_6 (int ,int,int,int,int,int ) ;
 int FUNC_7 (int ,int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_8 (int ,int) ;
 int FUNC_9 (int ,int) ;
 int FUNC_10 (char*) ;

void FUNC_11()
{
    HDC VAR_3;
    HRGN VAR_4, VAR_5;
    INT VAR_6;
    RECT VAR_7;

    VAR_4 = FUNC_1(11, 17, 23, 42);
    if (!VAR_4)
    {
        FUNC_10("Coun't create a region\n");
        return;
    }

    VAR_3 = FUNC_0(0);
    if (!VAR_3)
    {
        FUNC_10("Coun't create a dc\n");
        return;
    }

    VAR_6 = FUNC_4(VAR_3, VAR_4, VAR_0);
    FUNC_8(VAR_6, 0);
    FUNC_5(VAR_4, &VAR_7);
    FUNC_9(VAR_7.left, 11);
    FUNC_9(VAR_7.top, 17);
    FUNC_9(VAR_7.right, 23);
    FUNC_9(VAR_7.bottom, 42);

    VAR_5 = FUNC_1(1, 2, 3, 4);
    FUNC_7(VAR_3, VAR_5);
    FUNC_3(VAR_5);
    VAR_6 = FUNC_4(VAR_3, VAR_4, VAR_0);
    FUNC_8(VAR_6, 1);
    FUNC_5(VAR_4, &VAR_7);
    FUNC_9(VAR_7.left, 1);
    FUNC_9(VAR_7.top, 2);
    FUNC_9(VAR_7.right, 3);
    FUNC_9(VAR_7.bottom, 4);

    VAR_5 = FUNC_1(2, 3, 4, 5);
    FUNC_7(VAR_1, VAR_5);
    FUNC_3(VAR_5);
    VAR_6 = FUNC_4(VAR_1, VAR_4, VAR_0);
    FUNC_8(VAR_6, 1);
    FUNC_5(VAR_4, &VAR_7);
    FUNC_9(VAR_7.left, 2);
    FUNC_9(VAR_7.top, 3);
    FUNC_9(VAR_7.right, 4);
    FUNC_9(VAR_7.bottom, 5);

    FUNC_6(VAR_2, 200, 400, 100, 100, 0);

    VAR_6 = FUNC_4(VAR_1, VAR_4, VAR_0);
    FUNC_8(VAR_6, 1);
    FUNC_5(VAR_4, &VAR_7);
    FUNC_9(VAR_7.left, 2);
    FUNC_9(VAR_7.top, 3);
    FUNC_9(VAR_7.right, 4);
    FUNC_9(VAR_7.bottom, 5);


    FUNC_3(VAR_4);
    FUNC_2(VAR_3);
}
