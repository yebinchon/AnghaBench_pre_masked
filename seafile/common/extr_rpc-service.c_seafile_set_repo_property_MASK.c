
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_3__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {int repo_mgr; } ;
struct TYPE_4__ {int id; } ;
typedef TYPE_1__ SeafRepo ;
typedef int GError ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int **,int ,int ,char*,...) ;
 TYPE_3__* VAR_4 ;
 TYPE_1__* FUNC_1 (int ,char const*) ;
 int FUNC_2 (int ,int ,char const*,char const*) ;

int
FUNC_3 (const char *VAR_5,
                           const char *VAR_6,
                           const char *VAR_7,
                           GError **VAR_8)
{
    int VAR_9;

    if (VAR_5 == ((void*)0) || VAR_6 == ((void*)0) || VAR_7 == ((void*)0)) {
        FUNC_0 (VAR_8, VAR_0, VAR_1, "Arguments should not be empty");
        return -1;
    }

    SeafRepo *VAR_10;
    VAR_10 = FUNC_1 (VAR_4->repo_mgr, VAR_5);
    if (!VAR_10) {
        FUNC_0 (VAR_8, VAR_0, VAR_2, "Can't find Repo %s", VAR_5);
        return -1;
    }

    VAR_9 = FUNC_2 (VAR_4->repo_mgr,
                                               VAR_10->id, VAR_6, VAR_7);
    if (VAR_9 < 0) {
        FUNC_0 (VAR_8, VAR_0, VAR_3,
                     "Failed to set key for repo %s", VAR_5);
        return -1;
    }

    return 0;
}
