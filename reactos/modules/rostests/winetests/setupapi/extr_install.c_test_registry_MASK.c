
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ LONG ;
typedef int HKEY ;
typedef int BOOL ;


 char* VAR_0 ;
 int FUNC_0 (char*) ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_1 () ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_2 (int ,char*,int *) ;
 int FUNC_3 (int ,char*) ;
 scalar_t__ FUNC_4 (int ,char*,int *) ;
 int VAR_5 ;
 int FUNC_5 (char*,int ) ;
 char* VAR_6 ;
 int FUNC_6 (int,char*,...) ;
 int FUNC_7 (char*,int,char*) ;
 int FUNC_8 (char*,char*,char*,char*) ;

__attribute__((used)) static void FUNC_9(void)
{
    HKEY VAR_7;
    LONG VAR_8;
    char VAR_9[VAR_4];
    BOOL VAR_10;


    FUNC_6(!FUNC_2(VAR_3, "Software\\Wine\\setupapitest\\setupapitest", &VAR_7),
        "Expected RegCreateKeyA to succeed\n");


    FUNC_6(!FUNC_4(VAR_3, "Software\\Wine\\setupapitest\\setupapitest", &VAR_7),
        "Expected registry key to exist\n");

    FUNC_5(VAR_6, VAR_5);
    FUNC_8(VAR_9, "%s\\%s", VAR_0, VAR_6);
    FUNC_7("DefaultInstall", 128, VAR_9);


    VAR_8 = FUNC_4(VAR_3, "Software\\Wine\\setupapitest", &VAR_7);
    FUNC_6(VAR_8 == VAR_1, "Didn't expect the registry key to exist\n");

    if (VAR_8 == VAR_2)
    {
        FUNC_3(VAR_3, "Software\\Wine\\setupapitest\\setupapitest");
        FUNC_3(VAR_3, "Software\\Wine\\setupapitest");
    }
    VAR_10 = FUNC_0(VAR_6);
    FUNC_6(VAR_10, "Expected source inf to exist, last error was %d\n", FUNC_1());
}
