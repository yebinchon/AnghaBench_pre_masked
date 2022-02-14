
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_15__ TYPE_5__ ;
typedef struct TYPE_14__ TYPE_4__ ;
typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


typedef int gint64 ;
struct TYPE_15__ {TYPE_1__* http_tx_mgr; } ;
struct TYPE_14__ {void* release; int * curl; } ;
struct TYPE_13__ {scalar_t__ data; struct TYPE_13__* next; } ;
struct TYPE_12__ {TYPE_3__* requests; void* success; int host; int use_fileserver_port; } ;
struct TYPE_11__ {int * priv; } ;
typedef int HttpTxPriv ;
typedef int HttpFolderPermReq ;
typedef TYPE_2__ GetFolderPermsData ;
typedef TYPE_3__ GList ;
typedef int ConnectionPool ;
typedef TYPE_4__ Connection ;
typedef int CURL ;


 int VAR_0 ;
 void* VAR_1 ;
 char* FUNC_0 (TYPE_3__*) ;
 TYPE_4__* FUNC_1 (int *) ;
 int FUNC_2 (int *,TYPE_4__*) ;
 int * FUNC_3 (int *,int ) ;
 int FUNC_4 (char*) ;
 int FUNC_5 (TYPE_3__*) ;
 char* FUNC_6 (char*,int ) ;
 int FUNC_7 (int *) ;
 scalar_t__ FUNC_8 (int *,char*,int *,char*,int ,int*,char**,int *,void*,int *) ;
 scalar_t__ FUNC_9 (char*,int ,TYPE_2__*) ;
 TYPE_5__* VAR_2 ;
 int FUNC_10 (char*,char*,...) ;
 int FUNC_11 (char*) ;

__attribute__((used)) static void *
FUNC_12 (void *VAR_3)
{
    GetFolderPermsData *VAR_4 = VAR_3;
    HttpTxPriv *VAR_5 = VAR_2->http_tx_mgr->priv;
    ConnectionPool *VAR_6;
    Connection *VAR_7;
    CURL *VAR_8;
    char *VAR_9;
    char *VAR_10 = ((void*)0);
    int VAR_11;
    char *VAR_12 = ((void*)0);
    gint64 VAR_13;
    GList *VAR_14;

    VAR_6 = FUNC_3 (VAR_5, VAR_4->host);
    if (!VAR_6) {
        FUNC_10 ("Failed to create connection pool for host %s.\n", VAR_4->host);
        return VAR_3;
    }

    VAR_7 = FUNC_1 (VAR_6);
    if (!VAR_7) {
        FUNC_10 ("Failed to get connection to host %s.\n", VAR_4->host);
        return VAR_3;
    }

    VAR_8 = VAR_7->curl;

    if (!VAR_4->use_fileserver_port)
        VAR_9 = FUNC_6 ("%s/seafhttp/repo/folder-perm", VAR_4->host);
    else
        VAR_9 = FUNC_6 ("%s/repo/folder-perm", VAR_4->host);

    VAR_10 = FUNC_0 (VAR_4->requests);
    if (!VAR_10)
        goto out;

    if (FUNC_8 (VAR_8, VAR_9, ((void*)0), VAR_10, FUNC_11(VAR_10),
                   &VAR_11, &VAR_12, &VAR_13, VAR_1, ((void*)0)) < 0) {
        VAR_7->release = VAR_1;
        goto out;
    }

    if (VAR_11 == VAR_0) {
        if (FUNC_9 (VAR_12, VAR_13, VAR_4) < 0)
            goto out;
        VAR_4->success = VAR_1;
    } else {
        FUNC_10 ("Bad response code for GET %s: %d.\n", VAR_9, VAR_11);
    }

out:
    for (VAR_14 = VAR_4->requests; VAR_14; VAR_14 = VAR_14->next)
        FUNC_7 ((HttpFolderPermReq *)VAR_14->data);
    FUNC_5 (VAR_4->requests);

    FUNC_4 (VAR_9);
    FUNC_4 (VAR_10);
    FUNC_4 (VAR_12);
    FUNC_2 (VAR_6, VAR_7);
    return VAR_3;
}
