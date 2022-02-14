
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ UINT_PTR ;
typedef scalar_t__ HWND ;
typedef int HMENU ;
typedef int BOOL ;


 scalar_t__ FUNC_0 (int ,char*,int *,int ,int,int,int,int,scalar_t__,int ,int ,int *) ;
 int FUNC_1 (scalar_t__) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_2 () ;
 scalar_t__ FUNC_3 () ;
 scalar_t__ FUNC_4 () ;
 scalar_t__ FUNC_5 (scalar_t__) ;
 scalar_t__ FUNC_6 (scalar_t__,int ) ;
 int FUNC_7 (scalar_t__,scalar_t__) ;
 int FUNC_8 (scalar_t__) ;
 int FUNC_9 (scalar_t__) ;
 scalar_t__ FUNC_10 (scalar_t__,scalar_t__) ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_11 (int) ;
 int VAR_8 ;
 int FUNC_12 () ;
 int FUNC_13 (int,char*,...) ;
 int FUNC_14 (int ,char*,int ) ;
 scalar_t__ FUNC_15 (scalar_t__,int ) ;
 int VAR_9 ;
 int FUNC_16 (char*,scalar_t__,scalar_t__,scalar_t__,scalar_t__,scalar_t__) ;

__attribute__((used)) static void FUNC_17(void)
{
    BOOL VAR_10;
    HWND VAR_11, VAR_12, VAR_13, VAR_14, VAR_15, VAR_16;
    UINT_PTR VAR_17 = VAR_4 + 1;

    VAR_11 = FUNC_0(0, "TestWindowClass", ((void*)0), VAR_6,
        100, 100, 200, 200, 0, 0, 0, ((void*)0));
    FUNC_11(VAR_11 != 0);
    VAR_12 = FUNC_0(0, "TestWindowClass", ((void*)0), VAR_5,
        0, 0, 50, 50, VAR_11, (HMENU)VAR_17++, 0, ((void*)0));
    FUNC_11(VAR_12 != 0);
    VAR_13 = FUNC_0(0, "TestWindowClass", ((void*)0), VAR_5,
        0, 0, 50, 50, FUNC_3(), (HMENU)VAR_17++, 0, ((void*)0));
    FUNC_11(VAR_13 != 0);
    VAR_14 = FUNC_0(0, "TestWindowClass", ((void*)0), VAR_5,
        0, 0, 50, 50, VAR_12, (HMENU)VAR_17++, 0, ((void*)0));
    FUNC_11(VAR_14 != 0);
    VAR_15 = FUNC_0(0, "TestWindowClass", ((void*)0), VAR_7,
        0, 0, 50, 50, VAR_11, 0, 0, ((void*)0));
    FUNC_11(VAR_15 != 0);


    VAR_16 = FUNC_5(VAR_13);
    FUNC_13(VAR_16 == FUNC_3(), "wrong parent %p\n", VAR_16);
    FUNC_13(!FUNC_7(VAR_11, VAR_13), "wrong parent/child %p/%p\n", VAR_11, VAR_13);
    if(&FUNC_15) {
        VAR_16 = FUNC_15(VAR_13, VAR_1);
        FUNC_13(VAR_16 == FUNC_3(), "wrong parent %p\n", VAR_16);
    }
    VAR_16 = FUNC_6(VAR_13, VAR_2);
    FUNC_13(!VAR_16, "wrong owner %p\n", VAR_16);

    VAR_16 = FUNC_10(VAR_13, VAR_11);
    FUNC_13(VAR_16 == FUNC_3(), "wrong old parent %p\n", VAR_16);


    VAR_16 = FUNC_5(VAR_11);
    FUNC_13(!VAR_16, "wrong parent %p\n", VAR_16);
    FUNC_13(!FUNC_7(FUNC_3(), VAR_11), "wrong parent/child %p/%p\n", FUNC_3(), VAR_11);
    if(&FUNC_15) {
        VAR_16 = FUNC_15(VAR_11, VAR_1);
        FUNC_13(VAR_16 == FUNC_3(), "wrong parent %p\n", VAR_16);
    }
    VAR_16 = FUNC_6(VAR_11, VAR_2);
    FUNC_13(!VAR_16, "wrong owner %p\n", VAR_16);


    VAR_16 = FUNC_5(VAR_12);
    FUNC_13(VAR_16 == VAR_11, "wrong parent %p\n", VAR_16);
    FUNC_13(FUNC_7(VAR_11, VAR_12), "wrong parent/child %p/%p\n", VAR_11, VAR_12);
    if(&FUNC_15) {
        VAR_16 = FUNC_15(VAR_12, VAR_1);
        FUNC_13(VAR_16 == VAR_11, "wrong parent %p\n", VAR_16);
    }
    VAR_16 = FUNC_6(VAR_12, VAR_2);
    FUNC_13(!VAR_16, "wrong owner %p\n", VAR_16);


    VAR_16 = FUNC_5(VAR_13);
    FUNC_13(VAR_16 == VAR_11, "wrong parent %p\n", VAR_16);
    FUNC_13(FUNC_7(VAR_11, VAR_13), "wrong parent/child %p/%p\n", VAR_11, VAR_13);
    if(&FUNC_15) {
        VAR_16 = FUNC_15(VAR_13, VAR_1);
        FUNC_13(VAR_16 == VAR_11, "wrong parent %p\n", VAR_16);
    }
    VAR_16 = FUNC_6(VAR_13, VAR_2);
    FUNC_13(!VAR_16, "wrong owner %p\n", VAR_16);


    VAR_16 = FUNC_5(VAR_14);
    FUNC_13(VAR_16 == VAR_12, "wrong parent %p\n", VAR_16);
    FUNC_13(FUNC_7(VAR_11, VAR_14), "wrong parent/child %p/%p\n", VAR_11, VAR_14);
    if(&FUNC_15) {
        VAR_16 = FUNC_15(VAR_14, VAR_1);
        FUNC_13(VAR_16 == VAR_12, "wrong parent %p\n", VAR_16);
    }
    VAR_16 = FUNC_6(VAR_14, VAR_2);
    FUNC_13(!VAR_16, "wrong owner %p\n", VAR_16);


    VAR_16 = FUNC_5(VAR_15);
    FUNC_13(VAR_16 == VAR_11, "wrong parent %p\n", VAR_16);
    FUNC_13(!FUNC_7(VAR_11, VAR_15), "wrong parent/child %p/%p\n", VAR_11, VAR_15);
    if(&FUNC_15) {
        VAR_16 = FUNC_15(VAR_15, VAR_1);
        FUNC_13(VAR_16 == FUNC_3(), "wrong parent %p\n", VAR_16);
    }
    VAR_16 = FUNC_6(VAR_15, VAR_2);
    FUNC_13(VAR_16 == VAR_11, "wrong owner %p\n", VAR_16);

    FUNC_12();

    FUNC_16("parent %p, child1 %p, child2 %p, child3 %p, child4 %p\n",
    VAR_11, VAR_12, VAR_13, VAR_14, VAR_15);

    FUNC_9(VAR_15);
    VAR_16 = FUNC_2();
    FUNC_13(VAR_16 == VAR_15, "wrong capture window %p\n", VAR_16);

    VAR_9 = VAR_3;
    VAR_10 = FUNC_1(VAR_11);
    FUNC_13( VAR_10, "DestroyWindow() error %d\n", FUNC_4());
    VAR_9 = VAR_0;
    FUNC_14(VAR_8, "destroy window with children", VAR_0);

    FUNC_13(!FUNC_8(VAR_11), "parent still exists\n");
    FUNC_13(!FUNC_8(VAR_12), "child1 still exists\n");
    FUNC_13(!FUNC_8(VAR_13), "child2 still exists\n");
    FUNC_13(!FUNC_8(VAR_14), "child3 still exists\n");
    FUNC_13(!FUNC_8(VAR_15), "child4 still exists\n");

    VAR_16 = FUNC_2();
    FUNC_13(!VAR_16, "wrong capture window %p\n", VAR_16);
}
