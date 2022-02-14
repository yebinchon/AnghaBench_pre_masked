
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_8__ {int repo_mgr; } ;
struct TYPE_7__ {TYPE_1__* data; struct TYPE_7__* next; } ;
struct TYPE_6__ {int id; } ;
typedef int SeafRepoManager ;
typedef TYPE_1__ SeafRepo ;
typedef TYPE_2__ GList ;


 int VAR_0 ;
 char* FUNC_0 (char const*) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (TYPE_2__*) ;
 scalar_t__ FUNC_3 (char*,char const*) ;
 TYPE_4__* VAR_1 ;
 TYPE_2__* FUNC_4 (int ,int ,int) ;
 int FUNC_5 (int ,int ,char**,char**) ;
 int FUNC_6 (int ,int ,int ,char*) ;
 int FUNC_7 (int ,int ,char const*,char*) ;
 int FUNC_8 (int *,int ,char*) ;

int
FUNC_9 (SeafRepoManager *VAR_2,
                                            const char *VAR_3,
                                            const char *VAR_4,
                                            const char *VAR_5)
{
    GList *VAR_6, *VAR_7 = FUNC_4 (VAR_1->repo_mgr, 0, -1);
    SeafRepo *VAR_8;
    char *VAR_9 = FUNC_0(VAR_5);

    for (VAR_6 = VAR_7; VAR_6; VAR_6 = VAR_6->next) {
        VAR_8 = VAR_6->data;

        char *VAR_10 = ((void*)0);
        char *VAR_11 = ((void*)0);
        FUNC_5 (VAR_1->repo_mgr, VAR_8->id,
                                               &VAR_10, &VAR_11);
        if (FUNC_3(VAR_10, VAR_3) == 0) {
            FUNC_7 (VAR_1->repo_mgr, VAR_8->id,
                                                   VAR_4, VAR_11);


            FUNC_8 (VAR_2, VAR_8->id, VAR_9);

            FUNC_6 (
                VAR_1->repo_mgr, VAR_8->id, VAR_0, VAR_9);
        }

        FUNC_1 (VAR_10);
        FUNC_1 (VAR_11);
    }

    FUNC_2 (VAR_7);
    FUNC_1 (VAR_9);

    return 0;
}
