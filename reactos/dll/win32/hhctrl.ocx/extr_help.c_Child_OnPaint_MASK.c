
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int right; } ;
typedef TYPE_1__ RECT ;
typedef int PAINTSTRUCT ;
typedef int LRESULT ;
typedef int HWND ;
typedef int HDC ;


 int FUNC_0 (int ,int *) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int ,int *) ;
 int VAR_2 ;
 int FUNC_2 (int ,TYPE_1__*) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 scalar_t__ FUNC_5 (int ,int ) ;
 int FUNC_6 (int ,int ,int) ;
 int FUNC_7 (int ,int ,int,int *) ;
 int FUNC_8 (int ,int ) ;
 int FUNC_9 (int ,int ) ;
 int VAR_3 ;

__attribute__((used)) static LRESULT FUNC_10(HWND VAR_4)
{
    PAINTSTRUCT VAR_5;
    HDC VAR_6;
    RECT VAR_7;

    VAR_6 = FUNC_0(VAR_4, &VAR_5);




    if (FUNC_5(VAR_4, VAR_2))
    {
        FUNC_2(VAR_4, &VAR_7);


        FUNC_8(VAR_6, FUNC_3(VAR_1));
        FUNC_9(VAR_6, FUNC_4(VAR_0));


        FUNC_6(VAR_6, VAR_7.right, 0);

        FUNC_8(VAR_6, FUNC_3(VAR_3));
        FUNC_7(VAR_6, 0, 1, ((void*)0));
        FUNC_6(VAR_6, VAR_7.right, 1);
    }

    FUNC_1(VAR_4, &VAR_5);

    return 0;
}
