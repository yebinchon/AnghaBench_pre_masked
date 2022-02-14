
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ WCHAR ;
typedef scalar_t__ UNICODE_STRING ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 () ;
 int VAR_1 ;
 int FUNC_1 (int ,int,...) ;
 int FUNC_2 (scalar_t__*,...) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_3 (int) ;
 int FUNC_4 (int) ;
 scalar_t__ FUNC_5 (scalar_t__*,...) ;

void
FUNC_6(void)
{
    UNICODE_STRING VAR_5, VAR_6;
    WCHAR VAR_7[VAR_1];
    WCHAR VAR_8[VAR_1];


    FUNC_4(FUNC_1(VAR_3, VAR_1, VAR_7, 0) == 1);
    FUNC_2(&VAR_5, VAR_7);


    FUNC_4(FUNC_1(VAR_4, 0, L"", 0) == 1);
    FUNC_4(FUNC_1(VAR_3, VAR_1, VAR_8, 0) == 1);
    FUNC_4(VAR_8[0] == 0);


    FUNC_2(&VAR_6, L"");
    FUNC_4(FUNC_1(VAR_4, 0, &VAR_6, 0) == 1);
    FUNC_4(FUNC_1(VAR_3, VAR_1, VAR_8, 0) == 1);
    FUNC_4(VAR_8[0] == 0);


    FUNC_4(FUNC_1(VAR_4, 0, ((void*)0), 0) == 1);
    FUNC_4(FUNC_1(VAR_3, VAR_1, VAR_8, 0) == 1);
    FUNC_4(FUNC_5(VAR_8, VAR_7) == 0);


    FUNC_2(&VAR_6, L"test.bmp");
    FUNC_4(FUNC_1(VAR_4, 0, &VAR_6, 0) == 1);
    FUNC_4(FUNC_1(VAR_3, VAR_1, VAR_8, 0) == 1);
    FUNC_4(FUNC_5(VAR_8, L"test.bmp") == 0);


    VAR_8[0] = 0; VAR_8[1] = 0; VAR_8[2] = 0;
    FUNC_4(FUNC_1(VAR_3, 3, VAR_8, 0) == 1);
    FUNC_4(VAR_8[0] != 0);
    FUNC_4(VAR_8[1] != 0);
    FUNC_4(VAR_8[2] != 0);


    FUNC_3(0xdeadbeef);
    FUNC_2(&VAR_6, L"*#!!-&");
    FUNC_4(FUNC_1(VAR_4, 0, &VAR_6, 0) == 0);
    FUNC_4(FUNC_0() == VAR_0);
    FUNC_4(FUNC_1(VAR_3, VAR_1, VAR_8, 0) == 1);
    FUNC_4(FUNC_5(VAR_8, L"*#!!-&") == 0);


    FUNC_4(FUNC_1(VAR_4, VAR_1, &VAR_5, VAR_2) == 1);

}
