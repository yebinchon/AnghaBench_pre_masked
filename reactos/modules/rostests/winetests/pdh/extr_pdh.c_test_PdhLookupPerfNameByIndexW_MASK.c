
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int WCHAR ;
typedef scalar_t__ PDH_STATUS ;
typedef scalar_t__ DWORD ;


 scalar_t__ FUNC_0 (int *) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ FUNC_1 (int *,int,int *,scalar_t__*) ;
 int FUNC_2 (int,char*,scalar_t__) ;
 int * VAR_5 ;
 int * VAR_6 ;

__attribute__((used)) static void FUNC_3( void )
{
    PDH_STATUS VAR_7;
    WCHAR VAR_8[VAR_3];
    DWORD VAR_9;

    VAR_7 = FUNC_1( ((void*)0), 0, ((void*)0), ((void*)0) );
    FUNC_2(VAR_7 == VAR_2, "PdhLookupPerfNameByIndexW failed 0x%08x\n", VAR_7);

    VAR_9 = 0;
    VAR_7 = FUNC_1( ((void*)0), 6, VAR_8, &VAR_9 );
    FUNC_2(VAR_7 == VAR_4 || VAR_7 == VAR_1, "PdhLookupPerfNameByIndexW failed 0x%08x\n", VAR_7);

    VAR_9 = FUNC_0(VAR_8);
    VAR_7 = FUNC_1( ((void*)0), 6, VAR_8, &VAR_9 );
    FUNC_2(VAR_7 == VAR_0, "PdhLookupPerfNameByIndexW failed 0x%08x\n", VAR_7);
    FUNC_2(VAR_9 == FUNC_0(VAR_5), "PdhLookupPerfNameByIndexW failed %d\n", VAR_9);

    VAR_9 = FUNC_0(VAR_8);
    VAR_7 = FUNC_1( ((void*)0), 674, ((void*)0), &VAR_9 );
    FUNC_2(VAR_7 == VAR_2 ||
       VAR_7 == VAR_4,
       "PdhLookupPerfNameByIndexW failed 0x%08x\n", VAR_7);

    VAR_9 = FUNC_0(VAR_8);
    VAR_7 = FUNC_1( ((void*)0), 674, VAR_8, &VAR_9 );
    FUNC_2(VAR_7 == VAR_0, "PdhLookupPerfNameByIndexW failed 0x%08x\n", VAR_7);
    FUNC_2(VAR_9 == FUNC_0(VAR_6), "PdhLookupPerfNameByIndexW failed %d\n", VAR_9);
}
