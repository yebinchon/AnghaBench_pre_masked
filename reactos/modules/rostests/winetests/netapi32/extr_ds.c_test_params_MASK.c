
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int PDSROLE_PRIMARY_DOMAIN_INFO_BASIC ;
typedef int PBYTE ;
typedef scalar_t__ DWORD ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int,char*,scalar_t__) ;
 scalar_t__ FUNC_2 (int *,int,int *) ;

__attribute__((used)) static void FUNC_3(void)
{
    DWORD VAR_2;
    PDSROLE_PRIMARY_DOMAIN_INFO_BASIC VAR_3;

    FUNC_0(0xdeadbeef);
    VAR_2 = FUNC_2(((void*)0), VAR_0, ((void*)0));
    FUNC_1( VAR_2 == VAR_1, "Expected error ERROR_INVALID_PARAMETER, got (%d)\n", VAR_2);

    FUNC_0(0xdeadbeef);
    VAR_2 = FUNC_2(((void*)0), 0, ((void*)0));
    FUNC_1( VAR_2 == VAR_1, "Expected error ERROR_INVALID_PARAMETER, got (%d)\n", VAR_2);
    FUNC_0(0xdeadbeef);
    VAR_2 = FUNC_2(((void*)0), 4, ((void*)0));
    FUNC_1( VAR_2 == VAR_1, "Expected error ERROR_INVALID_PARAMETER, got (%d)\n", VAR_2);

    FUNC_0(0xdeadbeef);
    VAR_2 = FUNC_2(((void*)0), 4, (PBYTE *)&VAR_3);
    FUNC_1( VAR_2 == VAR_1, "Expected error ERROR_INVALID_PARAMETER, got (%d)\n", VAR_2);
}
