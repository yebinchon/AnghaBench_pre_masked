
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int buf ;
typedef int FILE ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int * FUNC_1 (char*,char*) ;
 int VAR_1 ;
 int FUNC_2 (char*,int,int *) ;
 int FUNC_3 (int,char*,...) ;
 scalar_t__ VAR_2 ;
 int FUNC_4 (char*,char*,char const*) ;
 int FUNC_5 (char*,char*) ;

__attribute__((used)) static void FUNC_6(const char *VAR_3)
{
    FILE *VAR_4;
    char VAR_5[1024];
    int VAR_6;

    FUNC_4(VAR_5, "\"%s\" misc popen", VAR_3);
    VAR_4 = FUNC_1(VAR_5, "r");
    FUNC_3(VAR_4 != ((void*)0), "_popen failed with error: %d\n", VAR_1);

    FUNC_2(VAR_5, sizeof(VAR_5), VAR_4);
    FUNC_3(!FUNC_5(VAR_5, "child output\n"), "buf = %s\n", VAR_5);

    VAR_6 = FUNC_0(VAR_4);
    FUNC_3(VAR_6 == 0x37, "_pclose returned %x, expected 0x37\n", VAR_6);

    VAR_1 = 0xdeadbeef;
    VAR_6 = FUNC_0((FILE*)0xdeadbeef);
    FUNC_3(VAR_6 == -1, "_pclose returned %x, expected -1\n", VAR_6);
    if(VAR_2)
        FUNC_3(VAR_1 == VAR_0, "errno = %d\n", VAR_1);
}
