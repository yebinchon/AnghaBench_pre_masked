
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_4__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


typedef int json_t ;
struct TYPE_10__ {int text; } ;
typedef TYPE_1__ json_error_t ;
typedef int gint64 ;
struct TYPE_13__ {int client_id; scalar_t__ client_name; } ;
struct TYPE_12__ {int release; int * curl; } ;
struct TYPE_11__ {int error; int repo_name; int repo_id; int token; int host; scalar_t__ use_fileserver_port; int type; } ;
typedef TYPE_2__ HttpTxTask ;
typedef TYPE_3__ Connection ;
typedef int CURL ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (char*) ;
 scalar_t__ FUNC_2 (char const*,char*) ;
 char* FUNC_3 (char*,int ,char const*,int ,char const*,...) ;
 char* FUNC_4 (scalar_t__,int *,int ) ;
 int FUNC_5 (TYPE_2__*,int) ;
 int FUNC_6 (TYPE_2__*,int) ;
 scalar_t__ FUNC_7 (int *,char*,int ,int*,char**,int *,int *,int *,int ,int*) ;
 int FUNC_8 (int *) ;
 int * FUNC_9 (char*,int ,int ,TYPE_1__*) ;
 int * FUNC_10 (int *,char*) ;
 char* FUNC_11 (int *) ;
 TYPE_4__* VAR_8 ;
 int FUNC_12 (int ,int ,char const*,int ) ;
 int FUNC_13 (char*,char*,...) ;

__attribute__((used)) static int
FUNC_14 (HttpTxTask *VAR_9, Connection *VAR_10)
{
    CURL *VAR_11;
    char *VAR_12;
    int VAR_13;
    char *VAR_14 = ((void*)0);
    gint64 VAR_15;
    int VAR_16 = 0;
    json_t *VAR_17 = ((void*)0), *VAR_18 = ((void*)0), *VAR_19 = ((void*)0);
    const char *VAR_20 = ((void*)0), *VAR_21 = ((void*)0);
    json_error_t VAR_22;

    VAR_11 = VAR_10->curl;

    const char *VAR_23 = (VAR_9->type == VAR_3) ? "download" : "upload";
    const char *VAR_24 = (VAR_9->use_fileserver_port) ? "" : "seafhttp/";
    if (VAR_8->client_name) {
        char *VAR_25 = FUNC_4 (VAR_8->client_name,
                                                 ((void*)0), VAR_0);
        VAR_12 = FUNC_3 ("%s/%srepo/%s/permission-check/?op=%s"
                               "&client_id=%s&client_name=%s",
                               VAR_9->host, VAR_24, VAR_9->repo_id, VAR_23,
                               VAR_8->client_id, VAR_25);
        FUNC_1 (VAR_25);
    } else {
        VAR_12 = FUNC_3 ("%s/%srepo/%s/permission-check/?op=%s",
                               VAR_9->host, VAR_24, VAR_9->repo_id, VAR_23);
    }

    int VAR_26;
    if (FUNC_7 (VAR_11, VAR_12, VAR_9->token, &VAR_13, &VAR_14, &VAR_15, ((void*)0), ((void*)0), VAR_7, &VAR_26) < 0) {
        VAR_10->release = VAR_7;
        FUNC_5 (VAR_9, VAR_26);
        VAR_16 = -1;
        goto out;
    }

    if (VAR_13 != VAR_2) {
        FUNC_13 ("Bad response code for GET %s: %d.\n", VAR_12, VAR_13);

        if (VAR_13 != VAR_1 || !VAR_14) {
            FUNC_6 (VAR_9, VAR_13);
            VAR_16 = -1;
            goto out;
        }

        VAR_17 = FUNC_9 (VAR_14, VAR_15, 0 ,&VAR_22);
        if (!VAR_17) {
            FUNC_13 ("Parse check permission response failed: %s.\n", VAR_22.text);
            FUNC_6 (VAR_9, VAR_13);
            FUNC_8 (VAR_17);
            VAR_16 = -1;
            goto out;
        }

        VAR_18 = FUNC_10 (VAR_17, "reason");
        if (!VAR_18) {
            FUNC_6 (VAR_9, VAR_13);
            FUNC_8 (VAR_17);
            VAR_16 = -1;
            goto out;
        }

        VAR_20 = FUNC_11 (VAR_18);
        if (FUNC_2 (VAR_20, "no write permission") == 0) {
            VAR_9->error = VAR_5;
        } else if (FUNC_2 (VAR_20, "unsyncable share permission") == 0) {
            VAR_9->error = VAR_6;

            VAR_19 = FUNC_10 (VAR_17, "unsyncable_path");
            if (!VAR_19) {
                FUNC_8 (VAR_17);
                VAR_16 = -1;
                goto out;
            }

            VAR_21 = FUNC_11 (VAR_19);
            if (VAR_21)
                FUNC_12 (VAR_9->repo_id, VAR_9->repo_name,
                                                     VAR_21,
                                                     VAR_6);
        } else {
            VAR_9->error = VAR_4;
        }

        VAR_16 = -1;
    }

out:
    FUNC_1 (VAR_12);
    FUNC_1 (VAR_14);
    FUNC_0 (VAR_11);

    return VAR_16;
}
