
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int cbSize; int dwGroupId; } ;
typedef TYPE_1__* PCCRYPT_OID_INFO ;
typedef int LPCWSTR ;
typedef int CRYPT_OID_INFO ;
typedef int BOOL ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 () ;
 int FUNC_1 (int) ;
 int FUNC_2 (int,char*,...) ;
 int FUNC_3 (int,TYPE_1__***) ;
 int FUNC_4 (char*) ;

__attribute__((used)) static void FUNC_5(void)
{
    BOOL VAR_2;
    PCCRYPT_OID_INFO *VAR_3;

    if (!&FUNC_3)
    {
        FUNC_4("missing WTHelperGetKnownUsages\n");
        return;
    }
    FUNC_1(0xdeadbeef);
    VAR_2 = FUNC_3(0, ((void*)0));
    FUNC_2(!VAR_2 && FUNC_0() == VAR_1,
     "expected ERROR_INVALID_PARAMETER, got %d\n", FUNC_0());
    FUNC_1(0xdeadbeef);
    VAR_2 = FUNC_3(1, ((void*)0));
    FUNC_2(!VAR_2 && FUNC_0() == VAR_1,
     "expected ERROR_INVALID_PARAMETER, got %d\n", FUNC_0());
    FUNC_1(0xdeadbeef);
    VAR_2 = FUNC_3(0, &VAR_3);
    FUNC_2(!VAR_2 && FUNC_0() == VAR_1,
     "expected ERROR_INVALID_PARAMETER, got %d\n", FUNC_0());



    FUNC_1(0xdeadbeef);
    VAR_3 = ((void*)0);
    VAR_2 = FUNC_3(1, &VAR_3);
    FUNC_2(VAR_2, "WTHelperGetKnownUsages failed: %d\n", FUNC_0());
    FUNC_2(VAR_3 != ((void*)0), "expected a pointer\n");
    if (VAR_2 && VAR_3)
    {
        PCCRYPT_OID_INFO *VAR_4;




        for (VAR_4 = VAR_3; *VAR_4; VAR_4++)
        {
            FUNC_2((*VAR_4)->cbSize == sizeof(CRYPT_OID_INFO) ||
             (*VAR_4)->cbSize == (sizeof(CRYPT_OID_INFO) + 2 * sizeof(LPCWSTR)),
             "unexpected size %d\n", (*VAR_4)->cbSize);

            FUNC_2((*VAR_4)->dwGroupId == VAR_0,
             "expected group CRYPT_ENHKEY_USAGE_OID_GROUP_ID, got %d\n",
             (*VAR_4)->dwGroupId);
        }
    }


    FUNC_1(0xdeadbeef);
    VAR_2 = FUNC_3(2, &VAR_3);
    FUNC_2(VAR_2, "WTHelperGetKnownUsages failed: %d\n", FUNC_0());
    FUNC_2(VAR_3 == ((void*)0), "expected pointer to be cleared\n");
    FUNC_1(0xdeadbeef);
    VAR_3 = ((void*)0);
    VAR_2 = FUNC_3(2, &VAR_3);
    FUNC_2(VAR_2, "WTHelperGetKnownUsages failed: %d\n", FUNC_0());
    FUNC_1(0xdeadbeef);
    VAR_2 = FUNC_3(2, ((void*)0));
    FUNC_2(!VAR_2 && FUNC_0() == VAR_1,
     "expected ERROR_INVALID_PARAMETER, got %d\n", FUNC_0());
}
