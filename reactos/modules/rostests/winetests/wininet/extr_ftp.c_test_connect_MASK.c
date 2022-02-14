
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int * HINTERNET ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ FUNC_0 () ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_1 (int *) ;
 int * FUNC_2 (int *,char*,int ,char*,char*,int ,int ,int ) ;
 int FUNC_3 (int) ;
 int FUNC_4 (int,char*,...) ;

__attribute__((used)) static void FUNC_5(HINTERNET VAR_6)
{
    HINTERNET VAR_7;
    FUNC_3(0xdeadbeef);
    VAR_7 = FUNC_2(VAR_6, "ftp.winehq.org", VAR_3, "anonymous", ((void*)0), VAR_5, VAR_4, 0);
    if (VAR_7)
    {
        FUNC_4 ( FUNC_0() == VAR_2, "ERROR_SUCCESS, got %d\n", FUNC_0());
        FUNC_1(VAR_7);
    }
    else
        FUNC_4 ( FUNC_0() == VAR_0,
             "Expected ERROR_INTERNET_LOGIN_FAILURE, got %d\n", FUNC_0());

    FUNC_3(0xdeadbeef);
    VAR_7 = FUNC_2(VAR_6, "ftp.winehq.org", VAR_3, ((void*)0), "IEUser@", VAR_5, VAR_4, 0);
    FUNC_4 ( VAR_7 == ((void*)0), "Expected InternetConnect to fail\n");
    FUNC_4 ( FUNC_0() == VAR_1,
        "Expected ERROR_INVALID_PARAMETER, got %d\n", FUNC_0());

    FUNC_3(0xdeadbeef);
    VAR_7 = FUNC_2(VAR_6, "ftp.winehq.org", VAR_3, "", "IEUser@",
            VAR_5, VAR_4, 0);
    FUNC_4(!VAR_7, "Expected InternetConnect to fail\n");
    FUNC_4(FUNC_0() == VAR_1,
        "Expected ERROR_INVALID_PARAMETER, got %d\n", FUNC_0());
    FUNC_3(0xdeadbeef);
    VAR_7 = FUNC_2(VAR_6, "ftp.winehq.org", VAR_3, ((void*)0), ((void*)0), VAR_5, VAR_4, 0);
    if (!VAR_7 && (FUNC_0() == VAR_0))
    {

        FUNC_3(0xdeadbeef);
        VAR_7 = FUNC_2(VAR_6, "ftp.winehq.org", VAR_3, "anonymous", "IEUser@", VAR_5, VAR_4, 0);
    }
    FUNC_4 ( VAR_7 != ((void*)0), "InternetConnect failed : %d\n", FUNC_0());
    FUNC_4 ( FUNC_0() == VAR_2,
        "ERROR_SUCCESS, got %d\n", FUNC_0());
    FUNC_1(VAR_7);

    FUNC_3(0xdeadbeef);
    VAR_7 = FUNC_2(VAR_6, "ftp.winehq.org", VAR_3, "", ((void*)0),
            VAR_5, VAR_4, 0);
    if (!VAR_7)
    {
        FUNC_4(FUNC_0() == VAR_0,
                "Expected ERROR_INTERNET_LOGIN_FAILURE, got %d\n", FUNC_0());
    }
    else
    {
        FUNC_4(FUNC_0() == VAR_2,
                "Expected ERROR_SUCCESS, got %d\n", FUNC_0());
        FUNC_1(VAR_7);
    }
}
