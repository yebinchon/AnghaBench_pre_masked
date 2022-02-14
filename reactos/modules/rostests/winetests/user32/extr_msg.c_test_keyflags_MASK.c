
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int SHORT ;
typedef int MSG ;
typedef int HWND ;
typedef int BYTE ;


 int FUNC_0 (int ,char*,int *,int,int,int,int,int,int ,int ,int ,int *) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int *) ;
 int VAR_0 ;
 int FUNC_3 (int) ;
 int FUNC_4 (int) ;
 int FUNC_5 (int*) ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_6 (int *,int *,int ,int ,int ) ;
 int FUNC_7 (int*) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int FUNC_8 () ;
 int FUNC_9 () ;
 int FUNC_10 (int,int ,int ,int ) ;
 int FUNC_11 (int,char*,int) ;
 int FUNC_12 (int ,char*,int ) ;

__attribute__((used)) static void FUNC_13(void)
{
    HWND VAR_12;
    SHORT VAR_13;
    BYTE VAR_14[256];
    MSG VAR_15;

    VAR_12 = FUNC_0(0, "TestWindowClass", ((void*)0), VAR_6 | VAR_7,
                           100, 100, 200, 200, 0, 0, 0, ((void*)0));

    FUNC_8();
    FUNC_9();


    FUNC_10(0x41, 0, VAR_1, 0);
    while (FUNC_6(&VAR_15, ((void*)0), VAR_4, VAR_5, VAR_2))
        FUNC_2(&VAR_15);
    FUNC_12(VAR_11, "key release only", VAR_3);

    VAR_13 = FUNC_3(0x41);
    FUNC_11((VAR_13 & 0x8000) == 0, "unexpected key state %x\n", VAR_13);

    VAR_13 = FUNC_4(0x41);
    FUNC_11((VAR_13 & 0x8000) == 0, "unexpected key state %x\n", VAR_13);


    FUNC_10(0x41, 0, 0, 0);
    while (FUNC_6(&VAR_15, ((void*)0), VAR_4, VAR_5, VAR_2))
        FUNC_2(&VAR_15);
    FUNC_12(VAR_8, "key press only", VAR_0);

    VAR_13 = FUNC_3(0x41);
    FUNC_11((VAR_13 & 0x8000) == 0x8000, "unexpected key state %x\n", VAR_13);

    VAR_13 = FUNC_4(0x41);
    FUNC_11((VAR_13 & 0x8000) == 0x8000, "unexpected key state %x\n", VAR_13);


    FUNC_10(0x41, 0, 0, 0);
    while (FUNC_6(&VAR_15, ((void*)0), VAR_4, VAR_5, VAR_2))
        FUNC_2(&VAR_15);
    FUNC_12(VAR_9, "key press repeat", VAR_0);

    VAR_13 = FUNC_3(0x41);
    FUNC_11((VAR_13 & 0x8000) == 0x8000, "unexpected key state %x\n", VAR_13);

    VAR_13 = FUNC_4(0x41);
    FUNC_11((VAR_13 & 0x8000) == 0x8000, "unexpected key state %x\n", VAR_13);


    FUNC_10(0x41, 0, VAR_1, 0);
    while (FUNC_6(&VAR_15, ((void*)0), VAR_4, VAR_5, VAR_2))
        FUNC_2(&VAR_15);
    FUNC_12(VAR_10, "key release repeat", VAR_0);

    VAR_13 = FUNC_3(0x41);
    FUNC_11((VAR_13 & 0x8000) == 0, "unexpected key state %x\n", VAR_13);

    VAR_13 = FUNC_4(0x41);
    FUNC_11((VAR_13 & 0x8000) == 0, "unexpected key state %x\n", VAR_13);


    FUNC_5(VAR_14);
    VAR_14[0x41] = 0x80;
    FUNC_7(VAR_14);

    VAR_13 = FUNC_3(0x41);
    FUNC_11((VAR_13 & 0x8000) == 0, "unexpected key state %x\n", VAR_13);


    FUNC_10(0x41, 0, 0, 0);
    while (FUNC_6(&VAR_15, ((void*)0), VAR_4, VAR_5, VAR_2))
        FUNC_2(&VAR_15);
    FUNC_12(VAR_9, "key press after setkeyboardstate", VAR_3);

    VAR_13 = FUNC_3(0x41);
    FUNC_11((VAR_13 & 0x8000) == 0x8000, "unexpected key state %x\n", VAR_13);

    VAR_13 = FUNC_4(0x41);
    FUNC_11((VAR_13 & 0x8000) == 0x8000, "unexpected key state %x\n", VAR_13);


    FUNC_5(VAR_14);
    VAR_14[0x41] = 0;
    FUNC_7(VAR_14);

    VAR_13 = FUNC_3(0x41);
    FUNC_11((VAR_13 & 0x8000) == 0x8000, "unexpected key state %x\n", VAR_13);


    FUNC_10(0x41, 0, VAR_1, 0);
    while (FUNC_6(&VAR_15, ((void*)0), VAR_4, VAR_5, VAR_2))
        FUNC_2(&VAR_15);
    FUNC_12(VAR_11, "key release after setkeyboardstate", VAR_3);

    VAR_13 = FUNC_3(0x41);
    FUNC_11((VAR_13 & 0x8000) == 0, "unexpected key state %x\n", VAR_13);

    VAR_13 = FUNC_4(0x41);
    FUNC_11((VAR_13 & 0x8000) == 0, "unexpected key state %x\n", VAR_13);

    FUNC_1(VAR_12);
    FUNC_9();
}
