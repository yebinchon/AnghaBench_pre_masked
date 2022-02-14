
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef int gint64 ;
struct TYPE_12__ {TYPE_1__* commit_mgr; } ;
struct TYPE_11__ {int release; int * curl; } ;
struct TYPE_10__ {int repo_id; char* head; int error; int repo_version; int token; int host; int use_fileserver_port; } ;
struct TYPE_9__ {int obj_store; } ;
typedef TYPE_2__ HttpTxTask ;
typedef TYPE_3__ Connection ;
typedef int CURL ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (char*) ;
 char* FUNC_2 (char*,int ,int,char*) ;
 int FUNC_3 (TYPE_2__*,int) ;
 int FUNC_4 (TYPE_2__*,int) ;
 scalar_t__ FUNC_5 (int *,char*,int ,int*,char**,int *,int *,int *,int ,int*) ;
 TYPE_4__* VAR_4 ;
 int FUNC_6 (int ,int,int ,char*,char*,int ,int ) ;
 int FUNC_7 (char*,char*,int) ;

__attribute__((used)) static int
FUNC_8 (HttpTxTask *VAR_5, Connection *VAR_6)
{
    CURL *VAR_7;
    char *VAR_8;
    int VAR_9;
    char *VAR_10 = ((void*)0);
    gint64 VAR_11;
    int VAR_12 = 0;

    VAR_7 = VAR_6->curl;

    if (!VAR_5->use_fileserver_port)
        VAR_8 = FUNC_2 ("%s/seafhttp/repo/%s/commit/%s",
                               VAR_5->host, VAR_5->repo_id, VAR_5->head);
    else
        VAR_8 = FUNC_2 ("%s/repo/%s/commit/%s",
                               VAR_5->host, VAR_5->repo_id, VAR_5->head);

    int VAR_13;
    if (FUNC_5 (VAR_7, VAR_8, VAR_5->token, &VAR_9,
                  &VAR_10, &VAR_11,
                  ((void*)0), ((void*)0), VAR_3, &VAR_13) < 0) {
        VAR_6->release = VAR_3;
        FUNC_3 (VAR_5, VAR_13);
        VAR_12 = -1;
        goto out;
    }

    if (VAR_9 != VAR_1) {
        FUNC_7 ("Bad response code for GET %s: %d.\n", VAR_8, VAR_9);
        FUNC_4 (VAR_5, VAR_9);
        VAR_12 = -1;
        goto out;
    }

    int VAR_14 = FUNC_6 (VAR_4->commit_mgr->obj_store,
                                       VAR_5->repo_id, VAR_5->repo_version,
                                       VAR_5->head,
                                       VAR_10,
                                       VAR_11,
                                       VAR_0);
    if (VAR_14 < 0) {
        FUNC_7 ("Failed to save commit %s in repo %.8s.\n",
                      VAR_5->head, VAR_5->repo_id);
        VAR_5->error = VAR_2;
        VAR_12 = -1;
    }

out:
    FUNC_1 (VAR_8);
    FUNC_1 (VAR_10);
    FUNC_0 (VAR_7);

    return VAR_12;
}
