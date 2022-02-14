
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int * HWND ;


 int VAR_0 ;
 int VAR_1 ;
 int * FUNC_0 (int ,int ,char*,int ,int ,int ,int ,int ,int ,int ,int ,int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *,int ,int,int ) ;
 int VAR_2 ;
 int FUNC_3 (int,char*,...) ;

void FUNC_4()
{
    HWND VAR_3;
    int VAR_4;

    VAR_3 = FUNC_0(0, VAR_2, L"Test", 0, 0, 0, 0, 0, 0, 0, 0, ((void*)0));
    FUNC_3(VAR_3 != ((void*)0), "CreateWindowEx failed\n");

    VAR_4 = FUNC_2(VAR_3, VAR_0, 0, 0);
    FUNC_3(VAR_4 == 0, "Got %d, expected 0\n", VAR_4);

    VAR_4 = FUNC_2(VAR_3, VAR_1, 6, 0);
    FUNC_3(VAR_4 == -1, "Got %d, expected -1\n", VAR_4);

    VAR_4 = FUNC_2(VAR_3, VAR_1, 7, 0);
    FUNC_3(VAR_4 == -1, "Got %d, expected -1\n", VAR_4);

    VAR_4 = FUNC_2(VAR_3, VAR_1, 5, 0);
    FUNC_3(VAR_4 == 0, "Got %d, expected -1\n", VAR_4);

    VAR_4 = FUNC_2(VAR_3, VAR_0, 0, 0);
    FUNC_3(VAR_4 == 5, "Got %d, expected 5\n", VAR_4);

    VAR_4 = FUNC_2(VAR_3, VAR_1, 4, 0);
    FUNC_3(VAR_4 == 5, "Got %d, expected -1\n", VAR_4);

    VAR_4 = FUNC_2(VAR_3, VAR_0, 0, 0);
    FUNC_3(VAR_4 == 4, "Got %d, expected 5\n", VAR_4);

    VAR_4 = FUNC_2(VAR_3, VAR_1, 3, 0);
    FUNC_3(VAR_4 == 4, "Got %d, expected -1\n", VAR_4);

    VAR_4 = FUNC_2(VAR_3, VAR_0, 0, 0);
    FUNC_3(VAR_4 == 3, "Got %d, expected 5\n", VAR_4);

    FUNC_1(VAR_3);
}
