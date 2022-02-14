
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int WCHAR ;
typedef int ULONG ;
typedef int BOOL ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 () ;
 int FUNC_1 () ;
 int * FUNC_2 (int ,int ,int) ;
 int FUNC_3 (int ,int ,int *) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_4 (int) ;
 int FUNC_5 (int,int) ;
 int FUNC_6 (int *,int,int) ;
 int FUNC_7 (int,char*,...) ;
 int FUNC_8 (int,int*,int *,int*) ;
 int FUNC_9 (char*) ;
 int FUNC_10 (char*) ;

__attribute__((used)) static void FUNC_11(void)
{
    BOOL VAR_6;
    ULONG VAR_7, VAR_8, VAR_9, VAR_10, VAR_11;
    WCHAR *VAR_12;


    if (!&FUNC_8)
    {
        FUNC_10("GetUserPreferredUILanguages is not available.\n");
        return;
    }

    VAR_7 = 0xdeadbeef;
    VAR_8 = 0;
    FUNC_4(0xdeadbeef);
    VAR_6 = FUNC_8(VAR_2, &VAR_7, ((void*)0), &VAR_8);
    FUNC_7(!VAR_6, "Expected GetUserPreferredUILanguages to fail\n");
    FUNC_7(VAR_1 == FUNC_0(),
       "Expected error ERROR_INVALID_PARAMETER, got %d\n", FUNC_0());

    VAR_7 = 0xdeadbeef;
    VAR_8 = 0;
    FUNC_4(0xdeadbeef);
    VAR_6 = FUNC_8(VAR_3 | VAR_2, &VAR_7, ((void*)0), &VAR_8);
    FUNC_7(!VAR_6, "Expected GetUserPreferredUILanguages to fail\n");
    FUNC_7(VAR_1 == FUNC_0(),
       "Expected error ERROR_INVALID_PARAMETER, got %d\n", FUNC_0());

    VAR_7 = 0xdeadbeef;
    VAR_8 = 0;
    FUNC_4(0xdeadbeef);
    VAR_6 = FUNC_8(VAR_3 | VAR_5, &VAR_7, ((void*)0), &VAR_8);
    FUNC_7(!VAR_6, "Expected GetUserPreferredUILanguages to fail\n");
    FUNC_7(VAR_1 == FUNC_0(),
       "Expected error ERROR_INVALID_PARAMETER, got %d\n", FUNC_0());

    VAR_7 = 0xdeadbeef;
    VAR_8 = 1;
    FUNC_4(0xdeadbeef);
    VAR_6 = FUNC_8(VAR_3, &VAR_7, ((void*)0), &VAR_8);
    FUNC_7(!VAR_6, "Expected GetUserPreferredUILanguages to fail\n");
    FUNC_7(VAR_1 == FUNC_0(),
       "Expected error ERROR_INVALID_PARAMETER, got %d\n", FUNC_0());

    VAR_7 = 0xdeadbeef;
    VAR_9 = 0;
    FUNC_4(0xdeadbeef);
    VAR_6 = FUNC_8(VAR_3, &VAR_7, ((void*)0), &VAR_9);
    FUNC_7(VAR_6, "Expected GetUserPreferredUILanguages to succeed\n");
    FUNC_7(VAR_7, "Expected count > 0\n");
    FUNC_7(VAR_9 % 5 == 1, "Expected size (%d) %% 5 == 1\n", VAR_9);

    VAR_7 = 0xdeadbeef;
    VAR_10 = 0;
    FUNC_4(0xdeadbeef);
    VAR_6 = FUNC_8(VAR_4, &VAR_7, ((void*)0), &VAR_10);
    FUNC_7(VAR_6, "Expected GetUserPreferredUILanguages to succeed\n");
    FUNC_7(VAR_7, "Expected count > 0\n");
    FUNC_7(VAR_10 % 6 == 1, "Expected size (%d) %% 6 == 1\n", VAR_10);

    VAR_11 = FUNC_5(VAR_9, VAR_10);
    if(!VAR_11)
    {
        FUNC_9("No valid buffer size\n");
        return;
    }

    VAR_12 = FUNC_2(FUNC_1(), 0, VAR_11 * sizeof(WCHAR));

    VAR_7 = 0xdeadbeef;
    VAR_8 = VAR_11;
    FUNC_6(VAR_12, 0x5a, VAR_11 * sizeof(WCHAR));
    FUNC_4(0xdeadbeef);
    VAR_6 = FUNC_8(0, &VAR_7, VAR_12, &VAR_8);
    FUNC_7(VAR_6, "Expected GetUserPreferredUILanguages to succeed\n");
    FUNC_7(VAR_7, "Expected count > 0\n");
    FUNC_7(VAR_8 % 6 == 1, "Expected size (%d) %% 6 == 1\n", VAR_8);
    if (VAR_6 && VAR_8 % 6 == 1)
        FUNC_7(!VAR_12[VAR_8 -2] && !VAR_12[VAR_8 -1],
           "Expected last two WCHARs being empty, got 0x%x 0x%x\n",
           VAR_12[VAR_8 -2], VAR_12[VAR_8 -1]);

    VAR_7 = 0xdeadbeef;
    VAR_8 = VAR_11;
    FUNC_6(VAR_12, 0x5a, VAR_11 * sizeof(WCHAR));
    FUNC_4(0xdeadbeef);
    VAR_6 = FUNC_8(VAR_3, &VAR_7, VAR_12, &VAR_8);
    FUNC_7(VAR_6, "Expected GetUserPreferredUILanguages to succeed\n");
    FUNC_7(VAR_7, "Expected count > 0\n");
    FUNC_7(VAR_8 % 5 == 1, "Expected size (%d) %% 5 == 1\n", VAR_8);
    if (VAR_6 && VAR_8 % 5 == 1)
        FUNC_7(!VAR_12[VAR_8 -2] && !VAR_12[VAR_8 -1],
           "Expected last two WCHARs being empty, got 0x%x 0x%x\n",
           VAR_12[VAR_8 -2], VAR_12[VAR_8 -1]);

    VAR_7 = 0xdeadbeef;
    VAR_8 = VAR_11;
    FUNC_4(0xdeadbeef);
    VAR_6 = FUNC_8(VAR_4, &VAR_7, VAR_12, &VAR_8);
    FUNC_7(VAR_6, "Expected GetUserPreferredUILanguages to succeed\n");
    FUNC_7(VAR_7, "Expected count > 0\n");
    FUNC_7(VAR_8 % 6 == 1, "Expected size (%d) %% 6 == 1\n", VAR_8);
    if (VAR_6 && VAR_8 % 5 == 1)
        FUNC_7(!VAR_12[VAR_8 -2] && !VAR_12[VAR_8 -1],
           "Expected last two WCHARs being empty, got 0x%x 0x%x\n",
           VAR_12[VAR_8 -2], VAR_12[VAR_8 -1]);

    VAR_7 = 0xdeadbeef;
    VAR_8 = 1;
    FUNC_4(0xdeadbeef);
    VAR_6 = FUNC_8(VAR_3, &VAR_7, VAR_12, &VAR_8);
    FUNC_7(!VAR_6, "Expected GetUserPreferredUILanguages to fail\n");
    FUNC_7(VAR_0 == FUNC_0(),
       "Expected error ERROR_INSUFFICIENT_BUFFER, got %d\n", FUNC_0());

    VAR_7 = 0xdeadbeef;
    VAR_8 = VAR_9 -1;
    FUNC_6(VAR_12, 0x5a, VAR_11 * sizeof(WCHAR));
    FUNC_4(0xdeadbeef);
    VAR_6 = FUNC_8(VAR_3, &VAR_7, VAR_12, &VAR_8);
    FUNC_7(!VAR_6, "Expected GetUserPreferredUILanguages to fail\n");
    FUNC_7(VAR_0 == FUNC_0(),
       "Expected error ERROR_INSUFFICIENT_BUFFER, got %d\n", FUNC_0());

    VAR_7 = 0xdeadbeef;
    VAR_8 = VAR_9 -2;
    FUNC_6(VAR_12, 0x5a, VAR_11 * sizeof(WCHAR));
    FUNC_4(0xdeadbeef);
    VAR_6 = FUNC_8(0, &VAR_7, VAR_12, &VAR_8);
    FUNC_7(!VAR_6, "Expected GetUserPreferredUILanguages to fail\n");
    FUNC_7(VAR_0 == FUNC_0(),
       "Expected error ERROR_INSUFFICIENT_BUFFER, got %d\n", FUNC_0());

    FUNC_3(FUNC_1(), 0, VAR_12);
}
