
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int st_mode; } ;
typedef TYPE_1__ SeafStat ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int ) ;
 char* FUNC_1 (char*) ;
 scalar_t__ FUNC_2 (char*,TYPE_1__*) ;
 scalar_t__ FUNC_3 (char*,int) ;
 int FUNC_4 (char*,...) ;
 int FUNC_5 (char*,int,char*,char const*) ;
 int FUNC_6 (char const*) ;

char *
FUNC_7 (const char *VAR_1, const char *VAR_2, int VAR_3)
{
    int VAR_4 = FUNC_6(VAR_1);
    int VAR_5;
    char VAR_6[VAR_0];
    int VAR_7;
    SeafStat VAR_8;

    if (!VAR_3) {
        FUNC_4 ("entry name should not be empty.\n");
        return ((void*)0);
    }

    FUNC_5 (VAR_6, VAR_0, "%s/", VAR_1);


    VAR_5 = VAR_4 + VAR_3 + 1;
    VAR_7 = VAR_4 + 1;
    while (VAR_7 < VAR_5) {
        do {
            VAR_6[VAR_7] = VAR_2[VAR_7-VAR_4-1];
            VAR_7++;
        } while (VAR_7 < VAR_5 && VAR_2[VAR_7-VAR_4-1] != '/');
        if (VAR_7 >= VAR_5)
            break;
        VAR_6[VAR_7] = 0;

        if (FUNC_2 (VAR_6, &VAR_8) == 0 && FUNC_0(VAR_8.st_mode))
            continue;

        if (FUNC_3 (VAR_6, 0777) < 0) {
            FUNC_4 ("Failed to create directory %s.\n", VAR_6);
            return ((void*)0);
        }
    }
    VAR_6[VAR_7] = 0;

    return FUNC_1(VAR_6);
}
