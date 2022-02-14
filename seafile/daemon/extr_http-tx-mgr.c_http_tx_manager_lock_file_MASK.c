
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int gboolean ;
struct TYPE_8__ {TYPE_1__* http_tx_mgr; } ;
struct TYPE_7__ {int release; int * curl; } ;
struct TYPE_6__ {int * priv; } ;
typedef int HttpTxPriv ;
typedef int HttpTxManager ;
typedef int ConnectionPool ;
typedef TYPE_2__ Connection ;
typedef int CURL ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 TYPE_2__* FUNC_0 (int *) ;
 int FUNC_1 (int *,TYPE_2__*) ;
 int * FUNC_2 (int *,char const*) ;
 int FUNC_3 (char*) ;
 char* FUNC_4 (char*,char const*,char const*,char*) ;
 char* FUNC_5 (char const*,int *,int ) ;
 scalar_t__ FUNC_6 (int *,char*,char const*,int *,int ,int *,int *,int*,int *,int *,int ,int *) ;
 TYPE_3__* VAR_3 ;
 int FUNC_7 (char*,char const*,...) ;

int
FUNC_8 (HttpTxManager *VAR_4,
                           const char *VAR_5,
                           gboolean VAR_6,
                           const char *VAR_7,
                           const char *VAR_8,
                           const char *VAR_9)
{
    HttpTxPriv *VAR_10 = VAR_3->http_tx_mgr->priv;
    ConnectionPool *VAR_11;
    Connection *VAR_12;
    CURL *VAR_13;
    char *VAR_14;
    int VAR_15;
    int VAR_16 = 0;

    VAR_11 = FUNC_2 (VAR_10, VAR_5);
    if (!VAR_11) {
        FUNC_7 ("Failed to create connection pool for host %s.\n", VAR_5);
        return -1;
    }

    VAR_12 = FUNC_0 (VAR_11);
    if (!VAR_12) {
        FUNC_7 ("Failed to get connection to host %s.\n", VAR_5);
        return -1;
    }

    VAR_13 = VAR_12->curl;

    char *VAR_17 = FUNC_5(VAR_9, ((void*)0), VAR_0);
    if (!VAR_6)
        VAR_14 = FUNC_4 ("%s/seafhttp/repo/%s/lock-file?p=%s", VAR_5, VAR_8, VAR_17);
    else
        VAR_14 = FUNC_4 ("%s/repo/%s/lock-file?p=%s", VAR_5, VAR_8, VAR_17);
    FUNC_3 (VAR_17);

    if (FUNC_6 (VAR_13, VAR_14, VAR_7, ((void*)0), 0, ((void*)0), ((void*)0),
                  &VAR_15, ((void*)0), ((void*)0), VAR_2, ((void*)0)) < 0) {
        VAR_12->release = VAR_2;
        VAR_16 = -1;
        goto out;
    }

    if (VAR_15 != VAR_1) {
        FUNC_7 ("Bad response code for PUT %s: %d.\n", VAR_14, VAR_15);
        VAR_16 = -1;
    }

out:
    FUNC_3 (VAR_14);
    FUNC_1 (VAR_11, VAR_12);
    return VAR_16;
}
