
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_7__ {int http_tx_mgr; } ;
struct TYPE_6__ {int use_fileserver_port; int token; int effective_url; int repo_version; int repo_id; } ;
typedef TYPE_1__ CloneTask ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int ,int ,int ,int ,int ,int ,TYPE_1__*) ;
 TYPE_3__* VAR_2 ;
 int FUNC_1 (TYPE_1__*,int ) ;

__attribute__((used)) static void
FUNC_2 (CloneTask *VAR_3)
{
    int VAR_4 = FUNC_0 (VAR_2->http_tx_mgr,
                                                 VAR_3->repo_id,
                                                 VAR_3->repo_version,
                                                 VAR_3->effective_url,
                                                 VAR_3->token,
                                                 VAR_3->use_fileserver_port,
                                                 VAR_1,
                                                 VAR_3);
    if (VAR_4 < 0)
        FUNC_1 (VAR_3, VAR_0);
}
