
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int file ;
typedef scalar_t__ HANDLE ;


 int VAR_0 ;
 int FUNC_0 (scalar_t__) ;
 scalar_t__ FUNC_1 (char*,int ,int ,int *,int ,int ,int *) ;
 int FUNC_2 (char*) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_3 (char*,char*,int) ;
 int FUNC_4 (int ,char*) ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int FUNC_5 (char*,char*) ;
 int VAR_6 ;
 int FUNC_6 (int,char*,...) ;
 scalar_t__ FUNC_7 (int ,char*,int *) ;
 int FUNC_8 (char*) ;
 int FUNC_9 (int ,char*) ;
 int FUNC_10 (int ,char*) ;

__attribute__((used)) static void FUNC_11(void)
{
    char VAR_7[VAR_5 + 20], VAR_8[VAR_5 + 20];
    HANDLE VAR_9;

    FUNC_4(VAR_5, VAR_8);
    FUNC_3(VAR_8, VAR_7, sizeof(VAR_7));
    FUNC_5(VAR_7, "test_file.exe");

    VAR_9 = FUNC_1(VAR_7, VAR_3, 0, ((void*)0), VAR_0, VAR_2, ((void*)0));
    FUNC_6(VAR_9 != VAR_4, "CreateFile failed for '%s'\n", VAR_7);
    if (VAR_9 == VAR_4)
    {
        FUNC_8("Running these tests is useless without a file present\n");
        return;
    }
    FUNC_0(VAR_9);

    if (FUNC_7(VAR_1, VAR_7, ((void*)0)))
    {
        FUNC_9(VAR_1, VAR_7);
        FUNC_10(VAR_1, VAR_7);
    }
    else
    {
        FUNC_8("Skipping SetPermLayerStateLevel tests for User, because I cannot prepare the environment\n");
    }
    if (FUNC_7(VAR_6, VAR_7, ((void*)0)))
    {
        FUNC_9(VAR_6, VAR_7);
        FUNC_10(VAR_6, VAR_7);
    }
    else
    {
        FUNC_8("Skipping SetPermLayerStateLevel tests for Machine (HKLM), because I cannot prepare the environment\n");
    }
    FUNC_6(FUNC_2(VAR_7), "DeleteFile failed....\n");
}
