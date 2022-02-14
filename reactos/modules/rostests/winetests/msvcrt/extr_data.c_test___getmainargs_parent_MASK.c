
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int startup ;
struct TYPE_7__ {int hProcess; } ;
struct TYPE_6__ {int cb; } ;
typedef TYPE_1__ STARTUPINFOA ;
typedef TYPE_2__ PROCESS_INFORMATION ;
typedef int FILE ;


 int VAR_0 ;
 int FUNC_0 (int *,char*,int *,int *,int ,int,int *,int *,TYPE_1__*,TYPE_2__*) ;
 scalar_t__ FUNC_1 (int,char*) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_2 (char*) ;
 int FUNC_3 (char*) ;
 int FUNC_4 (char*) ;
 int VAR_4 ;
 int FUNC_5 (int *) ;
 int * FUNC_6 (char*,char*) ;
 int FUNC_7 (TYPE_1__*,int ,int) ;
 int FUNC_8 (int,char*,...) ;
 int FUNC_9 (char*,char*,char*,...) ;
 int FUNC_10 (int ) ;

__attribute__((used)) static void FUNC_11(char *VAR_5)
{
    char VAR_6[3*VAR_1];
    char VAR_7[VAR_1], VAR_8[VAR_1];
    STARTUPINFOA VAR_9;
    PROCESS_INFORMATION VAR_10;
    FILE *VAR_11;
    int VAR_12;

    FUNC_8(FUNC_1(VAR_1, VAR_7) != 0, "GetTempPath failed\n");
    FUNC_9(VAR_6, "%s data %s*\\* %swine_test/*", VAR_5, VAR_7, VAR_7);

    FUNC_9(VAR_8, "%swine_test", VAR_7);
    VAR_12 = FUNC_2(VAR_8);
    FUNC_8(!VAR_12, "_mkdir failed: %d\n", VAR_4);
    FUNC_9(VAR_8, "%swine_test\\a", VAR_7);
    VAR_11 = FUNC_6(VAR_8, "w");
    FUNC_8(VAR_11 != ((void*)0), "fopen(%s) failed: %d\n", VAR_8, VAR_4);
    FUNC_5(VAR_11);
    FUNC_9(VAR_8, "%swine_test\\test", VAR_7);
    VAR_11 = FUNC_6(VAR_8, "w");
    FUNC_8(VAR_11 != ((void*)0), "fopen(%s) failed: %d\n", VAR_8, VAR_4);
    FUNC_5(VAR_11);

    FUNC_7(&VAR_9, 0, sizeof(VAR_9));
    VAR_9.cb = sizeof(VAR_9);
    FUNC_0(((void*)0), VAR_6, ((void*)0), ((void*)0), VAR_3, VAR_0|VAR_2, ((void*)0), ((void*)0), &VAR_9, &VAR_10);
    FUNC_10(VAR_10.hProcess);

    FUNC_4(VAR_8);
    FUNC_9(VAR_8, "%swine_test\\a", VAR_7);
    FUNC_4(VAR_8);
    FUNC_9(VAR_8, "%swine_test", VAR_7);
    FUNC_3(VAR_8);
}
