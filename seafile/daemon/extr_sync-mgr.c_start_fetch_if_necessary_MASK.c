
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_7__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_12__ {int http_tx_mgr; } ;
struct TYPE_11__ {int message; } ;
struct TYPE_10__ {int id; int name; int use_fileserver_port; int email; int token; int effective_host; int version; } ;
struct TYPE_9__ {int tx_id; int http_version; TYPE_2__* repo; } ;
typedef TYPE_1__ SyncTask ;
typedef TYPE_2__ SeafRepo ;
typedef TYPE_3__ GError ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int ,int ,int ,int ,int ,char const*,int ,int *,int *,int ,int ,int ,int ,TYPE_3__**) ;
 TYPE_7__* VAR_3 ;
 int FUNC_2 (char*,int ) ;
 int FUNC_3 (TYPE_1__*,int ) ;
 int FUNC_4 (TYPE_1__*,int ) ;

__attribute__((used)) static void
FUNC_5 (SyncTask *VAR_4, const char *VAR_5)
{
    GError *VAR_6 = ((void*)0);
    SeafRepo *VAR_7 = VAR_4->repo;

    if (FUNC_1 (VAR_3->http_tx_mgr,
                                      VAR_7->id,
                                      VAR_7->version,
                                      VAR_7->effective_host,
                                      VAR_7->token,
                                      VAR_5,
                                      VAR_0,
                                      ((void*)0), ((void*)0),
                                      VAR_4->http_version,
                                      VAR_7->email,
                                      VAR_7->use_fileserver_port,
                                      VAR_7->name,
                                      &VAR_6) < 0) {
        FUNC_2 ("Failed to start http download: %s.\n", VAR_6->message);
        FUNC_3 (VAR_4, VAR_1);
        return;
    }
    VAR_4->tx_id = FUNC_0(VAR_7->id);

    FUNC_4 (VAR_4, VAR_2);
}
