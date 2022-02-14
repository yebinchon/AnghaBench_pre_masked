
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef int gint64 ;
struct TYPE_9__ {int release; int * curl; } ;
struct TYPE_8__ {int token; int head; int repo_id; int host; int use_fileserver_port; } ;
typedef TYPE_1__ HttpTxTask ;
typedef TYPE_2__ Connection ;
typedef int CURL ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (char*) ;
 char* FUNC_2 (int ,int ) ;
 char* FUNC_3 (char*,int ,int ,int ) ;
 int VAR_3 ;
 int FUNC_4 (TYPE_1__*,int) ;
 int FUNC_5 (TYPE_1__*,int) ;
 scalar_t__ FUNC_6 (int *,char*,int ,int *,int ,int *,int *,int*,char**,int *,int ,int*) ;
 int FUNC_7 (char*,char*,int ) ;
 int FUNC_8 (TYPE_1__*,char*) ;
 int FUNC_9 (char*,char*,...) ;

__attribute__((used)) static int
FUNC_10 (HttpTxTask *VAR_4, Connection *VAR_5)
{
    CURL *VAR_6;
    char *VAR_7;
    int VAR_8;
    char *VAR_9;
    char *VAR_10 = ((void*)0);
    gint64 VAR_11;
    int VAR_12 = 0;

    VAR_6 = VAR_5->curl;

    if (!VAR_4->use_fileserver_port)
        VAR_7 = FUNC_3 ("%s/seafhttp/repo/%s/commit/HEAD/?head=%s",
                               VAR_4->host, VAR_4->repo_id, VAR_4->head);
    else
        VAR_7 = FUNC_3 ("%s/repo/%s/commit/HEAD/?head=%s",
                               VAR_4->host, VAR_4->repo_id, VAR_4->head);

    int VAR_13;
    if (FUNC_6 (VAR_6, VAR_7, VAR_4->token,
                  ((void*)0), 0,
                  ((void*)0), ((void*)0),
                  &VAR_8, &VAR_9, &VAR_11, VAR_2, &VAR_13) < 0) {
        VAR_5->release = VAR_2;
        FUNC_4 (VAR_4, VAR_13);
        VAR_12 = -1;
        goto out;
    }

    if (VAR_8 != VAR_1) {
        FUNC_9 ("Bad response code for PUT %s: %d.\n", VAR_7, VAR_8);
        FUNC_5 (VAR_4, VAR_8);

        if (VAR_8 == VAR_0) {
            VAR_10 = FUNC_2 (VAR_3, VAR_11 + 1);
            FUNC_7 (VAR_10, VAR_9, VAR_11);
            FUNC_9 ("%s\n", VAR_10);
            FUNC_8 (VAR_4, VAR_10);
            FUNC_1 (VAR_10);
        }

        VAR_12 = -1;
    }

out:
    FUNC_1 (VAR_7);
    FUNC_1 (VAR_9);
    FUNC_0 (VAR_6);

    return VAR_12;
}
