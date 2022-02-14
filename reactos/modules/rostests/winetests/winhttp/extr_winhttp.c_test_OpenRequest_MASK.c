
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int * HINTERNET ;
typedef scalar_t__ DWORD ;
typedef scalar_t__ BOOL ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ FUNC_0 () ;
 int VAR_5 ;
 int FUNC_1 (int) ;
 scalar_t__ VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 scalar_t__ VAR_13 ;
 scalar_t__ FUNC_2 (int *) ;
 int * FUNC_3 (int *,int *,int ,int ) ;
 int * FUNC_4 (int ,int ,int ,int ,int ) ;
 int * FUNC_5 (int *,int *,int *,int *,int ,int ,int ) ;
 scalar_t__ FUNC_6 (int *,int ,int ,int *,int ,int ,int ) ;
 scalar_t__ FUNC_7 (int) ;
 int FUNC_8 (int,char*,...) ;
 int FUNC_9 (char*) ;
 int VAR_14 ;
 int * VAR_15 ;

__attribute__((used)) static void FUNC_10 (void)
{
    BOOL VAR_16;
    HINTERNET VAR_17, VAR_18, VAR_19;
    DWORD VAR_20;

    FUNC_1(0xdeadbeef);
    VAR_17 = FUNC_4(VAR_14, VAR_7,
        VAR_11, VAR_10, 0);
    VAR_20 = FUNC_0();
    FUNC_8(VAR_17 != ((void*)0), "WinHttpOpen failed to open session.\n");
    FUNC_8(VAR_20 == VAR_1, "got %u\n", VAR_20);


    FUNC_1(0xdeadbeef);
    VAR_19 = FUNC_3(VAR_17, ((void*)0), VAR_5, 0);
    VAR_20 = FUNC_0();
    FUNC_8 (VAR_19 == ((void*)0), "WinHttpConnect succeeded in opening connection to NULL server argument.\n");
    FUNC_8(VAR_20 == VAR_0, "Expected ERROR_INVALID_PARAMETER, got %u.\n", VAR_20);


    FUNC_1(0xdeadbeef);
    VAR_19 = FUNC_3 (VAR_17, VAR_15, VAR_5, 0);
    VAR_20 = FUNC_0();
    FUNC_8(VAR_19 != ((void*)0), "WinHttpConnect failed to open a connection, error: %u.\n", VAR_20);
    FUNC_8(VAR_20 == VAR_1 || FUNC_7(VAR_20 == VAR_13) , "got %u\n", VAR_20);

    FUNC_1(0xdeadbeef);
    VAR_18 = FUNC_5(VAR_19, ((void*)0), ((void*)0), ((void*)0), VAR_12,
        VAR_8, 0);
    VAR_20 = FUNC_0();
    if (VAR_18 == ((void*)0) && VAR_20 == VAR_3)
    {
        FUNC_9("Network unreachable, skipping.\n");
        goto done;
    }
    FUNC_8(VAR_18 != ((void*)0), "WinHttpOpenrequest failed to open a request, error: %u.\n", VAR_20);
    FUNC_8(VAR_20 == VAR_1, "got %u\n", VAR_20);

    FUNC_1(0xdeadbeef);
    VAR_16 = FUNC_6(VAR_18, VAR_9, 0, ((void*)0), 0, 0, 0);
    VAR_20 = FUNC_0();
    if (!VAR_16 && (VAR_20 == VAR_2 || VAR_20 == VAR_4))
    {
        FUNC_9("Connection failed, skipping.\n");
        goto done;
    }
    FUNC_8(VAR_16, "WinHttpSendRequest failed: %u\n", VAR_20);
    FUNC_8(VAR_20 == VAR_1, "got %u\n", VAR_20);

    FUNC_1(0xdeadbeef);
    VAR_16 = FUNC_2(VAR_18);
    VAR_20 = FUNC_0();
    FUNC_8(VAR_16, "WinHttpCloseHandle failed on closing request, got %u.\n", VAR_20);
    FUNC_8(VAR_20 == VAR_1, "got %u\n", VAR_20);

 done:
    VAR_16 = FUNC_2(VAR_19);
    FUNC_8(VAR_16 == VAR_6, "WinHttpCloseHandle failed on closing connection, got %d.\n", VAR_16);
    VAR_16 = FUNC_2(VAR_17);
    FUNC_8(VAR_16 == VAR_6, "WinHttpCloseHandle failed on closing session, got %d.\n", VAR_16);

}
