
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_19__ TYPE_8__ ;
typedef struct TYPE_18__ TYPE_5__ ;
typedef struct TYPE_17__ TYPE_4__ ;
typedef struct TYPE_16__ TYPE_3__ ;
typedef struct TYPE_15__ TYPE_2__ ;
typedef struct TYPE_14__ TYPE_1__ ;


typedef int json_t ;
struct TYPE_14__ {int text; } ;
typedef TYPE_1__ json_error_t ;
typedef int gint64 ;
typedef int gboolean ;
struct TYPE_19__ {TYPE_5__* fs_mgr; int branch_mgr; } ;
struct TYPE_18__ {int obj_store; } ;
struct TYPE_17__ {int release; int * curl; } ;
struct TYPE_16__ {int n_fs_objs; int done_fs_objs; int repo_version; int repo_id; scalar_t__ is_clone; int host; int error; int token; int head; scalar_t__ use_fileserver_port; } ;
struct TYPE_15__ {int commit_id; } ;
typedef TYPE_2__ SeafBranch ;
typedef TYPE_3__ HttpTxTask ;
typedef int GList ;
typedef int GHashTable ;
typedef TYPE_4__ Connection ;
typedef int CURL ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (int *) ;
 scalar_t__ FUNC_3 (int *,char const*) ;
 int * FUNC_4 (int ,int ,int (*) (char*),int *) ;
 int FUNC_5 (int *,char*,char*) ;
 int * FUNC_6 (int *,char*) ;
 int VAR_4 ;
 int VAR_5 ;
 char* FUNC_7 (char const*) ;
 char* FUNC_8 (char*,int ,char const*,int ,int ,...) ;
 int FUNC_9 (TYPE_3__*,int) ;
 int FUNC_10 (TYPE_3__*,int) ;
 scalar_t__ FUNC_11 (int *,char*,int ,int*,char**,int *,int *,int *,int,int*) ;
 int * FUNC_12 (int *,int) ;
 size_t FUNC_13 (int *) ;
 int FUNC_14 (int *) ;
 int * FUNC_15 (char*,int ,int ,TYPE_1__*) ;
 char* FUNC_16 (int *) ;
 TYPE_8__* VAR_6 ;
 TYPE_2__* FUNC_17 (int ,int ,char*) ;
 int FUNC_18 (TYPE_2__*) ;
 int FUNC_19 (char*,size_t,int ,int ) ;
 int FUNC_20 (TYPE_5__*,int ,int ,char const*,int ,int *) ;
 int FUNC_21 (int ,int ,int ,char const*) ;
 int FUNC_22 (char*,...) ;
 int FUNC_23 (int *) ;

__attribute__((used)) static int
FUNC_24 (HttpTxTask *VAR_7, Connection *VAR_8, GList **VAR_9)
{
    SeafBranch *VAR_10;
    CURL *VAR_11;
    char *VAR_12 = ((void*)0);
    int VAR_13;
    char *VAR_14 = ((void*)0);
    gint64 VAR_15;
    int VAR_16 = 0;
    json_t *VAR_17;
    json_error_t VAR_18;
    const char *VAR_19;

    const char *VAR_20 = (VAR_7->use_fileserver_port) ? "" : "seafhttp/";

    if (!VAR_7->is_clone) {
        VAR_10 = FUNC_17 (VAR_6->branch_mgr,
                                                 VAR_7->repo_id,
                                                 "master");
        if (!VAR_10) {
            FUNC_22 ("Failed to get branch master for repo %.8s.\n",
                          VAR_7->repo_id);
            return -1;
        }

        VAR_12 = FUNC_8 ("%s/%srepo/%s/fs-id-list/"
                               "?server-head=%s&client-head=%s",
                               VAR_7->host, VAR_20, VAR_7->repo_id,
                               VAR_7->head, VAR_10->commit_id);

        FUNC_18 (VAR_10);
    } else {
        VAR_12 = FUNC_8 ("%s/%srepo/%s/fs-id-list/?server-head=%s",
                               VAR_7->host, VAR_20, VAR_7->repo_id, VAR_7->head);
    }

    VAR_11 = VAR_8->curl;

    int VAR_21;
    if (FUNC_11 (VAR_11, VAR_12, VAR_7->token, &VAR_13,
                  &VAR_14, &VAR_15,
                  ((void*)0), ((void*)0), (!VAR_7->is_clone), &VAR_21) < 0) {
        VAR_8->release = VAR_3;
        FUNC_9 (VAR_7, VAR_21);
        VAR_16 = -1;
        goto out;
    }

    if (VAR_13 != VAR_1) {
        FUNC_22 ("Bad response code for GET %s: %d.\n", VAR_12, VAR_13);
        FUNC_10 (VAR_7, VAR_13);
        VAR_16 = -1;
        goto out;
    }

    VAR_17 = FUNC_15 (VAR_14, VAR_15, 0, &VAR_18);
    if (!VAR_17) {
        FUNC_22 ("Invalid JSON response from the server: %s.\n", VAR_18.text);
        VAR_7->error = VAR_2;
        VAR_16 = -1;
        goto out;
    }

    int VAR_22;
    size_t VAR_23 = FUNC_13 (VAR_17);
    json_t *VAR_24;

    FUNC_19 ("Received fs object list size %lu from %s:%s.\n",
                VAR_23, VAR_7->host, VAR_7->repo_id);

    VAR_7->n_fs_objs = (int)VAR_23;

    GHashTable *VAR_25 = FUNC_4 (VAR_5, VAR_4,
                                                      FUNC_1, ((void*)0));

    for (VAR_22 = 0; VAR_22 < VAR_23; ++VAR_22) {
        VAR_24 = FUNC_12 (VAR_17, VAR_22);
        if (!VAR_24) {
            FUNC_22 ("Invalid JSON response from the server.\n");
            FUNC_14 (VAR_17);
            FUNC_23 (*VAR_9);
            VAR_16 = -1;
            goto out;
        }

        VAR_19 = FUNC_16(VAR_24);

        if (FUNC_3 (VAR_25, VAR_19)) {
            ++(VAR_7->done_fs_objs);
            continue;
        }
        char *VAR_26 = FUNC_7(VAR_19);
        FUNC_5 (VAR_25, VAR_26, VAR_26);

        if (!FUNC_21 (VAR_6->fs_mgr->obj_store,
                                        VAR_7->repo_id, VAR_7->repo_version,
                                        VAR_19)) {
            *VAR_9 = FUNC_6 (*VAR_9, FUNC_7(VAR_19));
        } else if (VAR_7->is_clone) {
            gboolean VAR_27 = VAR_0;
            gboolean VAR_28;
            VAR_28 = FUNC_20 (VAR_6->fs_mgr,
                                                   VAR_7->repo_id, VAR_7->repo_version,
                                                   VAR_19, VAR_0, &VAR_27);
            if (!VAR_28 && !VAR_27) {
                *VAR_9 = FUNC_6 (*VAR_9, FUNC_7(VAR_19));
            } else {
                ++(VAR_7->done_fs_objs);
            }
        } else {
            ++(VAR_7->done_fs_objs);
        }
    }

    FUNC_14 (VAR_17);
    FUNC_2 (VAR_25);

out:
    FUNC_1 (VAR_12);
    FUNC_1 (VAR_14);
    FUNC_0 (VAR_11);

    return VAR_16;
}
