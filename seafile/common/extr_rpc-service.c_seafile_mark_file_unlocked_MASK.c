
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int filelock_mgr; } ;
typedef int GError ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (int **,int ,int ,char*) ;
 char* FUNC_2 (char const*) ;
 TYPE_1__* VAR_2 ;
 int FUNC_3 (int ,char const*,char const*) ;
 int FUNC_4 (char*) ;

int
FUNC_5 (const char *VAR_3, const char *VAR_4, GError **VAR_5)
{
    char *VAR_6 = ((void*)0);
    int VAR_7;
    int VAR_8;

    if (!VAR_3 || !VAR_4) {
        FUNC_1 (VAR_5, VAR_0, VAR_1, "Argument should not be null");
        return -1;
    }

    if (*VAR_4 == '/')
        ++VAR_4;

    if (VAR_4[0] == 0) {
        FUNC_1 (VAR_5, VAR_0, VAR_1, "Invalid path");
        return -1;
    }

    VAR_6 = FUNC_2(VAR_4);
    VAR_7 = FUNC_4(VAR_6);
    if (VAR_6[VAR_7-1] == '/')
        VAR_6[VAR_7-1] = 0;

    VAR_8 = FUNC_3 (VAR_2->filelock_mgr,
                                                    VAR_3, VAR_4);

    FUNC_0 (VAR_6);
    return VAR_8;
}
