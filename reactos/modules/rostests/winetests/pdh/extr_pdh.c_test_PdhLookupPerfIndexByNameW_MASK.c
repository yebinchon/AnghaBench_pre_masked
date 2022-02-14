
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef char WCHAR ;
typedef int PDH_STATUS ;
typedef int DWORD ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *,char const*,int*) ;
 int FUNC_1 (int,char*,int) ;
 char const* VAR_3 ;
 char const* VAR_4 ;

__attribute__((used)) static void FUNC_2( void )
{
    PDH_STATUS VAR_5;
    DWORD VAR_6;

    static const WCHAR VAR_7[] = {'N','o',' ','C','o','u','n','t','e','r',0};

    VAR_5 = FUNC_0( ((void*)0), ((void*)0), ((void*)0) );
    FUNC_1(VAR_5 == VAR_1, "PdhLookupPerfIndexByNameW failed 0x%08x\n", VAR_5);

    VAR_5 = FUNC_0( ((void*)0), ((void*)0), &VAR_6 );
    FUNC_1(VAR_5 == VAR_1, "PdhLookupPerfIndexByNameW failed 0x%08x\n", VAR_5);

    VAR_5 = FUNC_0( ((void*)0), VAR_7, &VAR_6 );
    FUNC_1(VAR_5 == VAR_2, "PdhLookupPerfIndexByNameW failed 0x%08x\n", VAR_5);

    VAR_5 = FUNC_0( ((void*)0), VAR_3, ((void*)0) );
    FUNC_1(VAR_5 == VAR_1, "PdhLookupPerfIndexByNameW failed 0x%08x\n", VAR_5);

    VAR_5 = FUNC_0( ((void*)0), VAR_3, &VAR_6 );
    FUNC_1(VAR_5 == VAR_0, "PdhLookupPerfIndexByNameW failed 0x%08x\n", VAR_5);
    FUNC_1(VAR_6 == 6, "PdhLookupPerfIndexByNameW failed %d\n", VAR_6);

    VAR_5 = FUNC_0( ((void*)0), VAR_4, &VAR_6 );
    FUNC_1(VAR_5 == VAR_0, "PdhLookupPerfIndexByNameW failed 0x%08x\n", VAR_5);
    FUNC_1(VAR_6 == 674, "PdhLookupPerfIndexByNameW failed %d\n", VAR_6);
}
