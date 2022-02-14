
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int PDH_STATUS ;
typedef int DWORD ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *,char*,int*) ;
 int FUNC_1 (int,char*,int) ;

__attribute__((used)) static void FUNC_2( void )
{
    PDH_STATUS VAR_3;
    DWORD VAR_4;

    VAR_3 = FUNC_0( ((void*)0), ((void*)0), ((void*)0) );
    FUNC_1(VAR_3 == VAR_1, "PdhLookupPerfIndexByNameA failed 0x%08x\n", VAR_3);

    VAR_3 = FUNC_0( ((void*)0), ((void*)0), &VAR_4 );
    FUNC_1(VAR_3 == VAR_1, "PdhLookupPerfIndexByNameA failed 0x%08x\n", VAR_3);

    VAR_3 = FUNC_0( ((void*)0), "No Counter", &VAR_4 );
    FUNC_1(VAR_3 == VAR_2, "PdhLookupPerfIndexByNameA failed 0x%08x\n", VAR_3);

    VAR_3 = FUNC_0( ((void*)0), "% Processor Time", ((void*)0) );
    FUNC_1(VAR_3 == VAR_1, "PdhLookupPerfIndexByNameA failed 0x%08x\n", VAR_3);

    VAR_3 = FUNC_0( ((void*)0), "% Processor Time", &VAR_4 );
    FUNC_1(VAR_3 == VAR_0, "PdhLookupPerfIndexByNameA failed 0x%08x\n", VAR_3);
    FUNC_1(VAR_4 == 6, "PdhLookupPerfIndexByNameA failed %d\n", VAR_4);

    VAR_3 = FUNC_0( ((void*)0), "System Up Time", &VAR_4 );
    FUNC_1(VAR_3 == VAR_0, "PdhLookupPerfIndexByNameA failed 0x%08x\n", VAR_3);
    FUNC_1(VAR_4 == 674, "PdhLookupPerfIndexByNameA failed %d\n", VAR_4);
}
