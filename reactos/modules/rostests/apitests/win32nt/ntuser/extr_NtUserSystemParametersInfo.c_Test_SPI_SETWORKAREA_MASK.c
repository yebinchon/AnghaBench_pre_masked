
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int left; int top; int right; int bottom; } ;
typedef TYPE_1__ RECT ;
typedef TYPE_1__* PVOID ;


 int FUNC_0 (int) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,int,TYPE_1__*,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_3 (int) ;

void
FUNC_4(void)
{
    RECT VAR_4, VAR_5;


    FUNC_0(FUNC_2(VAR_2, 0, &VAR_4, 0) == 1);


    VAR_5 = VAR_4;
    VAR_5.left += 1;
    VAR_5.top += 2;
    VAR_5.right -= 3;
    VAR_5.bottom -= 2;
    FUNC_3(FUNC_2(VAR_3, 1, &VAR_5, 0) == 1);
    FUNC_3(FUNC_2(VAR_3, 0, &VAR_5, 0) == 1);
    FUNC_3(FUNC_2(VAR_3, sizeof(RECT), &VAR_5, 0) == 1);

    FUNC_3(FUNC_2(VAR_2, 1, &VAR_5, 0) == 1);
    FUNC_3(FUNC_2(VAR_2, -1, &VAR_5, 0) == 1);
    FUNC_3(FUNC_2(VAR_2, 0xdeadbeef, &VAR_5, 0) == 1);
    FUNC_3(FUNC_2(VAR_2, 0, (PVOID)0xdeadbeef, 0) == 0);


    VAR_5 = VAR_4; VAR_5.left = -1;
    FUNC_3(FUNC_2(VAR_3, 0, &VAR_5, 0) == 0);
    VAR_5 = VAR_4; VAR_5.top = -1;
    FUNC_3(FUNC_2(VAR_3, 0, &VAR_5, 0) == 0);
    VAR_5 = VAR_4; VAR_5.top = 10; VAR_5.bottom = 11;
    FUNC_3(FUNC_2(VAR_3, 0, &VAR_5, 0) == 1);
    VAR_5 = VAR_4; VAR_5.top = 10; VAR_5.bottom = 10;
    FUNC_3(FUNC_2(VAR_3, 0, &VAR_5, 0) == 0);
    VAR_5 = VAR_4; VAR_5.top = 10; VAR_5.bottom = 9;
    FUNC_3(FUNC_2(VAR_3, 0, &VAR_5, 0) == 0);
    VAR_5 = VAR_4; VAR_5.left = 10; VAR_5.right = 11;
    FUNC_3(FUNC_2(VAR_3, 0, &VAR_5, 0) == 1);
    VAR_5 = VAR_4; VAR_5.left = 10; VAR_5.right = 10;
    FUNC_3(FUNC_2(VAR_3, 0, &VAR_5, 0) == 0);
    VAR_5 = VAR_4; VAR_5.left = 10; VAR_5.right = 9;
    FUNC_3(FUNC_2(VAR_3, 0, &VAR_5, 0) == 0);
    VAR_5 = VAR_4; VAR_5.bottom = FUNC_1(VAR_1);
    FUNC_3(FUNC_2(VAR_3, 0, &VAR_5, 0) == 1);
    VAR_5 = VAR_4; VAR_5.bottom = FUNC_1(VAR_1)+1;
    FUNC_3(FUNC_2(VAR_3, 0, &VAR_5, 0) == 0);
    VAR_5 = VAR_4; VAR_5.right = FUNC_1(VAR_0);
    FUNC_3(FUNC_2(VAR_3, 0, &VAR_5, 0) == 1);
    VAR_5 = VAR_4; VAR_5.right = FUNC_1(VAR_0)+1;
    FUNC_3(FUNC_2(VAR_3, 0, &VAR_5, 0) == 0);


    FUNC_0(FUNC_2(VAR_3, 0, &VAR_4, 0) == 1);


}
