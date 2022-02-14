
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_5__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_9__ {int repo_mgr; } ;
struct TYPE_8__ {scalar_t__ data; struct TYPE_8__* next; } ;
struct TYPE_7__ {char* email; int id; } ;
typedef TYPE_1__ SeafRepo ;
typedef TYPE_2__ GList ;
typedef int GError ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char const*,char const*) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (TYPE_2__*) ;
 int FUNC_3 (int **,int ,int ,char*) ;
 scalar_t__ FUNC_4 (char*,char const*) ;
 TYPE_5__* VAR_2 ;
 TYPE_2__* FUNC_5 (int ,int,int) ;
 int FUNC_6 (int ,int ,char**,int *) ;
 scalar_t__ FUNC_7 (int ,TYPE_1__*) ;

int
FUNC_8 (const char *VAR_3, const char *VAR_4, GError **VAR_5)
{
    if (!VAR_3 || !VAR_4) {
        FUNC_3 (VAR_5, VAR_0, VAR_1, "Argument should not be null");
        return -1;
    }

    GList *VAR_6, *VAR_7 = FUNC_5(VAR_2->repo_mgr, -1, -1);
    if (!VAR_7) {
        return 0;
    }

    for (VAR_6 = VAR_7; VAR_6; VAR_6 = VAR_6->next) {
        SeafRepo *VAR_8 = (SeafRepo*)VAR_6->data;
        char *VAR_9 = ((void*)0);
        FUNC_6(VAR_2->repo_mgr,
                                              VAR_8->id,
                                              &VAR_9,
                                              ((void*)0));

        if (FUNC_4(VAR_9, VAR_3) == 0 && FUNC_4(VAR_8->email, VAR_4) == 0) {
            if (FUNC_7(VAR_2->repo_mgr, VAR_8) < 0) {
                return -1;
            }
        }

        FUNC_1 (VAR_9);
    }

    FUNC_2 (VAR_7);

    FUNC_0 (VAR_3, VAR_4);

    return 0;
}
