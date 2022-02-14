
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int DWORD ;
typedef scalar_t__ BOOL ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 () ;
 scalar_t__ FUNC_1 (int *,int *,int*,int ) ;
 int FUNC_2 (int) ;
 int FUNC_3 (int,char*,...) ;
 int * VAR_1 ;

__attribute__((used)) static void FUNC_4(void)
{
    BOOL VAR_2;
    DWORD VAR_3;

    VAR_3 = 0;
    FUNC_2(0xdeadbeef);
    VAR_2 = FUNC_1(((void*)0), ((void*)0), &VAR_3, 0);
    FUNC_3(!VAR_2, "RetrieveUrlCacheEntryFile should have failed\n");
    FUNC_3(FUNC_0() == VAR_0, "RetrieveUrlCacheEntryFile should have set last error to ERROR_INVALID_PARAMETER instead of %d\n", FUNC_0());

    if (0)
    {

        FUNC_2(0xdeadbeef);
        VAR_2 = FUNC_1(VAR_1, ((void*)0), ((void*)0), 0);
        FUNC_3(!VAR_2, "RetrieveUrlCacheEntryFile should have failed\n");
        FUNC_3(FUNC_0() == VAR_0, "RetrieveUrlCacheEntryFile should have set last error to ERROR_INVALID_PARAMETER instead of %d\n", FUNC_0());
    }

    FUNC_2(0xdeadbeef);
    VAR_3 = 100000;
    VAR_2 = FUNC_1(((void*)0), ((void*)0), &VAR_3, 0);
    FUNC_3(!VAR_2, "RetrieveUrlCacheEntryFile should have failed\n");
    FUNC_3(FUNC_0() == VAR_0, "RetrieveUrlCacheEntryFile should have set last error to ERROR_INVALID_PARAMETER instead of %d\n", FUNC_0());
}
