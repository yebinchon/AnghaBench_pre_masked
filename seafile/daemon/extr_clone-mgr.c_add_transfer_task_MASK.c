
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {int http_tx_mgr; } ;
struct TYPE_4__ {int repo_id; int tx_id; int repo_name; int use_fileserver_port; int email; int http_protocol_version; int worktree; int passwd; int server_head_id; int token; int effective_url; int repo_version; } ;
typedef int GError ;
typedef TYPE_1__ CloneTask ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ,int ,int ,int ,int ,int ,int ,int ,int ,int ,int ,int ,int ,int **) ;
 TYPE_2__* VAR_1 ;

__attribute__((used)) static int
FUNC_2 (CloneTask *VAR_2, GError **VAR_3)
{
    int VAR_4 = FUNC_1 (VAR_1->http_tx_mgr,
                                            VAR_2->repo_id,
                                            VAR_2->repo_version,
                                            VAR_2->effective_url,
                                            VAR_2->token,
                                            VAR_2->server_head_id,
                                            VAR_0,
                                            VAR_2->passwd,
                                            VAR_2->worktree,
                                            VAR_2->http_protocol_version,
                                            VAR_2->email,
                                            VAR_2->use_fileserver_port,
                                            VAR_2->repo_name,
                                            VAR_3);
    if (VAR_4 < 0)
        return -1;
    VAR_2->tx_id = FUNC_0(VAR_2->repo_id);
    return 0;
}
