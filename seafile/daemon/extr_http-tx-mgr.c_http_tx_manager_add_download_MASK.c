
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_5__ ;
typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


typedef int gboolean ;
struct TYPE_14__ {int job_mgr; int repo_mgr; } ;
struct TYPE_13__ {TYPE_1__* priv; } ;
struct TYPE_12__ {int protocol_version; void* repo_name; int ref_cnt_lock; int blk_ref_cnts; int use_fileserver_port; int state; void* email; int head; } ;
struct TYPE_11__ {int download_tasks; } ;
typedef int SeafRepo ;
typedef TYPE_2__ HttpTxTask ;
typedef TYPE_3__ HttpTxManager ;
typedef int GError ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (TYPE_3__*,char const*) ;
 int VAR_4 ;
 int FUNC_1 (int ,void*,TYPE_2__*) ;
 int FUNC_2 (int ,int ,int ,int ) ;
 int FUNC_3 (int ,char const*) ;
 int FUNC_4 (int **,int ,int ,char*) ;
 int VAR_5 ;
 int VAR_6 ;
 void* FUNC_5 (char const*) ;
 int VAR_7 ;
 int VAR_8 ;
 TYPE_2__* FUNC_6 (TYPE_3__*,char const*,int,int ,int ,char const*,char const*,char const*,char const*) ;
 int FUNC_7 (int ,char const*,int) ;
 int FUNC_8 (int *,int *) ;
 TYPE_5__* VAR_9 ;
 scalar_t__ FUNC_9 (int ,int ,int ,TYPE_2__*) ;
 int * FUNC_10 (int ,char const*) ;

int
FUNC_11 (HttpTxManager *VAR_10,
                              const char *VAR_11,
                              int VAR_12,
                              const char *VAR_13,
                              const char *VAR_14,
                              const char *VAR_15,
                              gboolean VAR_16,
                              const char *VAR_17,
                              const char *VAR_18,
                              int VAR_19,
                              const char *VAR_20,
                              gboolean VAR_21,
                              const char *VAR_22,
                              GError **VAR_23)
{
    HttpTxTask *VAR_24;
    SeafRepo *VAR_25;

    if (!VAR_11 || !VAR_14 || !VAR_13 || !VAR_15 || !VAR_20) {
        FUNC_4 (VAR_23, VAR_2, VAR_3, "Empty argument(s)");
        return -1;
    }

    if (!VAR_16) {
        VAR_25 = FUNC_10 (VAR_9->repo_mgr, VAR_11);
        if (!VAR_25) {
            FUNC_4 (VAR_23, VAR_2, VAR_3, "Repo not found");
            return -1;
        }
    }

    FUNC_0 (VAR_10, VAR_11);

    VAR_24 = FUNC_6 (VAR_10, VAR_11, VAR_12,
                             VAR_1, VAR_16,
                             VAR_13, VAR_14, VAR_17, VAR_18);

    FUNC_7 (VAR_24->head, VAR_15, 40);
    VAR_24->protocol_version = VAR_19;
    VAR_24->email = FUNC_5(VAR_20);

    VAR_24->state = VAR_0;

    VAR_24->use_fileserver_port = VAR_21;

    VAR_24->blk_ref_cnts = FUNC_2 (VAR_6, VAR_5,
                                                VAR_4, VAR_4);
    FUNC_8 (&VAR_24->ref_cnt_lock, ((void*)0));

    FUNC_1 (VAR_10->priv->download_tasks,
                         FUNC_5(VAR_11),
                         VAR_24);

    VAR_24->repo_name = FUNC_5(VAR_22);

    if (FUNC_9 (VAR_9->job_mgr,
                                       VAR_8,
                                       VAR_7,
                                       VAR_24) < 0) {
        FUNC_3 (VAR_10->priv->download_tasks, VAR_11);
        return -1;
    }

    return 0;
}
