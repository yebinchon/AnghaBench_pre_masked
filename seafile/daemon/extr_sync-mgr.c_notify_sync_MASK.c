
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_16__ TYPE_7__ ;
typedef struct TYPE_15__ TYPE_4__ ;
typedef struct TYPE_14__ TYPE_3__ ;
typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;


typedef int gboolean ;
struct TYPE_16__ {int mq_mgr; int commit_mgr; } ;
struct TYPE_15__ {int str; } ;
struct TYPE_14__ {int desc; int parent_id; int commit_id; } ;
struct TYPE_13__ {int id; int name; TYPE_1__* head; int version; } ;
struct TYPE_12__ {int commit_id; } ;
typedef TYPE_2__ SeafRepo ;
typedef TYPE_3__ SeafCommit ;
typedef TYPE_4__ GString ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (TYPE_4__*,char*,int ,int ,int ,int ,int ) ;
 int FUNC_1 (TYPE_4__*,int ) ;
 TYPE_4__* FUNC_2 (int *) ;
 TYPE_7__* VAR_3 ;
 int FUNC_3 (int ,int ,int ,int ,int ,TYPE_3__**,int ) ;
 int FUNC_4 (TYPE_3__*) ;
 int FUNC_5 (int ,char*,int ) ;
 int FUNC_6 (char*,int ) ;

__attribute__((used)) static void
FUNC_7 (SeafRepo *VAR_4, gboolean VAR_5)
{
    SeafCommit *VAR_6 = ((void*)0);

    if (!FUNC_3 (VAR_3->commit_mgr,
                                                   VAR_4->id, VAR_4->version,
                                                   VAR_4->head->commit_id,
                                                   VAR_2,
                                                   &VAR_6, VAR_0)) {
        FUNC_6 ("Failed to traverse commit tree of %.8s.\n", VAR_4->id);
        return;
    }
    if (!VAR_6)
        return;

    GString *VAR_7 = FUNC_2 (((void*)0));
    FUNC_0 (VAR_7, "%s\t%s\t%s\t%s\t%s",
                            VAR_4->name,
                            VAR_4->id,
                            VAR_6->commit_id,
                            VAR_6->parent_id,
                            VAR_6->desc);
    if (!VAR_5)
        FUNC_5 (VAR_3->mq_mgr,
                                              "sync.done",
                                              VAR_7->str);
    else
        FUNC_5 (VAR_3->mq_mgr,
                                              "sync.multipart_upload",
                                              VAR_7->str);
    FUNC_1 (VAR_7, VAR_1);
    FUNC_4 (VAR_6);
}
