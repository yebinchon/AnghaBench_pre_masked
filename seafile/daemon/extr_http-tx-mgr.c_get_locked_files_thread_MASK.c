
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
struct TYPE_10__ {void* release; int * curl; } ;
struct TYPE_9__ {int requests; void* success; int host; int use_fileserver_port; } ;
struct TYPE_8__ {int * priv; } ;
typedef int HttpTxPriv ;
typedef TYPE_2__ GetLockedFilesData ;
typedef int GDestroyNotify ;
typedef int ConnectionPool ;
typedef TYPE_3__ Connection ;
typedef int CURL ;


 int VAR_0 ;
 void* VAR_1 ;
 char* FUNC_0 (int ) ;
 TYPE_3__* FUNC_1 (int *) ;
 int FUNC_2 (int *,TYPE_3__*) ;
 int * FUNC_3 (int *,int ) ;
 int FUNC_4 (char*) ;
 int FUNC_5 (int ,int ) ;
 char* FUNC_6 (char*,int ) ;
 scalar_t__ VAR_2 ;
 scalar_t__ FUNC_7 (int *,char*,int *,char*,int ,int*,char**,int *,void*,int *) ;
 scalar_t__ FUNC_8 (char*,int ,TYPE_2__*) ;
 TYPE_4__* VAR_3 ;
 int FUNC_9 (char*,char*,...) ;
 int FUNC_10 (char*) ;

__attribute__((used)) static void *
FUNC_11 (void *VAR_4)
{
    GetLockedFilesData *VAR_5 = VAR_4;
    HttpTxPriv *VAR_6 = VAR_3->http_tx_mgr->priv;
    ConnectionPool *VAR_7;
    Connection *VAR_8;
    CURL *VAR_9;
    char *VAR_10;
    char *VAR_11 = ((void*)0);
    int VAR_12;
    char *VAR_13 = ((void*)0);
    gint64 VAR_14;

    VAR_7 = FUNC_3 (VAR_6, VAR_5->host);
    if (!VAR_7) {
        FUNC_9 ("Failed to create connection pool for host %s.\n", VAR_5->host);
        return VAR_4;
    }

    VAR_8 = FUNC_1 (VAR_7);
    if (!VAR_8) {
        FUNC_9 ("Failed to get connection to host %s.\n", VAR_5->host);
        return VAR_4;
    }

    VAR_9 = VAR_8->curl;

    if (!VAR_5->use_fileserver_port)
        VAR_10 = FUNC_6 ("%s/seafhttp/repo/locked-files", VAR_5->host);
    else
        VAR_10 = FUNC_6 ("%s/repo/locked-files", VAR_5->host);

    VAR_11 = FUNC_0 (VAR_5->requests);
    if (!VAR_11)
        goto out;

    if (FUNC_7 (VAR_9, VAR_10, ((void*)0), VAR_11, FUNC_10(VAR_11),
                   &VAR_12, &VAR_13, &VAR_14, VAR_1, ((void*)0)) < 0) {
        VAR_8->release = VAR_1;
        goto out;
    }

    if (VAR_12 == VAR_0) {
        if (FUNC_8 (VAR_13, VAR_14, VAR_5) < 0)
            goto out;
        VAR_5->success = VAR_1;
    } else {
        FUNC_9 ("Bad response code for GET %s: %d.\n", VAR_10, VAR_12);
    }

out:
    FUNC_5 (VAR_5->requests, (GDestroyNotify)VAR_2);

    FUNC_4 (VAR_10);
    FUNC_4 (VAR_11);
    FUNC_4 (VAR_13);
    FUNC_2 (VAR_7, VAR_8);
    return VAR_4;
}
