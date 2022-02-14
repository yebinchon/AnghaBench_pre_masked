
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int LRESULT ;
typedef int * HWND ;


 int * FUNC_0 (int ,int ,char*,int ,int ,int ,int ,int ,int ,int ,int ,int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (int *,int ,int ,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_4 (int,char*,...) ;

void FUNC_5()
{
    HWND VAR_3;
    LRESULT VAR_4;

    VAR_3 = FUNC_0(0, VAR_2, L"Test", 0, 0, 0, 0, 0, 0, 0, 0, ((void*)0));
    FUNC_4(VAR_3 != ((void*)0), "CreateWindowEx failed\n");

    VAR_4 = FUNC_3(VAR_3, VAR_0, 0, 0);
    FUNC_4(VAR_4 == 0x160017, "Expected 0x160017 got %lx\n", VAR_4);

    FUNC_3(VAR_3, VAR_1, 0, FUNC_2(0, 0));
    VAR_4 = FUNC_3(VAR_3, VAR_0, 0, 0);
    FUNC_4(VAR_4 == 0x160018, "Expected 0x160018 got %lx\n", VAR_4);

    FUNC_3(VAR_3, VAR_1, 0, 0x10001);
    VAR_4 = FUNC_3(VAR_3, VAR_0, 0, 0);
    FUNC_4(VAR_4 == 0x160017, "Expected 0x160017 got %lx\n", VAR_4);

    FUNC_3(VAR_3, VAR_1, 0, 0x100001);
    VAR_4 = FUNC_3(VAR_3, VAR_0, 0, 0);
    FUNC_4(VAR_4 == 0x160017, "Expected 0x160017 got %lx\n", VAR_4);

    FUNC_3(VAR_3, VAR_1, 0, 0x160017);
    VAR_4 = FUNC_3(VAR_3, VAR_0, 0, 0);
    FUNC_4(VAR_4 == 0x160017, "Expected 0x160017 got %lx\n", VAR_4);

    FUNC_3(VAR_3, VAR_1, 0, 0x170017);
    VAR_4 = FUNC_3(VAR_3, VAR_0, 0, 0);
    FUNC_4(VAR_4 == 0x170017, "Expected 0x170017 got %lx\n", VAR_4);

    FUNC_1(VAR_3);
}
