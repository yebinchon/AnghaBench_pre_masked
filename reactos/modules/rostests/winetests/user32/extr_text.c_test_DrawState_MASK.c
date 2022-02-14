
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int LPARAM ;
typedef int HWND ;
typedef int HDC ;
typedef int BOOL ;


 int FUNC_0 (int ,char*,int *,int ,int ,int ,int,int,int ,int ,int ,int *) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,int ,int *,int ,int ,int ,int ,int,int,int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 () ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int ,int ) ;
 int FUNC_7 (int) ;
 int VAR_2 ;
 int FUNC_8 (int ) ;
 scalar_t__ FUNC_9 (int) ;
 int FUNC_10 (int,char*,...) ;
 int FUNC_11 (char const*) ;

__attribute__((used)) static void FUNC_12(void)
{
    static const char VAR_3[] = "Sample text string";
    HWND VAR_4;
    HDC VAR_5;
    BOOL VAR_6;

    VAR_4 = FUNC_0(0, "static", ((void*)0), VAR_2,
                           0, 0, 200, 200, 0, 0, 0, ((void*)0));
    FUNC_8(VAR_4);

    VAR_5 = FUNC_3(VAR_4);
    FUNC_8(VAR_5);

    FUNC_7(0xdeadbeef);
    VAR_6 = FUNC_2(VAR_5, FUNC_5(VAR_0), ((void*)0), (LPARAM)VAR_3, FUNC_11(VAR_3),
                    0, 0, 10, 10, VAR_1);
    FUNC_10(VAR_6, "DrawState error %u\n", FUNC_4());

    FUNC_7(0xdeadbeef);
    VAR_6 = FUNC_2(VAR_5, FUNC_5(VAR_0), ((void*)0), (LPARAM)VAR_3, 0,
                    0, 0, 10, 10, VAR_1);
    FUNC_10(VAR_6, "DrawState error %u\n", FUNC_4());

    FUNC_7(0xdeadbeef);
    VAR_6 = FUNC_2(VAR_5, FUNC_5(VAR_0), ((void*)0), 0, FUNC_11(VAR_3),
                    0, 0, 10, 10, VAR_1);
    FUNC_10(!VAR_6 || FUNC_9(VAR_6) , "DrawState succeeded\n");
    FUNC_10(FUNC_4() == 0xdeadbeef, "not expected error %u\n", FUNC_4());

    FUNC_7(0xdeadbeef);
    VAR_6 = FUNC_2(VAR_5, FUNC_5(VAR_0), ((void*)0), 0, 0,
                    0, 0, 10, 10, VAR_1);
    FUNC_10(!VAR_6 || FUNC_9(VAR_6) , "DrawState succeeded\n");
    FUNC_10(FUNC_4() == 0xdeadbeef, "not expected error %u\n", FUNC_4());

    FUNC_6(VAR_4, VAR_5);
    FUNC_1(VAR_4);
}
