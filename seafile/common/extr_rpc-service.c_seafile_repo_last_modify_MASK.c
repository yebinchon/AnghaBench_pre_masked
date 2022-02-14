
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_3__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {int repo_mgr; } ;
struct TYPE_4__ {int last_modify; } ;
typedef TYPE_1__ SeafRepo ;
typedef int GError ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int **,int ,int ,char*) ;
 TYPE_3__* VAR_3 ;
 TYPE_1__* FUNC_1 (int ,char const*) ;

int
FUNC_2(const char *VAR_4, GError **VAR_5)
{
    SeafRepo *VAR_6;
    int VAR_7 = 0;

    if (!VAR_4) {
        FUNC_0 (VAR_5, VAR_0, VAR_1, "Argument should not be null");
        return -1;
    }

    VAR_6 = FUNC_1 (VAR_3->repo_mgr, VAR_4);
    if (!VAR_6) {
        FUNC_0 (VAR_5, VAR_0, VAR_2, "No such repository");
        return -1;
    }

    VAR_7 = VAR_6->last_modify;

    return VAR_7;
}
