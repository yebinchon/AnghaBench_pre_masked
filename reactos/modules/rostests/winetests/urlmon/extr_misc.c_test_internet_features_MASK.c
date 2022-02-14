
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {int hProcess; int hThread; } ;
struct TYPE_5__ {int member_0; } ;
typedef TYPE_1__ STARTUPINFOA ;
typedef TYPE_2__ PROCESS_INFORMATION ;
typedef int HKEY ;
typedef scalar_t__ DWORD ;
typedef int BOOL ;


 int FUNC_0 (int ) ;
 int FUNC_1 (char*,char*,int *,int *,int ,int ,int *,int *,TYPE_1__*,TYPE_2__*) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_2 () ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_3 (int ,int ,int *) ;
 int FUNC_4 (int ,int ) ;
 scalar_t__ FUNC_5 (int ,int ,int *) ;
 int FUNC_6 (int,char*,scalar_t__) ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_7 (char*,char*,char*,char*) ;
 int VAR_6 ;
 int FUNC_8 () ;
 int FUNC_9 () ;
 int FUNC_10 () ;
 int FUNC_11 (char*) ;
 int FUNC_12 (char*) ;
 int FUNC_13 (char***) ;
 int FUNC_14 (int ) ;

__attribute__((used)) static void FUNC_15(void) {
    HKEY VAR_7;
    DWORD VAR_8;

    if(!VAR_4 || !VAR_5) {
        FUNC_12("Skipping internet feature tests, IE is too old\n");
        return;
    }


    VAR_8 = FUNC_5(VAR_2, VAR_6, &VAR_7);
    if(VAR_8 != VAR_0) {
        PROCESS_INFORMATION VAR_9;
        STARTUPINFOA VAR_10 = { 0 };
        char VAR_11[VAR_3];
        char **VAR_12;
        BOOL VAR_13;

        VAR_8 = FUNC_3(VAR_2, VAR_6, &VAR_7);
        FUNC_6(VAR_8 == VAR_0, "RegCreateKey failed: %d\n", VAR_8);

        FUNC_11("Running features tests in a separated process.\n");

        FUNC_13( &VAR_12 );
        FUNC_7(VAR_11, "\"%s\" %s internet_features", VAR_12[0], VAR_12[1]);
        VAR_13 = FUNC_1(VAR_12[0], VAR_11, ((void*)0), ((void*)0), VAR_1, 0, ((void*)0), ((void*)0), &VAR_10, &VAR_9);
        FUNC_6(VAR_13, "Could not create process: %u\n", FUNC_2());
        FUNC_14( VAR_9.hProcess );
        FUNC_0(VAR_9.hThread);
        FUNC_0(VAR_9.hProcess);

        FUNC_4(VAR_2, VAR_6);
        return;
    }

    FUNC_10();
    FUNC_8();
    FUNC_9();
}
