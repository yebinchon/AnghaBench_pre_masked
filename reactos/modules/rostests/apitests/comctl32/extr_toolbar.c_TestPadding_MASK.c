
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int LRESULT ;
typedef int * HWND ;


 int * FUNC_0 (int ,int ,char*,int ,int ,int ,int ,int ,int ,int ,int ,int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *,int ,int ,int) ;
 int FUNC_3 (int *,char*,int *) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_4 (int,char*,...) ;

void FUNC_5()
{
    HWND VAR_6;
    LRESULT VAR_7;

    VAR_6 = FUNC_0(0, VAR_5, L"Test", 0, 0, 0, 0, 0, 0, 0, 0, ((void*)0));
    FUNC_4(VAR_6 != ((void*)0), "CreateWindowEx failed\n");

    VAR_7 = FUNC_2(VAR_6, VAR_1, 0, 0);
    FUNC_4(VAR_7 == 0x60007, "Expected 0x60007 got %lx\n", VAR_7);

    FUNC_2(VAR_6, VAR_4, 0, 0x10001);
    FUNC_2(VAR_6, VAR_2, 0, 0x10001);
    FUNC_2(VAR_6, VAR_3, 0, 0x10001);

    VAR_7 = FUNC_2(VAR_6, VAR_1, 0, 0);
    FUNC_4(VAR_7 == 0x10001, "Expected 0x10001 got %lx\n", VAR_7);

    VAR_7 = FUNC_2(VAR_6, VAR_0, 0, 0);
    FUNC_4(VAR_7 == 0x20002, "Expected 0x20002 got %lx\n", VAR_7);
    FUNC_1(VAR_6);
}
