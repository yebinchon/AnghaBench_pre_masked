
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ WNDPROC ;
struct TYPE_3__ {int x; int y; } ;
typedef TYPE_1__ POINT ;
typedef int MSG ;
typedef int LONG_PTR ;
typedef int * HWND ;
typedef int HMENU ;


 int VAR_0 ;
 int * FUNC_0 (char*,char*,int ,int ,int ,int,int,int *,int *,int ,int *) ;
 int * FUNC_1 (int ,int ,char*,int,int ,int ,int,int,int *,int ,int ,int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_4 (TYPE_1__*) ;
 int FUNC_5 (int *) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ FUNC_6 (int *,int ,int ,int ,int ) ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_7 (int,int) ;
 int FUNC_8 (int *) ;
 scalar_t__ FUNC_9 (int *,int ,int ) ;
 int FUNC_10 (int *,int ,int ,int ,int ,int ,int) ;
 int FUNC_11 (int *,int ) ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 scalar_t__ VAR_14 ;
 int FUNC_12 (int ,int ) ;
 int VAR_15 ;
 int FUNC_13 (int ,char*) ;
 int FUNC_14 (int ,int ,int ,char*,int ) ;
 int VAR_16 ;
 int VAR_17 ;

__attribute__((used)) static void FUNC_15(void)
{
    HWND VAR_18, VAR_19;
    WNDPROC VAR_20;
    MSG VAR_21;
    POINT VAR_22;

    FUNC_4(&VAR_22);

    VAR_19 = FUNC_0("ParentWnd", "", VAR_12,
            0, 0, 200, 200, ((void*)0), ((void*)0), FUNC_5(((void*)0)), ((void*)0));
    FUNC_13(VAR_19 != ((void*)0), "Failed to create control parent.\n");
    FUNC_10(VAR_19, VAR_3, 0, 0, 0, 0, VAR_7|VAR_6);
    FUNC_11(VAR_19, VAR_8);

    VAR_18 = FUNC_1(0, VAR_10, "Test", VAR_11 | VAR_13, 0, 0, 100, 100,
            VAR_19, (HMENU)1, FUNC_5(((void*)0)), ((void*)0));
    FUNC_13(VAR_18 != ((void*)0), "Failed to create Edit control.\n");

    VAR_20 = (WNDPROC)FUNC_9(VAR_18, VAR_2, (LONG_PTR)VAR_14);
    FUNC_9(VAR_18, VAR_1, (LONG_PTR)VAR_20);

    FUNC_7(400, 400);

    FUNC_8(VAR_19);
    FUNC_12(VAR_16, VAR_4);
    FUNC_8(VAR_18);
    while (FUNC_6(&VAR_21, 0, 0, 0, VAR_5)) FUNC_3(&VAR_21);
    FUNC_14(VAR_16, VAR_0, VAR_17, "Set focus", VAR_9);

    FUNC_12(VAR_16, VAR_4);
    FUNC_8(VAR_19);
    while (FUNC_6(&VAR_21, 0, 0, 0, VAR_5)) FUNC_3(&VAR_21);
    FUNC_14(VAR_16, VAR_0, VAR_15, "Kill focus", VAR_9);

    FUNC_7(VAR_22.x, VAR_22.y);

    FUNC_2(VAR_18);
}
