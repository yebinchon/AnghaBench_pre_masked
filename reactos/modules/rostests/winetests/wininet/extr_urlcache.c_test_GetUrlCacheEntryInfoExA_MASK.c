
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {int CacheEntryType; } ;
typedef TYPE_1__ INTERNET_CACHE_ENTRY_INFOA ;
typedef int DWORD ;
typedef int BOOL ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 () ;
 int FUNC_1 () ;
 int FUNC_2 (char*,TYPE_1__*,int*,int *,int*,int *,int) ;
 int FUNC_3 (int ,int *,int *,int *,int *,int *,int) ;
 TYPE_1__* FUNC_4 (int ,int ,int) ;
 int FUNC_5 (int ,int ,TYPE_1__*) ;
 int FUNC_6 (int) ;
 int FUNC_7 (char*,TYPE_1__*,int ) ;
 scalar_t__ FUNC_8 (int) ;
 int FUNC_9 (char*,TYPE_1__*) ;
 int VAR_4 ;
 int FUNC_10 (int,char*,...) ;
 scalar_t__ VAR_5 ;
 char* VAR_6 ;
 int VAR_7 ;

__attribute__((used)) static void FUNC_11(void)
{
    BOOL VAR_8;
    DWORD VAR_9, VAR_10;
    INTERNET_CACHE_ENTRY_INFOA *VAR_11;

    FUNC_6(0xdeadbeef);
    VAR_8 = FUNC_2(((void*)0), ((void*)0), ((void*)0), ((void*)0), ((void*)0), ((void*)0), 0);
    FUNC_10(!VAR_8, "GetUrlCacheEntryInfoEx with NULL URL and NULL args should have failed\n");
    FUNC_10(FUNC_0() == VAR_3,
       "GetUrlCacheEntryInfoEx with NULL URL and NULL args should have set last error to ERROR_INVALID_PARAMETER instead of %d\n", FUNC_0());

    VAR_9 = sizeof(INTERNET_CACHE_ENTRY_INFOA);
    FUNC_6(0xdeadbeef);
    VAR_8 = FUNC_2("", ((void*)0), &VAR_9, ((void*)0), ((void*)0), ((void*)0), 0);
    FUNC_10(!VAR_8, "GetUrlCacheEntryInfoEx with zero-length buffer should fail\n");
    FUNC_10(FUNC_0() == VAR_1,
       "GetUrlCacheEntryInfoEx should have set last error to ERROR_FILE_NOT_FOUND instead of %d\n", FUNC_0());

    VAR_8 = FUNC_2(VAR_6, ((void*)0), ((void*)0), ((void*)0), ((void*)0), ((void*)0), 0);
    FUNC_10(VAR_8, "GetUrlCacheEntryInfoEx with NULL args failed with error %d\n", FUNC_0());

    VAR_9 = 0;
    FUNC_6(0xdeadbeef);
    VAR_8 = FUNC_2(VAR_6, ((void*)0), &VAR_9, ((void*)0), ((void*)0), ((void*)0), 0);
    FUNC_10(!VAR_8, "GetUrlCacheEntryInfoEx with zero-length buffer should fail\n");
    FUNC_10(FUNC_0() == VAR_2,
       "GetUrlCacheEntryInfoEx should have set last error to ERROR_INSUFFICIENT_BUFFER instead of %d\n", FUNC_0());

    VAR_11 = FUNC_4(FUNC_1(), 0, VAR_9);

    FUNC_6(0xdeadbeef);
    VAR_8 = FUNC_2(VAR_6, ((void*)0), ((void*)0), ((void*)0), ((void*)0), ((void*)0), 0x200 );
    FUNC_10(VAR_8 == VAR_4, "GetUrlCacheEntryInfoEx returned %x\n", VAR_8);
    if (!VAR_8) FUNC_10(FUNC_0() == VAR_1,
            "GetUrlCacheEntryInfoEx should have set last error to ERROR_FILE_NOT_FOUND instead of %d\n", FUNC_0());


    VAR_8 = FUNC_3(VAR_7, ((void*)0), ((void*)0), ((void*)0), ((void*)0), ((void*)0), 0x200 );
    FUNC_10(VAR_8 || FUNC_8(VAR_5 && !VAR_8), "GetUrlCacheEntryInfoExW failed with error %d\n", FUNC_0());

    VAR_8 = FUNC_2(VAR_6, VAR_11, &VAR_9, ((void*)0), ((void*)0), ((void*)0), 0);
    FUNC_10(VAR_8, "GetUrlCacheEntryInfoEx failed with error %d\n", FUNC_0());

    if (VAR_8) FUNC_9("GetUrlCacheEntryInfoEx", VAR_11);

    VAR_11->CacheEntryType |= 0x10000000;
    VAR_8 = FUNC_7(VAR_6, VAR_11, VAR_0);
    FUNC_10(VAR_8, "SetUrlCacheEntryInfoA failed with error %d\n", FUNC_0());

    FUNC_6(0xdeadbeef);
    VAR_8 = FUNC_2(VAR_6, ((void*)0), ((void*)0), ((void*)0), ((void*)0), ((void*)0), 0x200 );
    FUNC_10(VAR_8, "GetUrlCacheEntryInfoEx failed with error %d\n", FUNC_0());

    VAR_9 = 100000;
    FUNC_6(0xdeadbeef);
    VAR_8 = FUNC_2(VAR_6, ((void*)0), &VAR_9, ((void*)0), ((void*)0), ((void*)0), 0);
    FUNC_10(!VAR_8, "GetUrlCacheEntryInfoEx with zero-length buffer should fail\n");
    FUNC_10(FUNC_0() == VAR_2, "GetUrlCacheEntryInfoEx should have set last error to ERROR_INSUFFICIENT_BUFFER instead of %d\n", FUNC_0());

    FUNC_5(FUNC_1(), 0, VAR_11);


    FUNC_6(0xdeadbeef);
    VAR_8 = FUNC_2(VAR_6, ((void*)0), ((void*)0), ((void*)0), &VAR_10, ((void*)0), 0);
    FUNC_10(!VAR_8, "GetUrlCacheEntryInfoEx should have failed\n");
    FUNC_10(FUNC_0() == VAR_3,
       "expected ERROR_INVALID_PARAMETER, got %d\n", FUNC_0());
    FUNC_6(0xdeadbeef);
    VAR_8 = FUNC_2(VAR_6, ((void*)0), &VAR_9, ((void*)0), &VAR_10, ((void*)0), 0);
    FUNC_10(!VAR_8, "GetUrlCacheEntryInfoEx should have failed\n");
    FUNC_10(FUNC_0() == VAR_3,
       "expected ERROR_INVALID_PARAMETER, got %d\n", FUNC_0());
}
