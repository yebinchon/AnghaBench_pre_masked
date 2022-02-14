
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int str ;
typedef int FILE ;


 int FUNC_0 (char*,int) ;
 int* FUNC_1 () ;
 int FUNC_2 (int *) ;
 int * FUNC_3 (char*,char*) ;
 int FUNC_4 (char*,int,int *) ;
 scalar_t__ FUNC_5 (char*,char*) ;
 int FUNC_6 (int,char*,...) ;

__attribute__((used)) static void FUNC_7()
{
    FILE * VAR_0;
    int VAR_1;
    char VAR_2[20];


    VAR_0 = FUNC_3("cmd.exe /C \"echo Hallo\"", "r");
    FUNC_6(VAR_0 != ((void*)0), "_popen returns NULL!\n");

    FUNC_0(VAR_2, sizeof(VAR_2));
    FUNC_4(VAR_2, sizeof(VAR_2) - 1, VAR_0);
    FUNC_6(FUNC_5(VAR_2, "Hallo\n") == 0, "fgets: expected \"Hallo\", got %s.\n", VAR_2);

    VAR_1 = FUNC_2(VAR_0);
    FUNC_6(VAR_1 == 0, "_pclose: expected 0, got %i.\n", VAR_1);
    VAR_1 = *FUNC_1();
    FUNC_6(VAR_1 == 0, "_errno: expected 0, got %i,\n", VAR_1);
}
