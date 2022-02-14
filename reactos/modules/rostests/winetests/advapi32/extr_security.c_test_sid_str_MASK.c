
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int SID_NAME_USE ;
typedef int PSID ;
typedef int DWORD ;
typedef scalar_t__ BOOL ;


 scalar_t__ FUNC_0 (int *,char**) ;
 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_1 () ;
 int FUNC_2 (char*) ;
 scalar_t__ FUNC_3 (int *,int *,char*,int*,char*,int*,int *) ;
 int VAR_1 ;
 int FUNC_4 (int,char*,char*,...) ;
 int FUNC_5 (char*,char*,...) ;

__attribute__((used)) static void FUNC_6(PSID * VAR_2)
{
    char *VAR_3;
    BOOL VAR_4 = FUNC_0(VAR_2, &VAR_3);
    FUNC_4(VAR_4, "ConvertSidToStringSidA() failed: %d\n", FUNC_1());
    if (VAR_4)
    {
        char VAR_5[VAR_1], VAR_6[VAR_1];
        SID_NAME_USE VAR_7;
        DWORD VAR_8 = VAR_1;
        DWORD VAR_9 = VAR_1;
        VAR_4 = FUNC_3 (((void*)0), VAR_2, VAR_5, &VAR_8, VAR_6, &VAR_9, &VAR_7);
        FUNC_4(VAR_4 || FUNC_1() == VAR_0,
           "LookupAccountSid(%s) failed: %d\n", VAR_3, FUNC_1());
        if (VAR_4)
            FUNC_5(" %s %s\\%s %d\n", VAR_3, VAR_6, VAR_5, VAR_7);
        else if (FUNC_1() == VAR_0)
            FUNC_5(" %s couldn't be mapped\n", VAR_3);
        FUNC_2(VAR_3);
    }
}
