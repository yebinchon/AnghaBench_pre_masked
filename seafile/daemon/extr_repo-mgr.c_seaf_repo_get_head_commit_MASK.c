
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_4__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_7__ {int commit_mgr; int repo_mgr; } ;
struct TYPE_6__ {TYPE_1__* head; int version; } ;
struct TYPE_5__ {int commit_id; } ;
typedef TYPE_2__ SeafRepo ;
typedef int SeafCommit ;


 TYPE_4__* VAR_0 ;
 int * FUNC_0 (int ,char const*,int ,int ) ;
 TYPE_2__* FUNC_1 (int ,char const*) ;
 int FUNC_2 (char*,char const*) ;

SeafCommit *
FUNC_3 (const char *VAR_1)
{
    SeafRepo *VAR_2;
    SeafCommit *VAR_3;

    VAR_2 = FUNC_1 (VAR_0->repo_mgr, VAR_1);
    if (!VAR_2) {
        FUNC_2 ("Failed to get repo %s.\n", VAR_1);
        return ((void*)0);
    }

    VAR_3 = FUNC_0 (VAR_0->commit_mgr,
                                           VAR_1, VAR_2->version,
                                           VAR_2->head->commit_id);
    if (!VAR_3) {
        FUNC_2 ("Failed to get head for repo %s.\n", VAR_1);
        return ((void*)0);
    }

    return VAR_3;
}
