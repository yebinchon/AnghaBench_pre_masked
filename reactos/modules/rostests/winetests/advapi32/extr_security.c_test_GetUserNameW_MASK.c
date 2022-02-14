
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int filler ;
typedef int WCHAR ;
typedef int DWORD ;
typedef int BOOL ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 () ;
 int FUNC_1 (int *,int*) ;
 int FUNC_2 (int) ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_3 (int) ;
 scalar_t__ FUNC_4 (int *,int *,int) ;
 int FUNC_5 (int *,int *,int) ;
 int FUNC_6 (int *,char,int) ;
 int FUNC_7 (int,char*,...) ;

__attribute__((used)) static void FUNC_8(void)
{
    WCHAR VAR_4[VAR_3 + 1], VAR_5[VAR_3 + 1];
    DWORD VAR_6, VAR_7;
    BOOL VAR_8;


    if (0)
    {
        FUNC_2(0xdeadbeef);
        FUNC_1(((void*)0), ((void*)0));
    }

    FUNC_2(0xdeadbeef);
    VAR_6 = 0;
    VAR_8 = FUNC_1(((void*)0), &VAR_6);
    FUNC_7(VAR_8 == VAR_1, "GetUserNameW returned %d\n", VAR_8);
    FUNC_7(VAR_6 != 0, "Outputted buffer length was %u\n", VAR_6);
    FUNC_7(FUNC_0() == VAR_0, "Last error was %u\n", FUNC_0());

    FUNC_2(0xdeadbeef);
    VAR_6 = 1;
    VAR_8 = FUNC_1(((void*)0), &VAR_6);
    FUNC_7(VAR_8 == VAR_1, "GetUserNameW returned %d\n", VAR_8);
    FUNC_7(VAR_6 != 0 && VAR_6 != 1, "Outputted buffer length was %u\n", VAR_6);
    FUNC_7(FUNC_0() == VAR_0, "Last error was %u\n", FUNC_0());


    if (0)
    {
        FUNC_2(0xdeadbeef);
        VAR_6 = VAR_3 + 1;
        FUNC_1(((void*)0), &VAR_6);

        FUNC_2(0xdeadbeef);
        FUNC_1(VAR_4, ((void*)0));
    }

    FUNC_6(VAR_5, 'x', sizeof(VAR_5));

    FUNC_2(0xdeadbeef);
    FUNC_5(VAR_4, VAR_5, sizeof(VAR_5));
    VAR_6 = 0;
    VAR_8 = FUNC_1(VAR_4, &VAR_6);
    FUNC_7(VAR_8 == VAR_1, "GetUserNameW returned %d\n", VAR_8);
    FUNC_7(!FUNC_4(VAR_4, VAR_5, sizeof(VAR_5)), "Output buffer was altered\n");
    FUNC_7(VAR_6 != 0, "Outputted buffer length was %u\n", VAR_6);
    FUNC_7(FUNC_0() == VAR_0, "Last error was %u\n", FUNC_0());

    FUNC_2(0xdeadbeef);
    FUNC_5(VAR_4, VAR_5, sizeof(VAR_5));
    VAR_7 = VAR_6;
    VAR_8 = FUNC_1(VAR_4, &VAR_7);
    FUNC_7(VAR_8 == VAR_2, "GetUserNameW returned %d, last error %u\n", VAR_8, FUNC_0());
    FUNC_7(FUNC_4(VAR_4, VAR_5, sizeof(VAR_5)) != 0, "Output buffer was untouched\n");
    FUNC_7(VAR_7 == VAR_6, "Outputted buffer length was %u\n", VAR_7);


    FUNC_2(0xdeadbeef);
    FUNC_5(VAR_4, VAR_5, sizeof(VAR_5));
    VAR_7--;
    VAR_8 = FUNC_1(VAR_4, &VAR_7);
    FUNC_7(VAR_8 == VAR_1, "GetUserNameW returned %d\n", VAR_8);
    FUNC_7(!FUNC_4(VAR_4, VAR_5, sizeof(VAR_5)) ||
       FUNC_3(FUNC_4(VAR_4, VAR_5, sizeof(VAR_5)) != 0),
       "Output buffer was altered\n");
    FUNC_7(VAR_7 == VAR_6, "Outputted buffer length was %u\n", VAR_7);
    FUNC_7(FUNC_0() == VAR_0, "Last error was %u\n", FUNC_0());
}
