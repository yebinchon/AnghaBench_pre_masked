
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int si ;
struct TYPE_6__ {scalar_t__ hProcess; scalar_t__ hThread; } ;
struct TYPE_5__ {int cb; int member_0; } ;
typedef TYPE_1__ STARTUPINFOA ;
typedef TYPE_2__ PROCESS_INFORMATION ;
typedef scalar_t__ HANDLE ;
typedef int FILETIME ;
typedef int BOOL ;


 int FUNC_0 (scalar_t__) ;
 scalar_t__ FUNC_1 (char*,int ,int,int *,int ,int ,int *) ;
 int FUNC_2 (char*,char*,int *,int *,int ,int ,int *,int *,TYPE_1__*,TYPE_2__*) ;
 int FUNC_3 (char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_4 () ;
 int FUNC_5 (int *,char*,int) ;
 int FUNC_6 (int *) ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_7 (scalar_t__,int *,int *,int *) ;
 int FUNC_8 (char*,int ,int,int *,int *) ;
 int VAR_7 ;
 int FUNC_9 (int ,char*,int ) ;
 int FUNC_10 (char*) ;
 int FUNC_11 (char*,char*,char*,char*) ;
 int FUNC_12 (char*,char*) ;
 int FUNC_13 (char***) ;
 int FUNC_14 (scalar_t__) ;

__attribute__((used)) static void FUNC_15(void)
{
    char VAR_8[VAR_5];
    char VAR_9[VAR_5];
    char **VAR_10;
    PROCESS_INFORMATION VAR_11;
    STARTUPINFOA VAR_12 = { 0 };
    HANDLE VAR_13;
    FILETIME VAR_14;
    BOOL VAR_15;

    FUNC_5(((void*)0), VAR_9, VAR_5);
    FUNC_12(VAR_9, ".manifest");
    if(!FUNC_8(VAR_9, VAR_7, -1, ((void*)0), ((void*)0))) {
        FUNC_10("Could not create manifest file\n");
        return;
    }

    VAR_12.cb = sizeof(VAR_12);
    FUNC_13( &VAR_10 );


    VAR_13 = FUNC_1(VAR_10[0], VAR_3, VAR_1 | VAR_2,
                       ((void*)0), VAR_6, 0, ((void*)0));
    if (VAR_13 != VAR_4) {
        FUNC_6(&VAR_14);
        FUNC_7(VAR_13, ((void*)0), ((void*)0), &VAR_14);
        FUNC_0(VAR_13);
    }
    FUNC_11(VAR_8, "\"%s\" %s manifest1", VAR_10[0], VAR_10[1]);
    VAR_15 = FUNC_2(VAR_10[0], VAR_8, ((void*)0), ((void*)0), VAR_0, 0, ((void*)0), ((void*)0), &VAR_12, &VAR_11);
    FUNC_9(VAR_15, "Could not create process: %u\n", FUNC_4());
    FUNC_14( VAR_11.hProcess );
    FUNC_0(VAR_11.hThread);
    FUNC_0(VAR_11.hProcess);
    FUNC_3(VAR_9);
}
