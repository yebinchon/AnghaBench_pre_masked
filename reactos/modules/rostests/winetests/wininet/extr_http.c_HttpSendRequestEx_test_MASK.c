
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int szPostData ;
typedef int szContentType ;
struct TYPE_3__ {int dwStructSize; char const* lpcszHeader; int dwHeadersLength; int dwHeadersTotal; char* lpvBuffer; int dwBufferLength; int dwBufferTotal; scalar_t__ dwOffsetHigh; scalar_t__ dwOffsetLow; struct TYPE_3__* Next; } ;
typedef TYPE_1__ INTERNET_BUFFERSA ;
typedef int * HINTERNET ;
typedef scalar_t__ DWORD ;
typedef scalar_t__ CHAR ;
typedef int BufferIn ;
typedef int BOOL ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_0 () ;
 int FUNC_1 (int *,int *,int ,int ) ;
 int * FUNC_2 (int *,char*,char*,int *,int *,int *,int ,int ) ;
 int FUNC_3 (int *,TYPE_1__*,int *,int ,int ) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_4 (int *) ;
 int * FUNC_5 (int *,char*,int ,int *,int *,int ,int ,int ) ;
 int * FUNC_6 (char*,int ,int *,int *,int ) ;
 int FUNC_7 (int *,scalar_t__*,int,scalar_t__*) ;
 int FUNC_8 (int *,char*,int,scalar_t__*) ;
 int FUNC_9 (int) ;
 scalar_t__ FUNC_10 (int ) ;
 int FUNC_11 (int,char*,...) ;
 int FUNC_12 () ;
 int FUNC_13 (char*) ;
 scalar_t__ FUNC_14 (scalar_t__*,char*,scalar_t__) ;
 int FUNC_15 (int *,int ) ;

__attribute__((used)) static void FUNC_16(void)
{
    HINTERNET VAR_7;
    HINTERNET VAR_8;
    HINTERNET VAR_9;

    INTERNET_BUFFERSA VAR_10;
    DWORD VAR_11, VAR_12, VAR_13;
    CHAR VAR_14[256];
    int VAR_15;
    BOOL VAR_16;

    static char VAR_17[] = "mode=Test";
    static const char VAR_18[] = "Content-Type: application/x-www-form-urlencoded";

    VAR_7 = FUNC_6("Wine Regression Test",
            VAR_4,((void*)0),((void*)0),0);
    FUNC_11( VAR_7 != ((void*)0) ,"Unable to open Internet session\n");
    VAR_8 = FUNC_5(VAR_7, "test.winehq.org",
            VAR_2, ((void*)0), ((void*)0), VAR_6, 0,
            0);
    FUNC_11( VAR_8 != ((void*)0), "Unable to connect to http://test.winehq.org\n");
    VAR_9 = FUNC_2(VAR_8, "POST", "/tests/post.php",
            ((void*)0), ((void*)0), ((void*)0), VAR_3, 0);
    if (!VAR_9 && FUNC_0() == VAR_0)
    {
        FUNC_13( "Network unreachable, skipping test\n" );
        goto done;
    }
    FUNC_11( VAR_9 != ((void*)0), "Failed to open request handle err %u\n", FUNC_0());

    FUNC_15(VAR_9, VAR_5);

    VAR_10.dwStructSize = sizeof(VAR_10);
    VAR_10.Next = (INTERNET_BUFFERSA*)0xdeadcab;
    VAR_10.lpcszHeader = VAR_18;
    VAR_10.dwHeadersLength = sizeof(VAR_18)-1;
    VAR_10.dwHeadersTotal = sizeof(VAR_18)-1;
    VAR_10.lpvBuffer = VAR_17;
    VAR_10.dwBufferLength = 3;
    VAR_10.dwBufferTotal = sizeof(VAR_17)-1;
    VAR_10.dwOffsetLow = 0;
    VAR_10.dwOffsetHigh = 0;

    FUNC_9(0xdeadbeef);
    VAR_16 = FUNC_3(VAR_9, &VAR_10, ((void*)0), 0 ,0);
    VAR_13 = FUNC_0();
    FUNC_11(VAR_16, "HttpSendRequestEx Failed with error %u\n", VAR_13);
    FUNC_11(VAR_13 == VAR_1, "expected ERROR_SUCCESS, got %u\n", VAR_13);

    FUNC_15(VAR_9, VAR_5);

    for (VAR_15 = 3; VAR_17[VAR_15]; VAR_15++)
        FUNC_11(FUNC_8(VAR_9, &VAR_17[VAR_15], 1, &VAR_11),
                "InternetWriteFile failed\n");

    FUNC_15(VAR_9, VAR_5);

    FUNC_11(FUNC_1(VAR_9, ((void*)0), 0, 0), "HttpEndRequest Failed\n");

    FUNC_15(VAR_9, 0);

    FUNC_11(FUNC_7(VAR_9, VAR_14, 255, &VAR_12),
            "Unable to read response\n");
    VAR_14[VAR_12] = 0;

    FUNC_11(VAR_12 == 13,"Read %u bytes instead of 13\n",VAR_12);
    FUNC_11(FUNC_14(VAR_14,"mode => Test\n",VAR_12)==0 || FUNC_10(FUNC_12()),"Got string %s\n",VAR_14);

    FUNC_11(FUNC_4(VAR_9), "Close request handle failed\n");
done:
    FUNC_11(FUNC_4(VAR_8), "Close connect handle failed\n");
    FUNC_11(FUNC_4(VAR_7), "Close session handle failed\n");
}
