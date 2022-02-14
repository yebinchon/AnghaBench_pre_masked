
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int left; int right; int bottom; scalar_t__ top; } ;
typedef TYPE_1__ RECT ;
typedef int * PRECT ;
typedef int HWND ;
typedef int * HRGN ;
typedef int HDC ;


 int * FUNC_0 (int ,int ,int ,int ) ;
 int FUNC_1 (char*,char*,int,int,int,int,int,int *,int *,int ,int ) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int ) ;
 scalar_t__ VAR_0 ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ,int *,scalar_t__) ;
 int VAR_1 ;
 int FUNC_6 (int ,int ) ;
 scalar_t__ FUNC_7 (int ,int,int,int *,TYPE_1__*,int *,int *) ;
 scalar_t__ VAR_2 ;
 int FUNC_8 (int ) ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_9 (int,char*,...) ;

void FUNC_10()
{
 HWND VAR_5, VAR_6;
 HDC VAR_7;
 HRGN VAR_8;
 RECT VAR_9;
 int VAR_10;


 VAR_5 = FUNC_1(L"BUTTON", L"TestWindow", VAR_3 | VAR_4,
                     100, 100, 100, 100,
                     ((void*)0), ((void*)0), 0, 0);
 FUNC_8(VAR_5);
 VAR_7 = FUNC_4(VAR_5);


 VAR_8 = FUNC_0(0,0,0,0);
 VAR_10 = FUNC_5(VAR_5, VAR_8, VAR_0);
 FUNC_9 (VAR_10 == VAR_1, "Expected NULLREGION, got %d\n", VAR_10);


 FUNC_9(FUNC_7(VAR_7, 0, 0, ((void*)0), ((void*)0), VAR_8, ((void*)0)) == VAR_2, "ScrollDC failed\n");


 FUNC_2(VAR_8);
 FUNC_9(FUNC_7(VAR_7, 50, 0, ((void*)0), ((void*)0), (HRGN)0x12345678, ((void*)0)) == VAR_0, "ScrollDC successed\n");
 FUNC_9(FUNC_7(VAR_7, 50, 0, ((void*)0), ((void*)0), VAR_8, ((void*)0)) == VAR_0, "ScrollDC successed\n");
 VAR_8 = FUNC_0(0,0,0,0);
 VAR_10 = FUNC_5(VAR_5, VAR_8, VAR_0);
 FUNC_9(VAR_10 == VAR_1, "Expected NULLREGION, got %d\n", VAR_10);


 FUNC_9(FUNC_7(VAR_7, 50, 0, ((void*)0), ((void*)0), ((void*)0), (PRECT)1) == VAR_0, "ScrollDC failed\n");
 VAR_10 = FUNC_5(VAR_5, VAR_8, VAR_0);
 FUNC_9(VAR_10 == VAR_1, "Expected NULLREGION, got %d\n", VAR_10);


    VAR_9.left = 50; VAR_9.top = 0; VAR_9.right = 100; VAR_9.bottom = 100;
 FUNC_9(FUNC_7(VAR_7, 50, 0, ((void*)0), &VAR_9, VAR_8, ((void*)0)) == VAR_2, "ScrollDC failed\n");
 VAR_10 = FUNC_5(VAR_5, VAR_8, VAR_0);
 FUNC_9(VAR_10 == VAR_1, "Expected NULLREGION, got %d\n", VAR_10);


    VAR_9.left = 50; VAR_9.top = 0; VAR_9.right = 100; VAR_9.bottom = 100;
 FUNC_9(FUNC_7(VAR_7, 50, 50, ((void*)0), &VAR_9, VAR_8, ((void*)0)) == VAR_2, "ScrollDC failed\n");
 VAR_10 = FUNC_5(VAR_5, VAR_8, VAR_0);
 FUNC_9(VAR_10 == VAR_1, "Expected NULLREGION, got %d\n", VAR_10);


 VAR_6 = FUNC_1(L"BUTTON", L"TestWindow", VAR_3 | VAR_4,
                     30, 160, 100, 100,
                     ((void*)0), ((void*)0), 0, 0);
 FUNC_8(VAR_6);


 FUNC_6(VAR_5, VAR_7);
    FUNC_3(VAR_5);
    FUNC_3(VAR_6);

}
