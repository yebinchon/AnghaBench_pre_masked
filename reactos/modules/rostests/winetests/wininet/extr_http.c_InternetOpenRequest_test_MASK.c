
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef char WCHAR ;
typedef int * HINTERNET ;
typedef int BOOL ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_0 () ;
 int * FUNC_1 (int *,int *,char*,int *,int *,char const**,int ,int ) ;
 int * FUNC_2 (int *,int *,char const*,int *,int *,char const**,int ,int ) ;
 int FUNC_3 (int *,int *,int ,int *,int ) ;
 int FUNC_4 (int *,int *,int ,int *,int ) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_5 (int *) ;
 int * FUNC_6 (int *,char*,int ,int *,int *,int ,int ,int ) ;
 int * FUNC_7 (char*,int ,int *,int *,int ) ;
 int FUNC_8 (int,char*,...) ;
 int FUNC_9 (char*) ;

__attribute__((used)) static void FUNC_10(void)
{
    HINTERNET VAR_6, VAR_7, VAR_8;
    static const char *VAR_9[] = { "*", "", ((void*)0) };
    static const WCHAR VAR_10[] = {'/', 0}, VAR_11[] = {'*', 0}, VAR_12[] = {0};
    static const WCHAR *VAR_13[] = { VAR_11, VAR_12, ((void*)0) };
    BOOL VAR_14;

    VAR_6 = FUNC_7("Wine Regression Test", VAR_4, ((void*)0), ((void*)0), 0);
    FUNC_8(VAR_6 != ((void*)0) ,"Unable to open Internet session\n");

    VAR_7 = FUNC_6(VAR_6, ((void*)0), VAR_2, ((void*)0), ((void*)0),
                              VAR_5, 0, 0);
    FUNC_8(VAR_7 == ((void*)0), "InternetConnectA should have failed\n");
    FUNC_8(FUNC_0() == VAR_1, "InternetConnectA with NULL server named should have failed with ERROR_INVALID_PARAMETER instead of %d\n", FUNC_0());

    VAR_7 = FUNC_6(VAR_6, "", VAR_2, ((void*)0), ((void*)0),
                              VAR_5, 0, 0);
    FUNC_8(VAR_7 == ((void*)0), "InternetConnectA should have failed\n");
    FUNC_8(FUNC_0() == VAR_1, "InternetConnectA with blank server named should have failed with ERROR_INVALID_PARAMETER instead of %d\n", FUNC_0());

    VAR_7 = FUNC_6(VAR_6, "test.winehq.org", VAR_2, ((void*)0), ((void*)0),
                              VAR_5, 0, 0);
    FUNC_8(VAR_7 != ((void*)0), "Unable to connect to http://test.winehq.org with error %d\n", FUNC_0());

    VAR_8 = FUNC_1(VAR_7, ((void*)0), "/", ((void*)0), ((void*)0), VAR_9, VAR_3, 0);
    if (!VAR_8 && FUNC_0() == VAR_0)
    {
        FUNC_9( "Network unreachable, skipping test\n" );
        goto done;
    }
    FUNC_8(VAR_8 != ((void*)0), "Failed to open request handle err %u\n", FUNC_0());

    VAR_14 = FUNC_4(VAR_8, ((void*)0), 0, ((void*)0), 0);
    FUNC_8(VAR_14, "HttpSendRequest failed: %u\n", FUNC_0());
    FUNC_8(FUNC_5(VAR_8), "Close request handle failed\n");

    VAR_8 = FUNC_2(VAR_7, ((void*)0), VAR_10, ((void*)0), ((void*)0), VAR_13, VAR_3, 0);
    FUNC_8(VAR_8 != ((void*)0), "Failed to open request handle err %u\n", FUNC_0());

    VAR_14 = FUNC_3(VAR_8, ((void*)0), 0, ((void*)0), 0);
    FUNC_8(VAR_14, "HttpSendRequest failed: %u\n", FUNC_0());
    FUNC_8(FUNC_5(VAR_8), "Close request handle failed\n");

done:
    FUNC_8(FUNC_5(VAR_7), "Close connect handle failed\n");
    FUNC_8(FUNC_5(VAR_6), "Close session handle failed\n");
}
