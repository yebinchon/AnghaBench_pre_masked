
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {int right; int left; int top; int bottom; } ;
struct TYPE_4__ {int cbSize; int uId; int lParam; int rect; scalar_t__ lpszText; int uFlags; int hinst; int * hwnd; } ;
typedef TYPE_1__ TTTOOLINFOA ;
typedef TYPE_2__ RECT ;
typedef scalar_t__ LPSTR ;
typedef int LPARAM ;
typedef int * HWND ;
typedef int BOOL ;


 int * FUNC_0 (int ,int ,int *,int ,int,int,int,int,int *,int *,int *,int ) ;
 int FUNC_1 (int *) ;
 int VAR_0 ;
 int FUNC_2 (int *,int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *,TYPE_2__*) ;
 int VAR_1 ;
 int FUNC_5 (int,int ) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_6 (int *,int ,int ,int ) ;
 int FUNC_7 (int,int) ;
 int FUNC_8 (int *,int ,int ,int ,int ,int ,int) ;
 int FUNC_9 (int *,int ) ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int * FUNC_10 () ;
 int FUNC_11 (int) ;
 int FUNC_12 (int ,int ) ;
 int FUNC_13 (int ,char*) ;
 int FUNC_14 (int ,int ,int ,char*,int ) ;
 int VAR_15 ;
 int VAR_16 ;

__attribute__((used)) static void FUNC_15(void)
{
    HWND VAR_17, VAR_18;
    TTTOOLINFOA VAR_19;
    RECT VAR_20;
    BOOL VAR_21;

    VAR_18 = FUNC_10();
    FUNC_13(VAR_18 != ((void*)0), "Failed to create parent window.\n");


    FUNC_4(VAR_18, &VAR_20);
    FUNC_7(VAR_20.right + 200, 0);

    FUNC_9(VAR_18, VAR_7);
    FUNC_11(100);


    VAR_17 = FUNC_0(VAR_14, VAR_8, ((void*)0), VAR_13, 10, 10, 300, 300,
        VAR_18, ((void*)0), ((void*)0), 0);
    FUNC_13(VAR_17 != ((void*)0), "Failed to create tooltip window.\n");

    FUNC_8(VAR_17, VAR_1, 0, 0, 0, 0, VAR_5 | VAR_6 | VAR_4);

    VAR_19.cbSize = sizeof(TTTOOLINFOA);
    VAR_19.hwnd = VAR_18;
    VAR_19.hinst = FUNC_3(((void*)0));
    VAR_19.uFlags = VAR_10;
    VAR_19.uId = 0x1234abcd;
    VAR_19.lpszText = (LPSTR)"This is a test tooltip";
    VAR_19.lParam = 0xdeadbeef;
    FUNC_2(VAR_18, &VAR_19.rect);
    VAR_21 = FUNC_6(VAR_17, VAR_11, 0, (LPARAM)&VAR_19);
    FUNC_13(VAR_21, "Failed to add a tool.\n");


    FUNC_6(VAR_17, VAR_12, VAR_9, FUNC_5(1, 0));

    FUNC_12(VAR_15, VAR_2);


    FUNC_4(VAR_18, &VAR_20);
    FUNC_7((VAR_20.left + VAR_20.right) / 2, (VAR_20.top + VAR_20.bottom) / 2);
    FUNC_11(200);

    FUNC_14(VAR_15, VAR_3, VAR_16, "TTN_SHOW parent seq", VAR_0);

    FUNC_1(VAR_17);
    FUNC_1(VAR_18);
}
