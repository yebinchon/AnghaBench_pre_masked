
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ LONG ;
typedef int HKEY ;
typedef int HINF ;
typedef int BOOL ;


 char* VAR_0 ;
 int FUNC_0 (char*) ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ FUNC_1 () ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_2 (int ,char*,int *) ;
 int FUNC_3 (int ,char*) ;
 scalar_t__ FUNC_4 (int ,char*,int *) ;
 int VAR_6 ;
 int FUNC_5 (int) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int *,int ,char*,int ,int ,char*,int ,int *,int *,int *,int *) ;
 int FUNC_8 (char*,int *,int ,int *) ;
 int VAR_7 ;
 int FUNC_9 (char*,int ) ;
 char* VAR_8 ;
 int FUNC_10 (int,char*,...) ;
 int FUNC_11 (char*,char*,char*,char*) ;

__attribute__((used)) static void FUNC_12(void)
{
    char VAR_9[VAR_5];
    HINF VAR_10;
    HKEY VAR_11;
    LONG VAR_12;
    BOOL VAR_13;


    FUNC_10(!FUNC_2(VAR_3, "Software\\Wine\\setupapitest\\setupapitest", &VAR_11),
        "Expected RegCreateKeyA to succeed\n");


    FUNC_10(!FUNC_4(VAR_3, "Software\\Wine\\setupapitest\\setupapitest", &VAR_11),
        "Expected registry key to exist\n");

    FUNC_9(VAR_8, VAR_7);
    FUNC_11(VAR_9, "%s\\%s", VAR_0, VAR_8);
    VAR_10 = FUNC_8(VAR_9, ((void*)0), VAR_4, ((void*)0));
    FUNC_5(0xdeadbeef);
    VAR_13 = FUNC_7(((void*)0), VAR_10, "DefaultInstall", VAR_6, VAR_11,
        "A:\\", 0, ((void*)0), ((void*)0), ((void*)0), ((void*)0));
    FUNC_10(VAR_13, "Unexpected failure\n");
    FUNC_10(FUNC_1() == VAR_2, "Expected ERROR_SUCCESS, got %08x\n", FUNC_1());


    VAR_12 = FUNC_4(VAR_3, "Software\\Wine\\setupapitest", &VAR_11);
    FUNC_10(VAR_12 == VAR_1, "Didn't expect the registry key to exist\n");

    if (VAR_12 == VAR_2)
    {
        FUNC_3(VAR_3, "Software\\Wine\\setupapitest\\setupapitest");
        FUNC_3(VAR_3, "Software\\Wine\\setupapitest");
    }

    FUNC_6(VAR_10);
    FUNC_0(VAR_8);
}
