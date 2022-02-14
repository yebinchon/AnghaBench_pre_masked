
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_3__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef char gchar ;
struct TYPE_5__ {int repo_mgr; } ;
struct TYPE_4__ {int id; } ;
typedef TYPE_1__ SeafRepo ;
typedef int GError ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int **,int ,int ,char*,...) ;
 TYPE_3__* VAR_3 ;
 TYPE_1__* FUNC_1 (int ,char const*) ;
 char* FUNC_2 (int ,int ,char const*) ;

gchar *
FUNC_3 (const char *VAR_4,
                           const char *VAR_5,
                           GError **VAR_6)
{
    char *VAR_7 = ((void*)0);

    if (!VAR_4 || !VAR_5) {
        FUNC_0 (VAR_6, VAR_0, VAR_1, "Arguments should not be empty");
        return ((void*)0);
    }

    SeafRepo *VAR_8;
    VAR_8 = FUNC_1 (VAR_3->repo_mgr, VAR_4);
    if (!VAR_8) {
        FUNC_0 (VAR_6, VAR_0, VAR_2, "Can't find Repo %s", VAR_4);
        return ((void*)0);
    }

    VAR_7 = FUNC_2 (VAR_3->repo_mgr, VAR_8->id, VAR_5);
    return VAR_7;
}
