
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef scalar_t__ gint64 ;
struct TYPE_11__ {TYPE_1__* http_tx_mgr; } ;
struct TYPE_10__ {int error_code; void* not_supported; void* success; int host; int use_fileserver_port; } ;
struct TYPE_9__ {void* release; int * curl; } ;
struct TYPE_8__ {int * priv; } ;
typedef int HttpTxPriv ;
typedef int ConnectionPool ;
typedef TYPE_2__ Connection ;
typedef TYPE_3__ CheckProtocolData ;
typedef int CURL ;


 int VAR_0 ;
 void* VAR_1 ;
 TYPE_2__* FUNC_0 (int *) ;
 int FUNC_1 (int *,TYPE_2__*) ;
 int FUNC_2 (int) ;
 int * FUNC_3 (int *,int ) ;
 int FUNC_4 (char*) ;
 char* FUNC_5 (char*,int ) ;
 int FUNC_6 (int) ;
 scalar_t__ FUNC_7 (int *,char*,int *,int*,char**,scalar_t__*,int *,int *,void*,int*) ;
 scalar_t__ FUNC_8 (char*,scalar_t__,TYPE_3__*) ;
 TYPE_4__* VAR_2 ;
 int FUNC_9 (char*,char*,...) ;

__attribute__((used)) static void *
FUNC_10 (void *VAR_3)
{
    CheckProtocolData *VAR_4 = VAR_3;
    HttpTxPriv *VAR_5 = VAR_2->http_tx_mgr->priv;
    ConnectionPool *VAR_6;
    Connection *VAR_7;
    CURL *VAR_8;
    char *VAR_9;
    int VAR_10;
    char *VAR_11 = ((void*)0);
    gint64 VAR_12;

    VAR_6 = FUNC_3 (VAR_5, VAR_4->host);
    if (!VAR_6) {
        FUNC_9 ("Failed to create connection pool for host %s.\n", VAR_4->host);
        return VAR_3;
    }

    VAR_7 = FUNC_0 (VAR_6);
    if (!VAR_7) {
        FUNC_9 ("Failed to get connection to host %s.\n", VAR_4->host);
        return VAR_3;
    }

    VAR_8 = VAR_7->curl;

    if (!VAR_4->use_fileserver_port)
        VAR_9 = FUNC_5 ("%s/seafhttp/protocol-version", VAR_4->host);
    else
        VAR_9 = FUNC_5 ("%s/protocol-version", VAR_4->host);

    int VAR_13;
    if (FUNC_7 (VAR_8, VAR_9, ((void*)0), &VAR_10, &VAR_11, &VAR_12, ((void*)0), ((void*)0), VAR_1, &VAR_13) < 0) {
        VAR_7->release = VAR_1;
        VAR_4->error_code = FUNC_2 (VAR_13);
        goto out;
    }

    VAR_4->success = VAR_1;

    if (VAR_10 == VAR_0) {
        if (VAR_12 == 0)
            VAR_4->not_supported = VAR_1;
        else if (FUNC_8 (VAR_11, VAR_12, VAR_4) < 0)
            VAR_4->not_supported = VAR_1;
    } else {
        FUNC_9 ("Bad response code for GET %s: %d.\n", VAR_9, VAR_10);
        VAR_4->not_supported = VAR_1;
        VAR_4->error_code = FUNC_6 (VAR_10);
    }

out:
    FUNC_4 (VAR_9);
    FUNC_4 (VAR_11);
    FUNC_1 (VAR_6, VAR_7);

    return VAR_3;
}
