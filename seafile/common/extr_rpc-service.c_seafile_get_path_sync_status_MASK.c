
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int sync_mgr; } ;
typedef int GError ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (int **,int ,int ,char*) ;
 char* FUNC_2 (char const*) ;
 TYPE_1__* VAR_2 ;
 char* FUNC_3 (int ,char const*,char*,int) ;
 scalar_t__ FUNC_4 (char const*,char*) ;
 int FUNC_5 (char*) ;

char *
FUNC_6 (const char *VAR_3,
                              const char *VAR_4,
                              int VAR_5,
                              GError **VAR_6)
{
    char *VAR_7 = ((void*)0);
    int VAR_8;
    char *VAR_9;

    if (!VAR_3 || !VAR_4) {
        FUNC_1 (VAR_6, VAR_0, VAR_1, "Argument should not be null");
        return ((void*)0);
    }


    if (FUNC_4 (VAR_4, "") != 0) {
        if (*VAR_4 == '/')
            ++VAR_4;
        VAR_7 = FUNC_2(VAR_4);
        VAR_8 = FUNC_5(VAR_7);
        if (VAR_7[VAR_8-1] == '/')
            VAR_7[VAR_8-1] = 0;
    } else {
        VAR_7 = FUNC_2(VAR_4);
    }

    VAR_9 = FUNC_3 (VAR_2->sync_mgr,
                                                     VAR_3,
                                                     VAR_7,
                                                     VAR_5);
    FUNC_0 (VAR_7);
    return VAR_9;
}
