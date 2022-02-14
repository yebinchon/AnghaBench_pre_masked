
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_17__ TYPE_7__ ;
typedef struct TYPE_16__ TYPE_4__ ;
typedef struct TYPE_15__ TYPE_3__ ;
typedef struct TYPE_14__ TYPE_2__ ;
typedef struct TYPE_13__ TYPE_1__ ;


typedef int gboolean ;
struct TYPE_17__ {int job_mgr; int repo_mgr; } ;
struct TYPE_16__ {TYPE_1__* priv; } ;
struct TYPE_15__ {int protocol_version; int repo_name; int use_fileserver_port; int state; } ;
struct TYPE_14__ {char const* name; } ;
struct TYPE_13__ {int upload_tasks; } ;
typedef TYPE_2__ SeafRepo ;
typedef TYPE_3__ HttpTxTask ;
typedef TYPE_4__ HttpTxManager ;
typedef int GError ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (TYPE_4__*,char const*) ;
 int FUNC_1 (int ,int ,TYPE_3__*) ;
 int FUNC_2 (int ,char const*) ;
 int FUNC_3 (int **,int ,int ,char*) ;
 int FUNC_4 (char const*) ;
 TYPE_3__* FUNC_5 (TYPE_4__*,char const*,int,int ,int ,char const*,char const*,int *,int *) ;
 int VAR_5 ;
 int VAR_6 ;
 TYPE_7__* VAR_7 ;
 scalar_t__ FUNC_6 (int ,int ,int ,TYPE_3__*) ;
 TYPE_2__* FUNC_7 (int ,char const*) ;

int
FUNC_8 (HttpTxManager *VAR_8,
                            const char *VAR_9,
                            int VAR_10,
                            const char *VAR_11,
                            const char *VAR_12,
                            int VAR_13,
                            gboolean VAR_14,
                            GError **VAR_15)
{
    HttpTxTask *VAR_16;
    SeafRepo *VAR_17;

    if (!VAR_9 || !VAR_12 || !VAR_11) {
        FUNC_3 (VAR_15, VAR_3, VAR_4, "Empty argument(s)");
        return -1;
    }

    VAR_17 = FUNC_7 (VAR_7->repo_mgr, VAR_9);
    if (!VAR_17) {
        FUNC_3 (VAR_15, VAR_3, VAR_4, "Repo not found");
        return -1;
    }

    FUNC_0 (VAR_8, VAR_9);

    VAR_16 = FUNC_5 (VAR_8, VAR_9, VAR_10,
                             VAR_2, VAR_0,
                             VAR_11, VAR_12, ((void*)0), ((void*)0));

    VAR_16->protocol_version = VAR_13;

    VAR_16->state = VAR_1;

    VAR_16->use_fileserver_port = VAR_14;

    VAR_16->repo_name = FUNC_4(VAR_17->name);

    FUNC_1 (VAR_8->priv->upload_tasks,
                         FUNC_4(VAR_9),
                         VAR_16);

    if (FUNC_6 (VAR_7->job_mgr,
                                       VAR_6,
                                       VAR_5,
                                       VAR_16) < 0) {
        FUNC_2 (VAR_8->priv->upload_tasks, VAR_9);
        return -1;
    }

    return 0;
}
