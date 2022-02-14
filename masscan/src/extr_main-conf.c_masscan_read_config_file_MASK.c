
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct Masscan {int dummy; } ;
typedef int line ;
typedef scalar_t__ errno_t ;
typedef int dir ;
typedef int FILE ;


 int FUNC_0 (int *) ;
 scalar_t__ FUNC_1 (char*,int,int *) ;
 scalar_t__ FUNC_2 (int **,char const*,char*) ;
 int FUNC_3 (int ,char*,char*) ;
 int FUNC_4 (char*,int) ;
 scalar_t__ FUNC_5 (char) ;
 int FUNC_6 (struct Masscan*,char*,char*) ;
 int FUNC_7 (char const*) ;
 int VAR_0 ;
 char* FUNC_8 (char*,char) ;
 int FUNC_9 (char*,int) ;

void
FUNC_10(struct Masscan *VAR_1, const char *VAR_2)
{
    FILE *VAR_3;
    errno_t VAR_4;
    char VAR_5[65536];

    VAR_4 = FUNC_2(&VAR_3, VAR_2, "rt");
    if (VAR_4) {
        char VAR_6[512];
        FUNC_7(VAR_2);
        FUNC_4(VAR_6, sizeof(VAR_6));
        FUNC_3(VAR_0, "cwd = %s\n", VAR_6);
        return;
    }

    while (FUNC_1(VAR_5, sizeof(VAR_5), VAR_3)) {
        char *VAR_7;
        char *VAR_8;

        FUNC_9(VAR_5, sizeof(VAR_5));

        if (FUNC_5(VAR_5[0] & 0xFF) || VAR_5[0] == '\0')
            continue;

        VAR_7 = VAR_5;
        VAR_8 = FUNC_8(VAR_5, '=');
        if (VAR_8 == ((void*)0))
            continue;
        *VAR_8 = '\0';
        VAR_8++;
        FUNC_9(VAR_7, sizeof(VAR_5));
        FUNC_9(VAR_8, sizeof(VAR_5));

        FUNC_6(VAR_1, VAR_7, VAR_8);
    }

    FUNC_0(VAR_3);
}
