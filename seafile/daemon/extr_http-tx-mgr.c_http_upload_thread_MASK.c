
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_23__ TYPE_3__ ;
typedef struct TYPE_22__ TYPE_2__ ;
typedef struct TYPE_21__ TYPE_1__ ;
typedef struct TYPE_20__ TYPE_12__ ;


typedef int gint64 ;
struct TYPE_23__ {scalar_t__ state; int repo_id; int host; int n_blocks; int use_fileserver_port; void* error; int head; } ;
struct TYPE_22__ {int commit_id; } ;
struct TYPE_21__ {int * priv; } ;
struct TYPE_20__ {int branch_mgr; TYPE_1__* http_tx_mgr; } ;
typedef TYPE_2__ SeafBranch ;
typedef TYPE_3__ HttpTxTask ;
typedef int HttpTxPriv ;
typedef int GList ;
typedef int GHashTable ;
typedef int ConnectionPool ;
typedef int Connection ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 void* VAR_6 ;
 void* VAR_7 ;
 scalar_t__ FUNC_0 (TYPE_3__*,int **) ;
 int * FUNC_1 (TYPE_3__*) ;
 scalar_t__ FUNC_2 (TYPE_3__*,int *,int *) ;
 scalar_t__ FUNC_3 (TYPE_3__*,int *) ;
 scalar_t__ FUNC_4 (TYPE_3__*,int *,int ) ;
 int * FUNC_5 (int *) ;
 int FUNC_6 (int *,int *) ;
 int * FUNC_7 (int *,int ) ;
 int FUNC_8 (char*) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (int *,int ,TYPE_3__*) ;
 int * FUNC_11 (int ,int ,int (*) (char*),int *) ;
 int FUNC_12 (int *) ;
 int VAR_8 ;
 int VAR_9 ;
 char* FUNC_13 (char*,int ,int ) ;
 int FUNC_14 (int ,int ,int) ;
 scalar_t__ FUNC_15 (TYPE_3__*,int *) ;
 TYPE_12__* VAR_10 ;
 TYPE_2__* FUNC_16 (int ,int ,char*) ;
 int FUNC_17 (TYPE_2__*) ;
 int FUNC_18 (char*,int ,int ,int ) ;
 int FUNC_19 (char*,int ,...) ;
 scalar_t__ FUNC_20 (TYPE_3__*,int *) ;
 scalar_t__ FUNC_21 (TYPE_3__*,int *,int **) ;
 int VAR_11 ;
 int VAR_12 ;
 int FUNC_22 (int *) ;
 int FUNC_23 (TYPE_3__*,scalar_t__,int ) ;
 scalar_t__ FUNC_24 (TYPE_3__*,int *) ;
 int FUNC_25 (TYPE_3__*) ;
 scalar_t__ FUNC_26 (TYPE_3__*,int *,char*,int **,int **) ;

__attribute__((used)) static void *
FUNC_27 (void *VAR_13)
{
    HttpTxTask *VAR_14 = VAR_13;
    HttpTxPriv *VAR_15 = VAR_10->http_tx_mgr->priv;
    ConnectionPool *VAR_16;
    Connection *VAR_17 = ((void*)0);
    char *VAR_18 = ((void*)0);
    GList *VAR_19 = ((void*)0), *VAR_20 = ((void*)0);
    GList *VAR_21 = ((void*)0), *VAR_22 = ((void*)0);
    GHashTable *VAR_23 = ((void*)0);

    SeafBranch *VAR_24 = FUNC_16 (VAR_10->branch_mgr,
                                                        VAR_14->repo_id, "local");
    if (!VAR_24) {
        FUNC_19 ("Failed to get branch local of repo %.8s.\n", VAR_14->repo_id);
        VAR_14->error = VAR_6;
        return ((void*)0);
    }
    FUNC_14 (VAR_14->head, VAR_24->commit_id, 40);
    FUNC_17 (VAR_24);

    VAR_16 = FUNC_7 (VAR_15, VAR_14->host);
    if (!VAR_16) {
        FUNC_19 ("Failed to create connection pool for host %s.\n", VAR_14->host);
        VAR_14->error = VAR_7;
        goto out;
    }

    VAR_17 = FUNC_5 (VAR_16);
    if (!VAR_17) {
        FUNC_19 ("Failed to get connection to host %s.\n", VAR_14->host);
        VAR_14->error = VAR_7;
        goto out;
    }




    FUNC_23 (VAR_14, VAR_14->state, VAR_1);

    gint64 VAR_25 = 0;
    VAR_23 = FUNC_11 (VAR_9, VAR_8, FUNC_8, ((void*)0));

    if (FUNC_2 (VAR_14, &VAR_25, VAR_23) < 0) {
        FUNC_19 ("Failed to calculate upload size delta for repo %s.\n",
                      VAR_14->repo_id);
        VAR_14->error = VAR_6;
        goto out;
    }

    FUNC_10 (VAR_23, VAR_12, VAR_14);

    if (FUNC_3 (VAR_14, VAR_17) < 0) {
        FUNC_19 ("Upload permission denied for repo %.8s on server %s.\n",
                      VAR_14->repo_id, VAR_14->host);
        goto out;
    }

    if (FUNC_4 (VAR_14, VAR_17, VAR_25) < 0) {
        FUNC_19 ("Not enough quota for repo %.8s on server %s.\n",
                      VAR_14->repo_id, VAR_14->host);
        goto out;
    }

    if (VAR_14->state == VAR_5)
        goto out;

    FUNC_23 (VAR_14, VAR_14->state, VAR_2);

    if (FUNC_20 (VAR_14, VAR_17) < 0) {
        FUNC_19 ("Failed to send head commit for repo %.8s.\n", VAR_14->repo_id);
        goto out;
    }

    if (VAR_14->state == VAR_5)
        goto out;

    FUNC_23 (VAR_14, VAR_14->state, VAR_3);

    VAR_19 = FUNC_1 (VAR_14);
    if (!VAR_19) {
        FUNC_19 ("Failed to calculate fs object list for repo %.8s.\n",
                      VAR_14->repo_id);
        VAR_14->error = VAR_6;
        goto out;
    }

    if (!VAR_14->use_fileserver_port)
        VAR_18 = FUNC_13 ("%s/seafhttp/repo/%s/check-fs/",
                               VAR_14->host, VAR_14->repo_id);
    else
        VAR_18 = FUNC_13 ("%s/repo/%s/check-fs/",
                               VAR_14->host, VAR_14->repo_id);

    while (VAR_19 != ((void*)0)) {
        if (FUNC_26 (VAR_14, VAR_17, VAR_18,
                                          &VAR_19, &VAR_20) < 0) {
            FUNC_19 ("Failed to check fs list for repo %.8s.\n", VAR_14->repo_id);
            goto out;
        }

        if (VAR_14->state == VAR_5)
            goto out;
    }
    FUNC_8 (VAR_18);
    VAR_18 = ((void*)0);

    while (VAR_20 != ((void*)0)) {
        if (FUNC_21 (VAR_14, VAR_17, &VAR_20) < 0) {
            FUNC_19 ("Failed to send fs objects for repo %.8s.\n", VAR_14->repo_id);
            goto out;
        }

        if (VAR_14->state == VAR_5)
            goto out;
    }

    FUNC_23 (VAR_14, VAR_14->state, VAR_0);

    if (FUNC_0 (VAR_14, &VAR_21) < 0) {
        FUNC_19 ("Failed to calculate block list for repo %.8s.\n",
                      VAR_14->repo_id);
        VAR_14->error = VAR_6;
        goto out;
    }

    if (!VAR_14->use_fileserver_port)
        VAR_18 = FUNC_13 ("%s/seafhttp/repo/%s/check-blocks/",
                               VAR_14->host, VAR_14->repo_id);
    else
        VAR_18 = FUNC_13 ("%s/repo/%s/check-blocks/",
                               VAR_14->host, VAR_14->repo_id);

    while (VAR_21 != ((void*)0)) {
        if (FUNC_26 (VAR_14, VAR_17, VAR_18,
                                          &VAR_21, &VAR_22) < 0) {
            FUNC_19 ("Failed to check block list for repo %.8s.\n",
                          VAR_14->repo_id);
            goto out;
        }

        if (VAR_14->state == VAR_5)
            goto out;
    }
    FUNC_8 (VAR_18);
    VAR_18 = ((void*)0);

    VAR_14->n_blocks = FUNC_12 (VAR_22);

    FUNC_18 ("%d blocks to send for %s:%s.\n",
                VAR_14->n_blocks, VAR_14->host, VAR_14->repo_id);

    if (FUNC_15(VAR_14, VAR_22) < 0 ||
        VAR_14->state == VAR_5)
        goto out;

    FUNC_23 (VAR_14, VAR_14->state, VAR_4);

    if (FUNC_24 (VAR_14, VAR_17) < 0) {
        FUNC_19 ("Failed to update branch of repo %.8s.\n", VAR_14->repo_id);
        goto out;
    }




    FUNC_25 (VAR_14);

    if (VAR_23 != ((void*)0))
        FUNC_10 (VAR_23, VAR_11, VAR_14);

out:
    FUNC_22 (VAR_19);
    FUNC_22 (VAR_20);
    FUNC_22 (VAR_21);
    FUNC_22 (VAR_22);

    if (VAR_23)
        FUNC_9 (VAR_23);

    FUNC_8 (VAR_18);

    FUNC_6 (VAR_16, VAR_17);

    return VAR_13;
}
