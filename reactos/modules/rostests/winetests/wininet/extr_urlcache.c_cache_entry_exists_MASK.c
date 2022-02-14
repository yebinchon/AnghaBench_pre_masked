
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int buf ;
typedef int DWORD ;
typedef scalar_t__ BOOL ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 () ;
 scalar_t__ FUNC_1 (char const*,void*,int*) ;
 int FUNC_2 (int,char*,scalar_t__,scalar_t__) ;

__attribute__((used)) static BOOL FUNC_3(const char *VAR_1)
{
    static char VAR_2[10000];
    DWORD VAR_3 = sizeof(VAR_2);
    BOOL VAR_4;

    VAR_4 = FUNC_1(VAR_1, (void*)VAR_2, &VAR_3);
    FUNC_2(VAR_4 || FUNC_0() == VAR_0, "GetUrlCacheEntryInfoA returned %x (%u)\n", VAR_4, FUNC_0());

    return VAR_4;
}
