
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int gboolean ;
struct TYPE_5__ {int commit_mgr; } ;
struct TYPE_4__ {int commit_id; int version; int repo_id; } ;
typedef TYPE_1__ SeafCommit ;
typedef int GHashTable ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *) ;
 int * FUNC_1 (int ,int ,int ,int *) ;
 int VAR_3 ;
 int VAR_4 ;
 TYPE_2__* VAR_5 ;
 int FUNC_2 (int ,int ,int ,int ,int ,int *,int ) ;

__attribute__((used)) static GHashTable *
FUNC_3 (SeafCommit *VAR_6)
{
    GHashTable *VAR_7;
    gboolean VAR_8;

    VAR_7 = FUNC_1 (VAR_4, VAR_3, VAR_2, ((void*)0));

    VAR_8 = FUNC_2 (VAR_5->commit_mgr,
                                                    VAR_6->repo_id,
                                                    VAR_6->version,
                                                    VAR_6->commit_id,
                                                    VAR_1,
                                                    VAR_7, VAR_0);
    if (!VAR_8)
        goto fail;

    return VAR_7;

fail:
    FUNC_0 (VAR_7);
    return ((void*)0);
}
