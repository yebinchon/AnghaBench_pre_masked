
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_6__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_12__ {TYPE_1__* commit_mgr; } ;
struct TYPE_11__ {int release; int * curl; } ;
struct TYPE_10__ {int token; int head; int repo_id; int host; int use_fileserver_port; int error; int repo_version; } ;
struct TYPE_9__ {int obj_store; } ;
typedef TYPE_2__ HttpTxTask ;
typedef TYPE_3__ Connection ;
typedef int CURL ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (char*) ;
 char* FUNC_2 (char*,int ,int ,int ) ;
 int FUNC_3 (TYPE_2__*,int) ;
 int FUNC_4 (TYPE_2__*,int) ;
 scalar_t__ FUNC_5 (int *,char*,int ,char*,int,int *,int *,int*,int *,int *,int ,int*) ;
 TYPE_6__* VAR_3 ;
 scalar_t__ FUNC_6 (int ,int ,int ,int ,void**,int*) ;
 int FUNC_7 (char*,char*,...) ;

__attribute__((used)) static int
FUNC_8 (HttpTxTask *VAR_4, Connection *VAR_5)
{
    CURL *VAR_6;
    char *VAR_7;
    int VAR_8;
    char *VAR_9;
    int VAR_10;
    int VAR_11 = 0;

    if (FUNC_6 (VAR_3->commit_mgr->obj_store,
                                 VAR_4->repo_id, VAR_4->repo_version,
                                 VAR_4->head, (void**)&VAR_9, &VAR_10) < 0) {
        FUNC_7 ("Failed to read commit %s.\n", VAR_4->head);
        VAR_4->error = VAR_1;
        return -1;
    }

    VAR_6 = VAR_5->curl;

    if (!VAR_4->use_fileserver_port)
        VAR_7 = FUNC_2 ("%s/seafhttp/repo/%s/commit/%s",
                               VAR_4->host, VAR_4->repo_id, VAR_4->head);
    else
        VAR_7 = FUNC_2 ("%s/repo/%s/commit/%s",
                               VAR_4->host, VAR_4->repo_id, VAR_4->head);

    int VAR_12;
    if (FUNC_5 (VAR_6, VAR_7, VAR_4->token,
                  VAR_9, VAR_10,
                  ((void*)0), ((void*)0),
                  &VAR_8, ((void*)0), ((void*)0), VAR_2, &VAR_12) < 0) {
        VAR_5->release = VAR_2;
        FUNC_3 (VAR_4, VAR_12);
        VAR_11 = -1;
        goto out;
    }

    if (VAR_8 != VAR_0) {
        FUNC_7 ("Bad response code for PUT %s: %d.\n", VAR_7, VAR_8);
        FUNC_4 (VAR_4, VAR_8);
        VAR_11 = -1;
    }

out:
    FUNC_1 (VAR_7);
    FUNC_0 (VAR_6);
    FUNC_1 (VAR_9);

    return VAR_11;
}
