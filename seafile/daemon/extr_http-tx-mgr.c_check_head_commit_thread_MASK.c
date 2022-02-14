
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef int gint64 ;
struct TYPE_11__ {TYPE_1__* http_tx_mgr; } ;
struct TYPE_10__ {int error_code; void* success; void* is_deleted; int token; int repo_id; int host; int use_fileserver_port; } ;
struct TYPE_9__ {void* release; int * curl; } ;
struct TYPE_8__ {int * priv; } ;
typedef int HttpTxPriv ;
typedef int ConnectionPool ;
typedef TYPE_2__ Connection ;
typedef TYPE_3__ CheckHeadData ;
typedef int CURL ;


 int VAR_0 ;
 int VAR_1 ;
 void* VAR_2 ;
 TYPE_2__* FUNC_0 (int *) ;
 int FUNC_1 (int *,TYPE_2__*) ;
 int FUNC_2 (int) ;
 int * FUNC_3 (int *,int ) ;
 int FUNC_4 (char*) ;
 char* FUNC_5 (char*,int ,int ) ;
 int FUNC_6 (int) ;
 scalar_t__ FUNC_7 (int *,char*,int ,int*,char**,int *,int *,int *,void*,int*) ;
 scalar_t__ FUNC_8 (char*,int ,TYPE_3__*) ;
 TYPE_4__* VAR_3 ;
 int FUNC_9 (char*,char*,...) ;

__attribute__((used)) static void *
FUNC_10 (void *VAR_4)
{
    CheckHeadData *VAR_5 = VAR_4;
    HttpTxPriv *VAR_6 = VAR_3->http_tx_mgr->priv;
    ConnectionPool *VAR_7;
    Connection *VAR_8;
    CURL *VAR_9;
    char *VAR_10;
    int VAR_11;
    char *VAR_12 = ((void*)0);
    gint64 VAR_13;

    VAR_7 = FUNC_3 (VAR_6, VAR_5->host);
    if (!VAR_7) {
        FUNC_9 ("Failed to create connection pool for host %s.\n", VAR_5->host);
        return VAR_4;
    }

    VAR_8 = FUNC_0 (VAR_7);
    if (!VAR_8) {
        FUNC_9 ("Failed to get connection to host %s.\n", VAR_5->host);
        return VAR_4;
    }

    VAR_9 = VAR_8->curl;

    if (!VAR_5->use_fileserver_port)
        VAR_10 = FUNC_5 ("%s/seafhttp/repo/%s/commit/HEAD",
                               VAR_5->host, VAR_5->repo_id);
    else
        VAR_10 = FUNC_5 ("%s/repo/%s/commit/HEAD",
                               VAR_5->host, VAR_5->repo_id);

    int VAR_14;
    if (FUNC_7 (VAR_9, VAR_10, VAR_5->token, &VAR_11, &VAR_12, &VAR_13,
                  ((void*)0), ((void*)0), VAR_2, &VAR_14) < 0) {
        VAR_8->release = VAR_2;
        VAR_5->error_code = FUNC_2 (VAR_14);
        goto out;
    }

    if (VAR_11 == VAR_0) {
        if (FUNC_8 (VAR_12, VAR_13, VAR_5) < 0)
            goto out;
        VAR_5->success = VAR_2;
    } else if (VAR_11 == VAR_1) {
        VAR_5->is_deleted = VAR_2;
        VAR_5->success = VAR_2;
    } else {
        FUNC_9 ("Bad response code for GET %s: %d.\n", VAR_10, VAR_11);
        VAR_5->error_code = FUNC_6 (VAR_11);
    }

out:
    FUNC_4 (VAR_10);
    FUNC_4 (VAR_12);
    FUNC_1 (VAR_7, VAR_8);
    return VAR_4;
}
