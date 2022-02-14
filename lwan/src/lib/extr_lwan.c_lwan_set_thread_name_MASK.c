
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int thread_name ;
typedef int process_name ;


 int VAR_0 ;
 int FUNC_0 () ;
 scalar_t__ FUNC_1 (int ,char*,int) ;
 int FUNC_2 () ;
 int FUNC_3 (int ,char*) ;
 int FUNC_4 (char*,int,char*,char*,char const*) ;
 char* FUNC_5 (char*,char) ;

void FUNC_6(const char *VAR_1)
{
    char VAR_2[16];
    char VAR_3[VAR_0];
    char *VAR_4;
    int VAR_5;

    if (FUNC_1(FUNC_0(), VAR_3, sizeof(VAR_3)) < 0)
        return;

    VAR_4 = FUNC_5(VAR_3, '/');
    if (!VAR_4)
        return;

    VAR_5 = FUNC_4(VAR_2, sizeof(VAR_2), "%s %s", VAR_4 + 1, VAR_1);
    if (VAR_5 < 0)
        return;

    FUNC_3(FUNC_2(), VAR_2);
}
