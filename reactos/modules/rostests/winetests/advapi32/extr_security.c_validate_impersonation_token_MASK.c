
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int type ;
typedef int sil ;
typedef int TOKEN_TYPE ;
typedef int TOKEN_PRIMARY_GROUP ;
typedef int TOKEN_OWNER ;
typedef int TOKEN_DEFAULT_DACL ;
typedef int SECURITY_IMPERSONATION_LEVEL ;
typedef int HANDLE ;
typedef int DWORD ;
typedef int BOOL ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 () ;
 int FUNC_1 (int ,int ,int*,int,int*) ;
 int VAR_2 ;
 int FUNC_2 (int) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_3 (int,char*,...) ;

__attribute__((used)) static BOOL FUNC_4(HANDLE VAR_11, DWORD *VAR_12)
{
    DWORD VAR_13, VAR_14;
    TOKEN_TYPE VAR_15;
    SECURITY_IMPERSONATION_LEVEL VAR_16;

    VAR_15 = 0xdeadbeef;
    VAR_14 = 0;
    FUNC_2(0xdeadbeef);
    VAR_13 = FUNC_1(VAR_11, VAR_10, &VAR_15, sizeof(VAR_15), &VAR_14);
    FUNC_3(VAR_13, "GetTokenInformation error %d\n", FUNC_0());
    FUNC_3(VAR_14 == sizeof(VAR_15), "GetTokenInformation should return required buffer length\n");
    FUNC_3(VAR_15 == VAR_8 || VAR_15 == VAR_5, "expected TokenPrimary or TokenImpersonation, got %d\n", VAR_15);

    *VAR_12 = VAR_15;
    if (VAR_15 != VAR_5) return VAR_1;

    VAR_14 = 0;
    FUNC_2(0xdeadbeef);
    VAR_13 = FUNC_1(VAR_11, VAR_6, &VAR_16, sizeof(VAR_16), &VAR_14);
    FUNC_3(VAR_13, "GetTokenInformation error %d\n", FUNC_0());
    FUNC_3(VAR_14 == sizeof(VAR_16), "GetTokenInformation should return required buffer length\n");
    FUNC_3(VAR_16 == VAR_2, "expected SecurityImpersonation, got %d\n", VAR_16);

    VAR_14 = 0xdeadbeef;
    FUNC_2(0xdeadbeef);
    VAR_13 = FUNC_1(VAR_11, VAR_4, ((void*)0), 0, &VAR_14);
    FUNC_3(!VAR_13, "GetTokenInformation should fail\n");
    FUNC_3(FUNC_0() == VAR_0, "expected ERROR_INSUFFICIENT_BUFFER, got %d\n", FUNC_0());
    FUNC_3(VAR_14 != 0xdeadbeef, "GetTokenInformation should return required buffer length\n");
    FUNC_3(VAR_14 > sizeof(TOKEN_DEFAULT_DACL), "GetTokenInformation returned empty default DACL\n");

    VAR_14 = 0xdeadbeef;
    FUNC_2(0xdeadbeef);
    VAR_13 = FUNC_1(VAR_11, VAR_7, ((void*)0), 0, &VAR_14);
    FUNC_3(!VAR_13, "GetTokenInformation should fail\n");
    FUNC_3(FUNC_0() == VAR_0, "expected ERROR_INSUFFICIENT_BUFFER, got %d\n", FUNC_0());
    FUNC_3(VAR_14 != 0xdeadbeef, "GetTokenInformation should return required buffer length\n");
    FUNC_3(VAR_14 > sizeof(TOKEN_OWNER), "GetTokenInformation returned empty token owner\n");

    VAR_14 = 0xdeadbeef;
    FUNC_2(0xdeadbeef);
    VAR_13 = FUNC_1(VAR_11, VAR_9, ((void*)0), 0, &VAR_14);
    FUNC_3(!VAR_13, "GetTokenInformation should fail\n");
    FUNC_3(FUNC_0() == VAR_0, "expected ERROR_INSUFFICIENT_BUFFER, got %d\n", FUNC_0());
    FUNC_3(VAR_14 != 0xdeadbeef, "GetTokenInformation should return required buffer length\n");
    FUNC_3(VAR_14 > sizeof(TOKEN_PRIMARY_GROUP), "GetTokenInformation returned empty token primary group\n");

    return VAR_3;
}
