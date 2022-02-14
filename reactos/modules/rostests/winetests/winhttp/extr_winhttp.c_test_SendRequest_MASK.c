
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int test_post ;
typedef int post_data ;
typedef int disable ;
typedef int context ;
typedef int buffer ;
typedef char WCHAR ;
typedef int * HINTERNET ;
typedef int DWORD_PTR ;
typedef scalar_t__ DWORD ;
typedef char CHAR ;
typedef int BOOL ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 int FUNC_0 () ;
 int VAR_6 ;
 int FUNC_1 (int) ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 scalar_t__ VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int FUNC_2 (int *) ;
 int * FUNC_3 (int *,int ,int ,int ) ;
 int * FUNC_4 (int ,int ,int ,int ,int ) ;
 int * FUNC_5 (int *,char const*,char const*,int *,int ,int ,int ) ;
 int FUNC_6 (int *,int ,int*,scalar_t__*) ;
 int FUNC_7 (int *,char*,int,scalar_t__*) ;
 int FUNC_8 (int *,int *) ;
 int FUNC_9 (int *,char const*,scalar_t__,char*,scalar_t__,scalar_t__,int) ;
 int FUNC_10 (int *,int ,...) ;
 int FUNC_11 (int *,char*,int,scalar_t__*) ;
 scalar_t__ FUNC_12 (int) ;
 int FUNC_13 (char*,char const*,int) ;
 int FUNC_14 (char*,int,int) ;
 int FUNC_15 (int,char*,...) ;
 int FUNC_16 (char*) ;
 int VAR_17 ;
 int VAR_18 ;

__attribute__((used)) static void FUNC_17 (void)
{
    static const WCHAR VAR_19[] =
        {'C','o','n','t','e','n','t','-','T','y','p','e',':',' ','a','p','p','l','i','c','a','t','i','o','n',
         '/','x','-','w','w','w','-','f','o','r','m','-','u','r','l','e','n','c','o','d','e','d',0};
    static const WCHAR VAR_20[] = {'t','e','s','t','s','/','p','o','s','t','.','p','h','p',0};
    static const WCHAR VAR_21[] = {'P','O','S','T',0};
    static CHAR VAR_22[] = "mode=Test";
    static const char VAR_23[] = "mode => Test\0\n";
    HINTERNET VAR_24, VAR_25, VAR_26;
    DWORD VAR_27, VAR_28, VAR_29, VAR_30, VAR_31, VAR_32, VAR_33;
    DWORD_PTR VAR_34;
    BOOL VAR_35;
    CHAR VAR_36[256];
    int VAR_37;

    VAR_27 = -1L;
    VAR_29 = VAR_28 = sizeof(VAR_22);
    FUNC_14(VAR_36, 0xff, sizeof(VAR_36));

    VAR_24 = FUNC_4(VAR_17, VAR_8,
        VAR_13, VAR_12, 0);
    FUNC_15(VAR_24 != ((void*)0), "WinHttpOpen failed to open session.\n");

    VAR_26 = FUNC_3 (VAR_24, VAR_18, VAR_6, 0);
    FUNC_15(VAR_26 != ((void*)0), "WinHttpConnect failed to open a connection, error: %u.\n", FUNC_0());

    VAR_25 = FUNC_5(VAR_26, VAR_21, VAR_20, ((void*)0), VAR_14,
        VAR_9, VAR_11);
    if (VAR_25 == ((void*)0) && FUNC_0() == VAR_4)
    {
        FUNC_16("Network unreachable, skipping.\n");
        goto done;
    }
    FUNC_15(VAR_25 != ((void*)0), "WinHttpOpenrequest failed to open a request, error: %u.\n", FUNC_0());
    if (!VAR_25) goto done;

    VAR_34 = 0xdeadbeef;
    VAR_35 = FUNC_10(VAR_25, VAR_15, &VAR_34, sizeof(VAR_34));
    FUNC_15(VAR_35, "WinHttpSetOption failed: %u\n", FUNC_0());



    VAR_33 = VAR_10;
    VAR_35 = FUNC_10(VAR_25, VAR_16, &VAR_33, sizeof(VAR_33));
    FUNC_15(VAR_35, "WinHttpSetOption failed: %u\n", FUNC_0());

    VAR_34++;
    VAR_35 = FUNC_9(VAR_25, VAR_19, VAR_27, VAR_22, VAR_28, VAR_29, VAR_34);
    VAR_32 = FUNC_0();
    if (!VAR_35 && (VAR_32 == VAR_3 || VAR_32 == VAR_5))
    {
        FUNC_16("connection failed, skipping\n");
        goto done;
    }
    FUNC_15(VAR_35 == VAR_7, "WinHttpSendRequest failed: %u\n", FUNC_0());

    VAR_34 = 0;
    VAR_31 = sizeof(VAR_34);
    VAR_35 = FUNC_6(VAR_25, VAR_15, &VAR_34, &VAR_31);
    FUNC_15(VAR_35, "WinHttpQueryOption failed: %u\n", FUNC_0());
    FUNC_15(VAR_34 == 0xdeadbef0, "expected 0xdeadbef0, got %lx\n", VAR_34);

    for (VAR_37 = 3; VAR_22[VAR_37]; VAR_37++)
    {
        VAR_30 = -1;
        FUNC_1(0xdeadbeef);
        VAR_35 = FUNC_11(VAR_25, &VAR_22[VAR_37], 1, &VAR_30);
        if (VAR_35)
        {
          FUNC_15(FUNC_0() == VAR_2, "Expected ERROR_SUCCESS got %u.\n", FUNC_0());
          FUNC_15(VAR_30 == 1, "WinHttpWriteData failed, wrote %u bytes instead of 1 byte.\n", VAR_30);
        }
        else
        {
          FUNC_15(FUNC_0() == VAR_0, "Expected ERROR_INVALID_PARAMETER got %u.\n", FUNC_0());
          FUNC_15(VAR_30 == -1, "Expected bytes_rw to remain unchanged.\n");
        }
    }

    FUNC_1(0xdeadbeef);
    VAR_35 = FUNC_8(VAR_25, ((void*)0));
    FUNC_15(FUNC_0() == VAR_2 || FUNC_12(FUNC_0() == VAR_1) ,
       "Expected ERROR_SUCCESS got %u.\n", FUNC_0());
    FUNC_15(VAR_35 == VAR_7, "WinHttpReceiveResponse failed: %u.\n", FUNC_0());

    VAR_30 = -1;
    VAR_35 = FUNC_7(VAR_25, VAR_36, sizeof(VAR_36) - 1, &VAR_30);
    FUNC_15(VAR_35 == VAR_7, "WinHttpReadData failed: %u.\n", FUNC_0());

    FUNC_15(VAR_30 == sizeof(VAR_23) - 1, "Read %u bytes\n", VAR_30);
    FUNC_15(!FUNC_13(VAR_36, VAR_23, sizeof(VAR_23) - 1), "Data read did not match.\n");

 done:
    VAR_35 = FUNC_2(VAR_25);
    FUNC_15(VAR_35 == VAR_7, "WinHttpCloseHandle failed on closing request, got %d.\n", VAR_35);
    VAR_35 = FUNC_2(VAR_26);
    FUNC_15(VAR_35 == VAR_7, "WinHttpCloseHandle failed on closing connection, got %d.\n", VAR_35);
    VAR_35 = FUNC_2(VAR_24);
    FUNC_15(VAR_35 == VAR_7, "WinHttpCloseHandle failed on closing session, got %d.\n", VAR_35);
}
