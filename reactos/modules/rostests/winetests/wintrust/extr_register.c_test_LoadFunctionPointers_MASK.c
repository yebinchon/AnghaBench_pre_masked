
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int funcs ;
struct TYPE_3__ {int cbStruct; int * pfnFree; int * pfnAlloc; int member_0; } ;
typedef int GUID ;
typedef TYPE_1__ CRYPT_PROVIDER_FUNCTIONS ;
typedef int BOOL ;


 int VAR_0 ;
 int FUNC_0 () ;
 int FUNC_1 (int) ;
 int VAR_1 ;
 int FUNC_2 (int,char*,...) ;
 int FUNC_3 (int *,TYPE_1__*) ;
 int FUNC_4 (char*) ;

__attribute__((used)) static void FUNC_5(void)
{
    BOOL VAR_2;
    CRYPT_PROVIDER_FUNCTIONS VAR_3 = {0};
    GUID VAR_4 = VAR_1;

    if (!&FUNC_3)
    {
        FUNC_4("WintrustLoadFunctionPointers is not available\n");
        return;
    }
    FUNC_1(0xdeadbeef);
    VAR_2 = FUNC_3(((void*)0), ((void*)0));
    FUNC_2(!VAR_2 && FUNC_0() == 0xdeadbeef, "Expected failure\n");
    FUNC_1(0xdeadbeef);
    VAR_2 = FUNC_3(&VAR_4, ((void*)0));
    FUNC_2(!VAR_2 && FUNC_0() == 0xdeadbeef, "Expected failure\n");

    FUNC_1(0xdeadbeef);
    VAR_2 = FUNC_3(((void*)0), &VAR_3);
    FUNC_2(!VAR_2, "WintrustLoadFunctionPointers succeeded\n");
    FUNC_2(FUNC_0() == VAR_0 ||
        FUNC_0() == 0xdeadbeef ,
        "Expected ERROR_INVALID_PARAMETER or 0xdeadbeef, got %d\n", FUNC_0());

    FUNC_1(0xdeadbeef);
    VAR_3.cbStruct = 0;
    VAR_2 = FUNC_3(&VAR_4, &VAR_3);
    FUNC_2(!VAR_2 && FUNC_0() == 0xdeadbeef, "Expected failure\n");
    FUNC_1(0xdeadbeef);
    VAR_3.cbStruct = sizeof(VAR_3);
    VAR_2 = FUNC_3(&VAR_4, &VAR_3);
    FUNC_2(VAR_2, "WintrustLoadFunctionPointers failed: %d\n", FUNC_0());
    FUNC_2(VAR_3.pfnAlloc != ((void*)0), "Expected a pointer\n");
    FUNC_2(VAR_3.pfnFree != ((void*)0), "Expected a pointer\n");
}
