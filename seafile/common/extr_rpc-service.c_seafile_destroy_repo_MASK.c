
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
 int FUNC_0 (int *) ;
 int FUNC_1 (int **,int ,int ,char*) ;
 int FUNC_2 (char const*) ;
 TYPE_1__* VAR_2 ;
 int * FUNC_3 (int ,char const*) ;

int
FUNC_4 (const char *VAR_3, GError **VAR_4)
{
    if (!VAR_3) {
        FUNC_1 (VAR_4, VAR_0, VAR_1, "Argument should not be null");
        return -1;
    }
    if (!FUNC_2 (VAR_3)) {
        FUNC_1 (VAR_4, VAR_0, VAR_1, "Invalid repo id");
        return -1;
    }

    SeafRepo *VAR_5;

    VAR_5 = FUNC_3 (VAR_2->repo_mgr, VAR_3);
    if (!VAR_5) {
        FUNC_1 (VAR_4, VAR_0, VAR_1, "No such repository");
        return -1;
    }

    return FUNC_0(VAR_5);
}
