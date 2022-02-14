
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_10__ {int http_tx_mgr; } ;
struct TYPE_9__ {int use_fileserver_port; int token; int effective_host; int version; int id; } ;
struct TYPE_8__ {TYPE_2__* repo; } ;
typedef TYPE_1__ SyncTask ;
typedef TYPE_2__ SeafRepo ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,int ,int ,int ,int ,int ,int ,TYPE_1__*) ;
 TYPE_5__* VAR_3 ;
 int FUNC_1 (TYPE_1__*,int ) ;
 int FUNC_2 (TYPE_1__*,int ) ;

__attribute__((used)) static int
FUNC_3 (SyncTask *VAR_4)
{
    SeafRepo *VAR_5 = VAR_4->repo;

    int VAR_6 = FUNC_0 (VAR_3->http_tx_mgr,
                                                 VAR_5->id, VAR_5->version,
                                                 VAR_5->effective_host,
                                                 VAR_5->token,
                                                 VAR_5->use_fileserver_port,
                                                 VAR_2,
                                                 VAR_4);
    if (VAR_6 == 0)
        FUNC_2 (VAR_4, VAR_1);
    else if (VAR_6 < 0)
        FUNC_1 (VAR_4, VAR_0);

    return VAR_6;
}
