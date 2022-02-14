
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_16__ TYPE_9__ ;
typedef struct TYPE_15__ TYPE_3__ ;
typedef struct TYPE_14__ TYPE_2__ ;
typedef struct TYPE_13__ TYPE_1__ ;


typedef int gboolean ;
struct TYPE_16__ {int commit_mgr; int branch_mgr; } ;
struct TYPE_15__ {TYPE_2__* data; struct TYPE_15__* next; } ;
struct TYPE_14__ {int commit_id; } ;
struct TYPE_13__ {int version; int id; } ;
typedef TYPE_1__ SeafRepo ;
typedef int SeafCommit ;
typedef TYPE_2__ SeafBranch ;
typedef TYPE_3__ GList ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (TYPE_3__*) ;
 TYPE_3__* FUNC_1 (TYPE_3__*) ;
 TYPE_9__* VAR_2 ;
 TYPE_3__* FUNC_2 (int ,int ) ;
 int FUNC_3 (TYPE_2__*) ;
 int FUNC_4 (int ,int ,int ,int ,int ,TYPE_3__**,int ) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (char*,int ) ;

GList *
FUNC_7 (SeafRepo *VAR_3)
{
    GList *VAR_4;
    GList *VAR_5;
    SeafBranch *VAR_6;
    GList *VAR_7 = ((void*)0);

    VAR_4 = FUNC_2 (VAR_2->branch_mgr, VAR_3->id);
    if (VAR_4 == ((void*)0)) {
        FUNC_6 ("Failed to get branch list of repo %s.\n", VAR_3->id);
        return ((void*)0);
    }

    for (VAR_5 = VAR_4; VAR_5 != ((void*)0); VAR_5 = VAR_5->next) {
        VAR_6 = VAR_5->data;
        gboolean VAR_8 = FUNC_4 (VAR_2->commit_mgr,
                                                                 VAR_3->id,
                                                                 VAR_3->version,
                                                                 VAR_6->commit_id,
                                                                 VAR_1,
                                                                 &VAR_7, VAR_0);
        if (!VAR_8) {
            for (VAR_5 = VAR_7; VAR_5 != ((void*)0); VAR_5 = VAR_5->next)
                FUNC_5 ((SeafCommit *)(VAR_5->data));
            FUNC_0 (VAR_7);
            goto out;
        }
    }

    VAR_7 = FUNC_1 (VAR_7);

out:
    for (VAR_5 = VAR_4; VAR_5 != ((void*)0); VAR_5 = VAR_5->next) {
        FUNC_3 ((SeafBranch *)VAR_5->data);
    }
    return VAR_7;
}
