
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int zero_byte ;
typedef int FILETIME ;
typedef int BYTE ;
typedef int BOOL ;


 int FUNC_0 (char*,int *,int const,int const,int ,int *,int ,char*,int *) ;
 int FUNC_1 (char*,int ,char*,char*,int ) ;
 int FUNC_2 (char*) ;
 int FUNC_3 (char*) ;
 int FUNC_4 () ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_5 (char*) ;
 int FUNC_6 (char*,int *,int) ;
 int FUNC_7 (int,char*,...) ;

__attribute__((used)) static void FUNC_8(void)
{
    char VAR_2[VAR_0];
    BYTE VAR_3 = 0;
    BOOL VAR_4;

    static const FILETIME VAR_5;
    static char VAR_6[] = "http://testing.cache.com/";


    VAR_4 = FUNC_1(VAR_6, 0, "html", VAR_2, 0);
    FUNC_7(VAR_4, "CreateUrlCacheEntry failed with error %d\n", FUNC_4());

    FUNC_6(VAR_2, &VAR_3, sizeof(VAR_3));

    VAR_4 = FUNC_0("Visited: http://testing.cache.com/", ((void*)0), VAR_5, VAR_5,
            VAR_1, ((void*)0), 0, "html", ((void*)0));
    FUNC_7(VAR_4, "CommitUrlCacheEntry failed with error %d\n", FUNC_4());

    FUNC_7(FUNC_5("Visited: http://testing.cache.com/"), "cache entry does not exist\n");
    FUNC_7(!FUNC_5("Visited: http://testing.cache.com"), "cache entry exists\n");

    VAR_4 = FUNC_3("Visited: http://testing.cache.com/");
    FUNC_7(VAR_4, "DeleteCacheEntryA failed\n");
    FUNC_2(VAR_2);
}
