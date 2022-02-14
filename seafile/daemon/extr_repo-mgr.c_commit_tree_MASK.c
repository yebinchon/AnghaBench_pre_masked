
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_15__ TYPE_8__ ;
typedef struct TYPE_14__ TYPE_2__ ;
typedef struct TYPE_13__ TYPE_1__ ;
typedef struct TYPE_12__ TYPE_10__ ;


struct TYPE_15__ {int commit_id; } ;
struct TYPE_14__ {int commit_id; void* client_version; void* device_name; void* parent_id; } ;
struct TYPE_13__ {char* email; TYPE_8__* head; int id; } ;
struct TYPE_12__ {int branch_mgr; int commit_mgr; int client_name; int client_id; } ;
typedef TYPE_1__ SeafRepo ;
typedef TYPE_2__ SeafCommit ;


 int VAR_0 ;
 void* FUNC_0 (int ) ;
 TYPE_10__* VAR_1 ;
 int FUNC_1 (int ,TYPE_8__*) ;
 int FUNC_2 (TYPE_8__*,int ) ;
 scalar_t__ FUNC_3 (int ,TYPE_2__*) ;
 TYPE_2__* FUNC_4 (int *,int ,char const*,char*,int ,char const*,int ) ;
 int FUNC_5 (TYPE_2__*) ;
 int FUNC_6 (TYPE_1__*,TYPE_2__*) ;
 int FUNC_7 (char*,int ) ;

__attribute__((used)) static int
FUNC_8 (SeafRepo *VAR_2, const char *VAR_3,
             const char *VAR_4, char VAR_5[])
{
    SeafCommit *VAR_6;

    VAR_6 = FUNC_4 (((void*)0), VAR_2->id, VAR_3,
                              VAR_2->email ? VAR_2->email
                              : "unknown",
                              VAR_1->client_id,
                              VAR_4, 0);

    VAR_6->parent_id = FUNC_0 (VAR_2->head->commit_id);


    VAR_6->device_name = FUNC_0(VAR_1->client_name);
    VAR_6->client_version = FUNC_0 (VAR_0);

    FUNC_6 (VAR_2, VAR_6);

    if (FUNC_3 (VAR_1->commit_mgr, VAR_6) < 0)
        return -1;

    FUNC_2 (VAR_2->head, VAR_6->commit_id);
    FUNC_1 (VAR_1->branch_mgr, VAR_2->head);

    FUNC_7 (VAR_5, VAR_6->commit_id);
    FUNC_5 (VAR_6);

    return 0;
}
