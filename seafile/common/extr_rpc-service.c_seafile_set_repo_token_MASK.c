
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int repo_mgr; } ;
typedef int SeafRepo ;
typedef int GError ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int **,int ,int ,char*,...) ;
 TYPE_1__* VAR_4 ;
 int * FUNC_1 (int ,char const*) ;
 int FUNC_2 (int ,int *,char const*) ;

int
FUNC_3 (const char *VAR_5,
                        const char *VAR_6,
                        GError **VAR_7)
{
    int VAR_8;

    if (VAR_5 == ((void*)0) || VAR_6 == ((void*)0)) {
        FUNC_0 (VAR_7, VAR_0, VAR_1, "Arguments should not be empty");
        return -1;
    }

    SeafRepo *VAR_9;
    VAR_9 = FUNC_1 (VAR_4->repo_mgr, VAR_5);
    if (!VAR_9) {
        FUNC_0 (VAR_7, VAR_0, VAR_2, "Can't find Repo %s", VAR_5);
        return -1;
    }

    VAR_8 = FUNC_2 (VAR_4->repo_mgr,
                                            VAR_9, VAR_6);
    if (VAR_8 < 0) {
        FUNC_0 (VAR_7, VAR_0, VAR_3,
                     "Failed to set token for repo %s", VAR_5);
        return -1;
    }

    return 0;
}
