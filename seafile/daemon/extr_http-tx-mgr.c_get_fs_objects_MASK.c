
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_22__ TYPE_6__ ;
typedef struct TYPE_21__ TYPE_5__ ;
typedef struct TYPE_20__ TYPE_4__ ;
typedef struct TYPE_19__ TYPE_3__ ;
typedef struct TYPE_18__ TYPE_2__ ;
typedef struct TYPE_17__ TYPE_1__ ;


typedef int json_t ;
typedef char* gpointer ;
typedef int gint64 ;
struct TYPE_22__ {TYPE_1__* fs_mgr; } ;
struct TYPE_21__ {int release; int * curl; } ;
struct TYPE_20__ {char* data; } ;
struct TYPE_19__ {int repo_id; int host; int done_fs_objs; int error; int repo_version; int token; int use_fileserver_port; } ;
struct TYPE_18__ {int object; int obj_size; int obj_id; } ;
struct TYPE_17__ {int obj_store; } ;
typedef TYPE_2__ ObjectHeader ;
typedef TYPE_3__ HttpTxTask ;
typedef TYPE_4__ GList ;
typedef int GHashTableIter ;
typedef int GHashTable ;
typedef TYPE_5__ Connection ;
typedef int CURL ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *,int *) ;
 scalar_t__ FUNC_4 (int *,char**,char**) ;
 int * FUNC_5 (int ,int ,int (*) (char*),int *) ;
 int FUNC_6 (int *,char*) ;
 int FUNC_7 (int *,char*,char*) ;
 TYPE_4__* FUNC_8 (TYPE_4__*,TYPE_4__*) ;
 TYPE_4__* FUNC_9 (TYPE_4__*,int ) ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_10 (char*) ;
 char* FUNC_11 (char*,int ,int) ;
 int FUNC_12 (TYPE_3__*,int) ;
 int FUNC_13 (TYPE_3__*,int) ;
 scalar_t__ FUNC_14 (int *,char*,int ,char*,int,int*,char**,int*,int ,int*) ;
 int * FUNC_15 () ;
 int FUNC_16 (int *,int ) ;
 int FUNC_17 (int *) ;
 char* FUNC_18 (int *,int ) ;
 int FUNC_19 (char*) ;
 int FUNC_20 (char*,int ,int) ;
 int FUNC_21 (int ) ;
 TYPE_6__* VAR_8 ;
 int FUNC_22 (char*,int,int ,int) ;
 int FUNC_23 (int ,int,int ,char*,int ,int,int ) ;
 int FUNC_24 (char*,...) ;
 int FUNC_25 (char*) ;

__attribute__((used)) static int
FUNC_26 (HttpTxTask *VAR_9, Connection *VAR_10, GList **VAR_11)
{
    json_t *VAR_12;
    char *VAR_13;
    int VAR_14 = 0;
    char *VAR_15 = ((void*)0);
    int VAR_16;
    CURL *VAR_17;
    char *VAR_18 = ((void*)0);
    int VAR_19;
    char *VAR_20 = ((void*)0);
    gint64 VAR_21;
    int VAR_22 = 0;
    GHashTable *VAR_23;



    VAR_23 = FUNC_5 (VAR_7, VAR_6, FUNC_1, ((void*)0));

    VAR_12 = FUNC_15 ();

    while (*VAR_11 != ((void*)0)) {
        VAR_13 = (*VAR_11)->data;
        FUNC_16 (VAR_12, FUNC_19(VAR_13));

        *VAR_11 = FUNC_8 (*VAR_11, *VAR_11);

        FUNC_7 (VAR_23, VAR_13, VAR_13);

        if (++VAR_14 >= VAR_1)
            break;
    }

    FUNC_22 ("Requesting %d fs objects from %s:%s.\n",
                VAR_14, VAR_9->host, VAR_9->repo_id);

    VAR_15 = FUNC_18 (VAR_12, 0);
    VAR_16 = FUNC_25(VAR_15);
    FUNC_17 (VAR_12);



    VAR_17 = VAR_10->curl;

    if (!VAR_9->use_fileserver_port)
        VAR_18 = FUNC_11 ("%s/seafhttp/repo/%s/pack-fs/", VAR_9->host, VAR_9->repo_id);
    else
        VAR_18 = FUNC_11 ("%s/repo/%s/pack-fs/", VAR_9->host, VAR_9->repo_id);

    int VAR_24;
    if (FUNC_14 (VAR_17, VAR_18, VAR_9->token,
                   VAR_15, VAR_16,
                   &VAR_19, &VAR_20, &VAR_21, VAR_5, &VAR_24) < 0) {
        VAR_10->release = VAR_5;
        FUNC_12 (VAR_9, VAR_24);
        VAR_22 = -1;
        goto out;
    }

    if (VAR_19 != VAR_2) {
        FUNC_24 ("Bad response code for POST %s: %d.\n", VAR_18, VAR_19);
        FUNC_13 (VAR_9, VAR_19);
        VAR_22 = -1;
        goto out;
    }



    int VAR_25 = 0;
    char *VAR_26 = VAR_20;
    ObjectHeader *VAR_27 = (ObjectHeader *)VAR_26;
    char VAR_28[41];
    int VAR_29 = 0;
    int VAR_30;
    int VAR_31;
    while (VAR_29 < VAR_21) {
        FUNC_20 (VAR_28, VAR_27->obj_id, 40);
        VAR_28[40] = 0;
        VAR_30 = FUNC_21 (VAR_27->obj_size);
        if (VAR_29 + sizeof(ObjectHeader) + VAR_30 > VAR_21) {
            FUNC_24 ("Incomplete object package received for repo %.8s.\n",
                          VAR_9->repo_id);
            VAR_9->error = VAR_3;
            VAR_22 = -1;
            goto out;
        }

        ++VAR_25;

        VAR_31 = FUNC_23 (VAR_8->fs_mgr->obj_store,
                                       VAR_9->repo_id, VAR_9->repo_version,
                                       VAR_28,
                                       VAR_27->object,
                                       VAR_30, VAR_0);
        if (VAR_31 < 0) {
            FUNC_24 ("Failed to write fs object %s in repo %.8s.\n",
                          VAR_28, VAR_9->repo_id);
            VAR_9->error = VAR_4;
            VAR_22 = -1;
            goto out;
        }

        FUNC_6 (VAR_23, VAR_28);

        ++(VAR_9->done_fs_objs);

        VAR_26 += (sizeof(ObjectHeader) + VAR_30);
        VAR_29 += (sizeof(ObjectHeader) + VAR_30);
        VAR_27 = (ObjectHeader *)VAR_26;
    }

    FUNC_22 ("Received %d fs objects from %s:%s.\n",
                VAR_25, VAR_9->host, VAR_9->repo_id);




    GHashTableIter VAR_32;
    gpointer VAR_33, VAR_34;
    FUNC_3 (&VAR_32, VAR_23);
    while (FUNC_4 (&VAR_32, &VAR_33, &VAR_34)) {
        VAR_13 = VAR_33;
        *VAR_11 = FUNC_9 (*VAR_11, FUNC_10(VAR_13));
    }
    FUNC_2 (VAR_23);

out:
    FUNC_1 (VAR_18);
    FUNC_1 (VAR_15);
    FUNC_1 (VAR_20);
    FUNC_0 (VAR_17);

    return VAR_22;
}
