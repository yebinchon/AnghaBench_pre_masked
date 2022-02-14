
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int feature ;
typedef int * HINTERNET ;
typedef int DWORD ;
typedef int BOOL ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 () ;
 int VAR_5 ;
 int FUNC_1 (int) ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int FUNC_2 (int *) ;
 int * FUNC_3 (int *,int ,int ,int ) ;
 int * FUNC_4 (int ,int ,int ,int ,int ) ;
 int * FUNC_5 (int *,int *,int *,int *,int ,int ,int ) ;
 int FUNC_6 (int *,int ,int*,int*) ;
 int FUNC_7 (int *,int ,int*,int) ;
 scalar_t__ FUNC_8 (int) ;
 int FUNC_9 (int,char*,...) ;
 int FUNC_10 (char*) ;
 int VAR_13 ;
 int VAR_14 ;

__attribute__((used)) static void FUNC_11(void)
{
    BOOL VAR_15;
    HINTERNET VAR_16, VAR_17, VAR_18;
    DWORD VAR_19, VAR_20;

    FUNC_1(0xdeadbeef);
    VAR_16 = FUNC_4(VAR_13, 0, 0, 0, 0);
    FUNC_9(VAR_16 != ((void*)0), "WinHttpOpen failed to open session, error %u\n", FUNC_0());

    FUNC_1(0xdeadbeef);
    VAR_15 = FUNC_6(VAR_16, VAR_10, ((void*)0), ((void*)0));
    FUNC_9(!VAR_15, "should fail to set redirect policy %u\n", FUNC_0());
    FUNC_9(FUNC_0() == VAR_1,
       "expected ERROR_INVALID_PARAMETER, got %u\n", FUNC_0());

    VAR_20 = 0xdeadbeef;
    FUNC_1(0xdeadbeef);
    VAR_15 = FUNC_6(VAR_16, VAR_10, ((void*)0), &VAR_20);
    FUNC_9(!VAR_15, "should fail to query option\n");
    FUNC_9(FUNC_0() == VAR_0,
       "expected ERROR_INSUFFICIENT_BUFFER, got %u\n", FUNC_0());
    FUNC_9(VAR_20 == 4, "expected 4, got %u\n", VAR_20);

    VAR_19 = 0xdeadbeef;
    VAR_20 = sizeof(VAR_19) - 1;
    FUNC_1(0xdeadbeef);
    VAR_15 = FUNC_6(VAR_16, VAR_10, &VAR_19, &VAR_20);
    FUNC_9(!VAR_15, "should fail to query option\n");
    FUNC_9(FUNC_0() == VAR_0,
       "expected ERROR_INSUFFICIENT_BUFFER, got %u\n", FUNC_0());
    FUNC_9(VAR_20 == 4, "expected 4, got %u\n", VAR_20);

    VAR_19 = 0xdeadbeef;
    VAR_20 = sizeof(VAR_19) + 1;
    FUNC_1(0xdeadbeef);
    VAR_15 = FUNC_6(VAR_16, VAR_10, &VAR_19, &VAR_20);
    FUNC_9(VAR_15, "failed to query option %u\n", FUNC_0());
    FUNC_9(FUNC_0() == VAR_2 || FUNC_8(FUNC_0() == 0xdeadbeef) ,
       "got %u\n", FUNC_0());
    FUNC_9(VAR_20 == sizeof(VAR_19), "WinHttpQueryOption should set the size: %u\n", VAR_20);
    FUNC_9(VAR_19 == VAR_12,
       "expected WINHTTP_OPTION_REDIRECT_POLICY_DISALLOW_HTTPS_TO_HTTP, got %#x\n", VAR_19);

    FUNC_1(0xdeadbeef);
    VAR_15 = FUNC_7(VAR_16, VAR_10, ((void*)0), sizeof(VAR_19));
    FUNC_9(!VAR_15, "should fail to set redirect policy %u\n", FUNC_0());
    FUNC_9(FUNC_0() == VAR_1,
       "expected ERROR_INVALID_PARAMETER, got %u\n", FUNC_0());

    VAR_19 = VAR_11;
    FUNC_1(0xdeadbeef);
    VAR_15 = FUNC_7(VAR_16, VAR_10, &VAR_19, sizeof(VAR_19) - 1);
    FUNC_9(!VAR_15, "should fail to set redirect policy %u\n", FUNC_0());
    FUNC_9(FUNC_0() == VAR_0,
       "expected ERROR_INSUFFICIENT_BUFFER, got %u\n", FUNC_0());

    VAR_19 = VAR_11;
    FUNC_1(0xdeadbeef);
    VAR_15 = FUNC_7(VAR_16, VAR_10, &VAR_19, sizeof(VAR_19) + 1);
    FUNC_9(!VAR_15, "should fail to set redirect policy %u\n", FUNC_0());
    FUNC_9(FUNC_0() == VAR_0,
       "expected ERROR_INSUFFICIENT_BUFFER, got %u\n", FUNC_0());

    VAR_19 = VAR_11;
    FUNC_1(0xdeadbeef);
    VAR_15 = FUNC_7(VAR_16, VAR_10, &VAR_19, sizeof(VAR_19));
    FUNC_9(VAR_15, "failed to set redirect policy %u\n", FUNC_0());

    VAR_19 = 0xdeadbeef;
    VAR_20 = sizeof(VAR_19);
    FUNC_1(0xdeadbeef);
    VAR_15 = FUNC_6(VAR_16, VAR_10, &VAR_19, &VAR_20);
    FUNC_9(VAR_15, "failed to query option %u\n", FUNC_0());
    FUNC_9(VAR_19 == VAR_11,
       "expected WINHTTP_OPTION_REDIRECT_POLICY_ALWAYS, got %#x\n", VAR_19);

    VAR_19 = VAR_7;
    FUNC_1(0xdeadbeef);
    VAR_15 = FUNC_7(VAR_16, VAR_9, &VAR_19, sizeof(VAR_19));
    FUNC_9(!VAR_15, "should fail to set disable feature for a session\n");
    FUNC_9(FUNC_0() == VAR_3,
       "expected ERROR_WINHTTP_INCORRECT_HANDLE_TYPE, got %u\n", FUNC_0());

    FUNC_1(0xdeadbeef);
    VAR_18 = FUNC_3(VAR_16, VAR_14, VAR_5, 0);
    FUNC_9(VAR_18 != ((void*)0), "WinHttpConnect failed to open a connection, error: %u\n", FUNC_0());

    VAR_19 = VAR_7;
    FUNC_1(0xdeadbeef);
    VAR_15 = FUNC_7(VAR_18, VAR_9, &VAR_19, sizeof(VAR_19));
    FUNC_9(!VAR_15, "should fail to set disable feature for a connection\n");
    FUNC_9(FUNC_0() == VAR_3,
       "expected ERROR_WINHTTP_INCORRECT_HANDLE_TYPE, got %u\n", FUNC_0());

    FUNC_1(0xdeadbeef);
    VAR_17 = FUNC_5(VAR_18, ((void*)0), ((void*)0), ((void*)0), VAR_8,
                                 VAR_6, 0);
    if (VAR_17 == ((void*)0) && FUNC_0() == VAR_4)
    {
        FUNC_10("Network unreachable, skipping the test\n");
        goto done;
    }

    VAR_19 = 0xdeadbeef;
    VAR_20 = sizeof(VAR_19);
    FUNC_1(0xdeadbeef);
    VAR_15 = FUNC_6(VAR_17, VAR_9, &VAR_19, &VAR_20);
    FUNC_9(!VAR_15, "should fail to query disable feature for a request\n");
    FUNC_9(FUNC_0() == VAR_1,
       "expected ERROR_INVALID_PARAMETER, got %u\n", FUNC_0());

    VAR_19 = 0;
    VAR_20 = sizeof(VAR_19);
    FUNC_1(0xdeadbeef);
    VAR_15 = FUNC_7(VAR_17, VAR_9, &VAR_19, sizeof(VAR_19));
    FUNC_9(VAR_15, "failed to set feature %u\n", FUNC_0());

    VAR_19 = 0xffffffff;
    VAR_20 = sizeof(VAR_19);
    FUNC_1(0xdeadbeef);
    VAR_15 = FUNC_7(VAR_17, VAR_9, &VAR_19, sizeof(VAR_19));
    FUNC_9(VAR_15, "failed to set feature %u\n", FUNC_0());

    VAR_19 = VAR_7;
    VAR_20 = sizeof(VAR_19);
    FUNC_1(0xdeadbeef);
    VAR_15 = FUNC_7(VAR_17, VAR_9, &VAR_19, sizeof(VAR_19));
    FUNC_9(VAR_15, "failed to set feature %u\n", FUNC_0());

    VAR_20 = 0;
    FUNC_1(0xdeadbeef);
    VAR_15 = FUNC_6(VAR_17, VAR_9, ((void*)0), &VAR_20);
    FUNC_9(!VAR_15, "should fail to query disable feature for a request\n");
    FUNC_9(FUNC_0() == VAR_1,
       "expected ERROR_INVALID_PARAMETER, got %u\n", FUNC_0());

    FUNC_1(0xdeadbeef);
    VAR_15 = FUNC_2(VAR_17);
    FUNC_9(VAR_15, "WinHttpCloseHandle failed on closing request: %u\n", FUNC_0());

done:
    FUNC_1(0xdeadbeef);
    VAR_15 = FUNC_2(VAR_18);
    FUNC_9(VAR_15, "WinHttpCloseHandle failed on closing connection: %u\n", FUNC_0());
    FUNC_1(0xdeadbeef);
    VAR_15 = FUNC_2(VAR_16);
    FUNC_9(VAR_15, "WinHttpCloseHandle failed on closing session: %u\n", FUNC_0());
}
