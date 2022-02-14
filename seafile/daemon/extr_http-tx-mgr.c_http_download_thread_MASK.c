
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_6__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


struct TYPE_13__ {int repo_mgr; TYPE_1__* http_tx_mgr; } ;
struct TYPE_12__ {scalar_t__ state; void* error; int head; int repo_id; int host; } ;
struct TYPE_11__ {int * priv; } ;
typedef TYPE_2__ HttpTxTask ;
typedef int HttpTxPriv ;
typedef int GList ;
typedef int ConnectionPool ;
typedef int Connection ;







 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 void* VAR_6 ;
 void* VAR_7 ;
 void* VAR_8 ;
 scalar_t__ FUNC_0 (TYPE_2__*,int *) ;
 int * FUNC_1 (int *) ;
 int FUNC_2 (int *,int *) ;
 int * FUNC_3 (int *,int ) ;
 scalar_t__ FUNC_4 (TYPE_2__*,int *) ;
 scalar_t__ FUNC_5 (TYPE_2__*,int *,int **) ;
 scalar_t__ FUNC_6 (TYPE_2__*,int *,int **) ;
 TYPE_6__* VAR_9 ;
 int FUNC_7 (TYPE_2__*,int ) ;
 int FUNC_8 (int ,int ,int ,int ) ;
 int FUNC_9 (char*,int ,...) ;
 int FUNC_10 (int *) ;
 int FUNC_11 (TYPE_2__*,scalar_t__,int ) ;
 int FUNC_12 (TYPE_2__*) ;

__attribute__((used)) static void *
FUNC_13 (void *VAR_10)
{
    HttpTxTask *VAR_11 = VAR_10;
    HttpTxPriv *VAR_12 = VAR_9->http_tx_mgr->priv;
    ConnectionPool *VAR_13;
    Connection *VAR_14 = ((void*)0);
    GList *VAR_15 = ((void*)0);

    VAR_13 = FUNC_3 (VAR_12, VAR_11->host);
    if (!VAR_13) {
        FUNC_9 ("Failed to create connection pool for host %s.\n", VAR_11->host);
        VAR_11->error = VAR_7;
        goto out;
    }

    VAR_14 = FUNC_1 (VAR_13);
    if (!VAR_14) {
        FUNC_9 ("Failed to get connection to host %s.\n", VAR_11->host);
        VAR_11->error = VAR_7;
        goto out;
    }




    FUNC_11 (VAR_11, VAR_11->state, VAR_1);

    if (FUNC_0 (VAR_11, VAR_14) < 0) {
        FUNC_9 ("Download permission denied for repo %.8s on server %s.\n",
                      VAR_11->repo_id, VAR_11->host);
        goto out;
    }

    if (VAR_11->state == VAR_4)
        goto out;

    FUNC_11 (VAR_11, VAR_11->state, VAR_2);

    if (FUNC_4 (VAR_11, VAR_14) < 0) {
        FUNC_9 ("Failed to get server head commit for repo %.8s on server %s.\n",
                      VAR_11->repo_id, VAR_11->host);
        goto out;
    }

    if (VAR_11->state == VAR_4)
        goto out;

    FUNC_11 (VAR_11, VAR_11->state, VAR_3);

    if (FUNC_6 (VAR_11, VAR_14, &VAR_15) < 0) {
        FUNC_9 ("Failed to get fs id list for repo %.8s on server %s.\n",
                      VAR_11->repo_id, VAR_11->host);
        goto out;
    }

    if (VAR_11->state == VAR_4)
        goto out;

    while (VAR_15 != ((void*)0)) {
        if (FUNC_5 (VAR_11, VAR_14, &VAR_15) < 0) {
            FUNC_9 ("Failed to get fs objects for repo %.8s on server %s.\n",
                          VAR_11->repo_id, VAR_11->host);
            goto out;
        }

        if (VAR_11->state == VAR_4)
            goto out;
    }

    FUNC_11 (VAR_11, VAR_11->state, VAR_0);




    FUNC_8 (VAR_9->repo_mgr,
                                         VAR_11->repo_id,
                                         VAR_5,
                                         VAR_11->head);

    int VAR_16 = FUNC_7 (VAR_11, VAR_11->head);
    switch (VAR_16) {
    case 129:
        break;
    case 132:
        goto out;
    case 131:
        VAR_11->error = VAR_8;
        goto out;
    case 128:
        goto out;
    case 130:
        VAR_11->error = VAR_6;
        goto out;
    }

    FUNC_12 (VAR_11);

out:
    FUNC_2 (VAR_13, VAR_14);
    FUNC_10 (VAR_15);
    return VAR_10;
}
