
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_6__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_12__ {int fs_mgr; TYPE_1__* http_tx_mgr; } ;
struct TYPE_11__ {scalar_t__ state; void* error; int host; int repo_id; int repo_version; } ;
struct TYPE_10__ {int n_blocks; char** blk_sha1s; } ;
struct TYPE_9__ {int * priv; } ;
typedef TYPE_2__ Seafile ;
typedef TYPE_3__ HttpTxTask ;
typedef int HttpTxPriv ;
typedef int ConnectionPool ;
typedef int Connection ;


 scalar_t__ VAR_0 ;
 void* VAR_1 ;
 int * FUNC_0 (int *) ;
 int FUNC_1 (int *,int *) ;
 int * FUNC_2 (int *,int ) ;
 int FUNC_3 (TYPE_3__*,int *,char*) ;
 TYPE_6__* VAR_2 ;
 TYPE_2__* FUNC_4 (int ,int ,int ,char const*) ;
 int FUNC_5 (char*,char const*,...) ;
 int FUNC_6 (TYPE_2__*) ;

int
FUNC_7 (HttpTxTask *VAR_3, const char *VAR_4)
{
    Seafile *VAR_5;
    HttpTxPriv *VAR_6 = VAR_2->http_tx_mgr->priv;
    ConnectionPool *VAR_7;
    Connection *VAR_8;
    int VAR_9 = 0;

    VAR_5 = FUNC_4 (VAR_2->fs_mgr,
                                        VAR_3->repo_id,
                                        VAR_3->repo_version,
                                        VAR_4);
    if (!VAR_5) {
        FUNC_5 ("Failed to find seafile object %s in repo %.8s.\n",
                      VAR_4, VAR_3->repo_id);
        return -1;
    }

    VAR_7 = FUNC_2 (VAR_6, VAR_3->host);
    if (!VAR_7) {
        FUNC_5 ("Failed to create connection pool for host %s.\n", VAR_3->host);
        VAR_3->error = VAR_1;
        FUNC_6 (VAR_5);
        return -1;
    }

    VAR_8 = FUNC_0 (VAR_7);
    if (!VAR_8) {
        FUNC_5 ("Failed to get connection to host %s.\n", VAR_3->host);
        VAR_3->error = VAR_1;
        FUNC_6 (VAR_5);
        return -1;
    }

    int VAR_10;
    char *VAR_11;
    for (VAR_10 = 0; VAR_10 < VAR_5->n_blocks; ++VAR_10) {
        VAR_11 = VAR_5->blk_sha1s[VAR_10];
        VAR_9 = FUNC_3 (VAR_3, VAR_8, VAR_11);
        if (VAR_9 < 0 || VAR_3->state == VAR_0)
            break;
    }

    FUNC_1 (VAR_7, VAR_8);

    FUNC_6 (VAR_5);

    return VAR_9;
}
