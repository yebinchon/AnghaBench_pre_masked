
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int SID_NAME_USE ;
typedef int PSID ;
typedef char* LPSTR ;
typedef int DWORD ;
typedef int BOOL ;


 int FUNC_0 () ;
 int FUNC_1 (int *,int ,char*,int*,char*,int*,int *) ;
 int FUNC_2 (int ,char*,int ) ;

__attribute__((used)) static void FUNC_3(PSID VAR_0, LPSTR *VAR_1, LPSTR *VAR_2)
{
    static char VAR_3[257], VAR_4[257];
    DWORD VAR_5, VAR_6;
    SID_NAME_USE VAR_7;
    BOOL VAR_8;

    *VAR_1 = VAR_3;
    *VAR_2 = VAR_4;

    VAR_5 = VAR_6 = 257;
    VAR_3[0] = VAR_4[0] = 0;
    VAR_8 = FUNC_1(((void*)0), VAR_0, VAR_3, &VAR_5, VAR_4, &VAR_6, &VAR_7);
    FUNC_2(VAR_8, "LookupAccountSidA failed %u\n", FUNC_0());
}
