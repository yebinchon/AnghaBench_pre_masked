
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_8__ {int lpszSourceUrlName; } ;
typedef TYPE_1__ INTERNET_CACHE_ENTRY_INFOA ;
typedef int * HANDLE ;
typedef int DWORD ;
typedef int BOOL ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;
 int * FUNC_1 (int *,TYPE_1__*,int*) ;
 int FUNC_2 (int *,TYPE_1__*,int*) ;
 scalar_t__ FUNC_3 () ;
 int FUNC_4 () ;
 TYPE_1__* FUNC_5 (int ,int ,int) ;
 int FUNC_6 (int ,int ,TYPE_1__*) ;
 TYPE_1__* FUNC_7 (int ,int ,TYPE_1__*,int) ;
 int FUNC_8 (int) ;
 int VAR_2 ;
 int FUNC_9 (int,char*,...) ;
 int FUNC_10 (int ,int ) ;
 int VAR_3 ;

__attribute__((used)) static void FUNC_11(void)
{
    BOOL VAR_4;
    HANDLE VAR_5;
    BOOL VAR_6 = VAR_1;
    DWORD VAR_7;
    DWORD VAR_8;
    INTERNET_CACHE_ENTRY_INFOA *VAR_9;

    VAR_7 = 0;
    FUNC_8(0xdeadbeef);
    VAR_5 = FUNC_1(((void*)0), ((void*)0), &VAR_7);
    FUNC_9(!VAR_5, "FindFirstUrlCacheEntry should have failed\n");
    FUNC_9(FUNC_3() == VAR_0, "FindFirstUrlCacheEntry should have set last error to ERROR_INSUFFICIENT_BUFFER instead of %d\n", FUNC_3());
    VAR_9 = FUNC_5(FUNC_4(), 0, VAR_7 * sizeof(char));
    VAR_8 = VAR_7;
    VAR_5 = FUNC_1(((void*)0), VAR_9, &VAR_7);
    FUNC_9(VAR_5 != ((void*)0), "FindFirstUrlCacheEntry failed with error %d\n", FUNC_3());
    while (VAR_2)
    {
        if (!FUNC_10(VAR_9->lpszSourceUrlName, VAR_3))
        {
            VAR_6 = VAR_2;
            VAR_4 = VAR_2;
            break;
        }
        FUNC_8(0xdeadbeef);
        VAR_7 = VAR_8;
        VAR_4 = FUNC_2(VAR_5, VAR_9, &VAR_7);
        if (!VAR_4)
        {
            if (FUNC_3() == VAR_0)
            {
                VAR_9 = FUNC_7(FUNC_4(), 0, VAR_9, VAR_7);
                VAR_8 = VAR_7;
                VAR_4 = FUNC_2(VAR_5, VAR_9, &VAR_7);
            }
        }
        if (!VAR_4)
            break;
    }
    FUNC_9(VAR_4, "FindNextUrlCacheEntry failed with error %d\n", FUNC_3());
    FUNC_9(VAR_6, "Committed url cache entry not found during enumeration\n");

    VAR_4 = FUNC_0(VAR_5);
    FUNC_9(VAR_4, "FindCloseUrlCache failed with error %d\n", FUNC_3());
    FUNC_6(FUNC_4(), 0, VAR_9);
}
