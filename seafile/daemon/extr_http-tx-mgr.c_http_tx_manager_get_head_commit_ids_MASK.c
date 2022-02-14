
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int gint64 ;
typedef int gboolean ;
struct TYPE_8__ {TYPE_1__* http_tx_mgr; } ;
struct TYPE_7__ {int release; int * curl; } ;
struct TYPE_6__ {int * priv; } ;
typedef int HttpTxPriv ;
typedef int HttpTxManager ;
typedef int GList ;
typedef int GHashTable ;
typedef int ConnectionPool ;
typedef TYPE_2__ Connection ;
typedef int CURL ;


 int VAR_0 ;
 int VAR_1 ;
 TYPE_2__* FUNC_0 (int *) ;
 int FUNC_1 (int *,TYPE_2__*) ;
 int * FUNC_2 (int *,char const*) ;
 int FUNC_3 (char*) ;
 int FUNC_4 (char*) ;
 char* FUNC_5 (char*,char const*) ;
 scalar_t__ FUNC_6 (int *,char*,int *,char*,int ,int*,char**,int *,int ,int *) ;
 int * FUNC_7 (char*,int ) ;
 char* FUNC_8 (int *) ;
 TYPE_3__* VAR_2 ;
 int FUNC_9 (char*,char const*,...) ;
 int FUNC_10 (char*) ;

GHashTable *
FUNC_11 (HttpTxManager *VAR_3,
                                     const char *VAR_4,
                                     gboolean VAR_5,
                                     GList *VAR_6)
{
    HttpTxPriv *VAR_7 = VAR_2->http_tx_mgr->priv;
    ConnectionPool *VAR_8;
    Connection *VAR_9;
    CURL *VAR_10;
    char *VAR_11;
    char *VAR_12 = ((void*)0);
    gint64 VAR_13;
    int VAR_14;
    char *VAR_15 = ((void*)0);
    gint64 VAR_16;
    GHashTable *VAR_17 = ((void*)0);

    VAR_8 = FUNC_2 (VAR_7, VAR_4);
    if (!VAR_8) {
        FUNC_9 ("Failed to create connection pool for host %s.\n", VAR_4);
        return ((void*)0);
    }

    VAR_9 = FUNC_0 (VAR_8);
    if (!VAR_9) {
        FUNC_9 ("Failed to get connection to host %s.\n", VAR_4);
        return ((void*)0);
    }

    VAR_10 = VAR_9->curl;

    if (!VAR_5)
        VAR_11 = FUNC_5 ("%s/seafhttp/repo/head-commits-multi/", VAR_4);
    else
        VAR_11 = FUNC_5 ("%s/repo/head-commits-multi/", VAR_4);

    VAR_12 = FUNC_8 (VAR_6);
    VAR_13 = FUNC_10(VAR_12);

    if (FUNC_6 (VAR_10, VAR_11, ((void*)0), VAR_12, VAR_13,
                   &VAR_14, &VAR_15, &VAR_16, VAR_1, ((void*)0)) < 0) {
        VAR_9->release = VAR_1;
        goto out;
    }

    if (VAR_14 != VAR_0) {
        FUNC_9 ("Bad response code for POST %s: %d\n", VAR_11, VAR_14);
        goto out;
    }

    VAR_17 = FUNC_7 (VAR_15, VAR_16);

out:
    FUNC_4 (VAR_11);
    FUNC_1 (VAR_8, VAR_9);

    FUNC_3 (VAR_12);
    FUNC_4 (VAR_15);
    return VAR_17;
}
