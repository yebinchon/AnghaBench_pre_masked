
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_26__ TYPE_3__ ;
typedef struct TYPE_25__ TYPE_2__ ;
typedef struct TYPE_24__ TYPE_1__ ;
typedef struct TYPE_23__ TYPE_11__ ;


struct index_state {int dummy; } ;
typedef int gint64 ;
typedef void* gboolean ;
struct TYPE_24__ {void* partial_commit; int q_lock; int event_q; } ;
typedef TYPE_1__ WTStatus ;
struct TYPE_25__ {int ev_type; int path; } ;
typedef TYPE_2__ WTEvent ;
struct TYPE_26__ {int id; int worktree; int is_readonly; int changeset; int name; } ;
struct TYPE_23__ {int filelock_mgr; int sync_mgr; int wt_monitor; } ;
typedef int SeafileCrypt ;
typedef TYPE_3__ SeafRepo ;
typedef int LockedFileSet ;
typedef int GList ;


 int VAR_0 ;
 void* VAR_1 ;
 int VAR_2 ;






 int FUNC_0 (int ,int ,int *) ;
 int FUNC_1 (int *,int ) ;
 int FUNC_2 (char*) ;
 int FUNC_3 (int *,int (*) (char*)) ;
 TYPE_2__* FUNC_4 (int ) ;
 TYPE_2__* FUNC_5 (int ) ;
 TYPE_2__* FUNC_6 (int ) ;
 int FUNC_7 (TYPE_3__*,struct index_state*,int *,int *,int *,TYPE_1__*,TYPE_2__*,int **,int *) ;
 int FUNC_8 (TYPE_3__*,struct index_state*,int *,int *,int *,TYPE_2__*,int **,int *) ;
 int FUNC_9 (int ,int ,char**) ;
 int FUNC_10 (int ,int ,int ) ;
 int FUNC_11 (TYPE_3__*,char*) ;
 int FUNC_12 (int *) ;
 int FUNC_13 (int *) ;
 int FUNC_14 (int ,int ,int ,void*,int *) ;
 int FUNC_15 (struct index_state*,int ,void**) ;
 int FUNC_16 (int ,struct index_state*,int ,int ,int *,int *,int ,int **,int ) ;
 int FUNC_17 (struct index_state*,TYPE_3__*,int *,int *,int *) ;
 TYPE_11__* VAR_3 ;
 int FUNC_18 (char*,int ) ;
 int FUNC_19 (int ,int ,int ) ;
 int FUNC_20 (char*,int ) ;
 int FUNC_21 (int ,int ,int ) ;
 int FUNC_22 (char*,...) ;
 TYPE_1__* FUNC_23 (int ,int ) ;
 int FUNC_24 (int ,int ,int ,int ) ;
 int FUNC_25 (int ,int ) ;
 int FUNC_26 (int *) ;
 int FUNC_27 (int ,struct index_state*,int *,int ) ;
 int FUNC_28 (TYPE_3__*,char*) ;
 int FUNC_29 (TYPE_3__*,struct index_state*,int ,int ) ;
 int FUNC_30 (TYPE_3__*,TYPE_1__*,struct index_state*,int *) ;
 int FUNC_31 (TYPE_2__*) ;
 int FUNC_32 (TYPE_1__*) ;

__attribute__((used)) static int
FUNC_33 (SeafRepo *VAR_4, struct index_state *VAR_5,
                                 SeafileCrypt *VAR_6, GList *VAR_7,
                                 LockedFileSet *VAR_8)
{
    WTStatus *VAR_9;
    WTEvent *VAR_10, *VAR_11;
    gboolean VAR_12;




    VAR_9 = FUNC_23 (VAR_3->wt_monitor, VAR_4->id);
    if (!VAR_9) {
        FUNC_22 ("Can't find worktree status for repo %s(%.8s).\n",
                      VAR_4->name, VAR_4->id);
        return -1;
    }

    FUNC_30 (VAR_4, VAR_9, VAR_5, VAR_7);

    GList *VAR_13 = ((void*)0), *VAR_14 = ((void*)0);

    WTEvent *VAR_15;

    FUNC_12 (&VAR_9->q_lock);
    VAR_15 = FUNC_5 (VAR_9->event_q);
    FUNC_13 (&VAR_9->q_lock);

    if (!VAR_15) {
        FUNC_20 ("All events are processed for repo %s.\n", VAR_4->id);
        VAR_9->partial_commit = VAR_1;
        goto out;
    }

    gint64 VAR_16 = 0;

    while (1) {
        FUNC_12 (&VAR_9->q_lock);
        VAR_10 = FUNC_6 (VAR_9->event_q);
        VAR_11 = FUNC_4 (VAR_9->event_q);
        FUNC_13 (&VAR_9->q_lock);
        if (!VAR_10)
            break;
        if (VAR_10->ev_type != 132) {
            FUNC_3 (VAR_13, FUNC_2);
            VAR_13 = ((void*)0);
        }

        switch (VAR_10->ev_type) {
        case 132:



            if (VAR_11 &&
                VAR_11->ev_type == VAR_10->ev_type &&
                FUNC_25 (VAR_11->path, VAR_10->path) == 0)
                break;





            if (!FUNC_10(VAR_4->id,
                                  VAR_4->is_readonly, VAR_10->path)) {
                FUNC_24 (VAR_4->id, VAR_4->name, VAR_10->path,
                                                   VAR_2);
                FUNC_18 ("%s is not writable, ignore.\n", VAR_10->path);
                break;
            }
            if (FUNC_7 (VAR_4, VAR_5, VAR_6, VAR_7,
                                  VAR_8,
                                  VAR_9, VAR_10,
                                  &VAR_13, &VAR_16))
                goto out;

            break;
        case 128:
            if (FUNC_7 (VAR_4, VAR_5, VAR_6, VAR_7,
                                  VAR_8,
                                  VAR_9, VAR_10,
                                  &VAR_13, &VAR_16))
                goto out;

            break;
        case 131:
            FUNC_21 (VAR_3->sync_mgr,
                                                  VAR_4->id,
                                                  VAR_10->path);
            if (FUNC_0(VAR_4->worktree, VAR_10->path, VAR_7))
                break;

            if (!FUNC_10(VAR_4->id,
                                  VAR_4->is_readonly, VAR_10->path)) {
                FUNC_18 ("%s is not writable, ignore.\n", VAR_10->path);
                break;
            }

            if (FUNC_19 (VAR_3->filelock_mgr,
                                                      VAR_4->id, VAR_10->path)) {
                FUNC_18 ("Delete: %s is locked on server, ignore.\n", VAR_10->path);


                break;
            }

            if (FUNC_1 (VAR_8, VAR_10->path)) {
                VAR_12 = VAR_1;
                FUNC_15 (VAR_5, VAR_10->path, &VAR_12);
                if (VAR_12)
                    FUNC_16 (VAR_4->id,
                                               VAR_5,
                                               VAR_4->worktree, VAR_10->path,
                                               VAR_7, VAR_8,
                                               VAR_4->is_readonly,
                                               &VAR_14,
                                               VAR_4->changeset);

                FUNC_14 (VAR_4->changeset,
                                       VAR_0,
                                       VAR_10->path,
                                       VAR_1,
                                       ((void*)0));

                FUNC_27 (VAR_4->worktree,
                                                        VAR_5,
                                                        VAR_7,
                                                        VAR_10->path);
            }
            break;
        case 129:
            FUNC_8 (VAR_4, VAR_5, VAR_6, VAR_7, VAR_8, VAR_10, &VAR_14, &VAR_16);
            break;
        case 133:
            if (!FUNC_10(VAR_4->id,
                                  VAR_4->is_readonly, VAR_10->path)) {
                FUNC_18 ("%s is not writable, ignore.\n", VAR_10->path);
                break;
            }
            FUNC_29 (VAR_4, VAR_5, VAR_4->worktree, VAR_10->path);
            break;
        case 130:
            FUNC_22 ("Kernel event queue overflowed, fall back to scan.\n");
            FUNC_17 (VAR_5, VAR_4, VAR_6, VAR_7, VAR_8);
            break;
        }

        if (VAR_10 == VAR_15) {
            FUNC_31 (VAR_10);
            FUNC_20 ("All events are processed for repo %s.\n", VAR_4->id);
            VAR_9->partial_commit = VAR_1;
            break;
        } else
            FUNC_31 (VAR_10);
    }

out:
    FUNC_32 (VAR_9);
    FUNC_26 (VAR_13);
    FUNC_26 (VAR_14);

    return 0;
}
