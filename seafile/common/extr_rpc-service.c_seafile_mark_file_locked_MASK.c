
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int filelock_mgr; } ;
typedef int GError ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (int **,int ,int ,char*) ;
 char* FUNC_2 (char const*) ;
 TYPE_1__* VAR_3 ;
 int FUNC_3 (int ,char const*,char const*,int ) ;
 int FUNC_4 (char*) ;

int
FUNC_5 (const char *VAR_4, const char *VAR_5, GError **VAR_6)
{
    char *VAR_7 = ((void*)0);
    int VAR_8;
    int VAR_9;

    if (!VAR_4 || !VAR_5) {
        FUNC_1 (VAR_6, VAR_1, VAR_2, "Argument should not be null");
        return -1;
    }

    if (*VAR_5 == '/')
        ++VAR_5;

    if (VAR_5[0] == 0) {
        FUNC_1 (VAR_6, VAR_1, VAR_2, "Invalid path");
        return -1;
    }

    VAR_7 = FUNC_2(VAR_5);
    VAR_8 = FUNC_4(VAR_7);
    if (VAR_7[VAR_8-1] == '/')
        VAR_7[VAR_8-1] = 0;

    VAR_9 = FUNC_3 (VAR_3->filelock_mgr,
                                                  VAR_4, VAR_5, VAR_0);

    FUNC_0 (VAR_7);
    return VAR_9;
}
