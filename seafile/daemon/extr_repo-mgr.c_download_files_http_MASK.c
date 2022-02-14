
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_23__ TYPE_7__ ;
typedef struct TYPE_22__ TYPE_6__ ;
typedef struct TYPE_21__ TYPE_5__ ;
typedef struct TYPE_20__ TYPE_4__ ;
typedef struct TYPE_19__ TYPE_3__ ;
typedef struct TYPE_18__ TYPE_2__ ;
typedef struct TYPE_17__ TYPE_1__ ;


struct index_state {int dummy; } ;
struct TYPE_17__ {int sec; } ;
struct cache_entry {int ce_flags; scalar_t__ ce_size; int ce_mode; scalar_t__ modifier; int sha1; TYPE_1__ ce_mtime; } ;
typedef scalar_t__ gint64 ;
typedef int data ;
struct TYPE_23__ {int sync_mgr; } ;
struct TYPE_22__ {scalar_t__ status; char const* sha1; scalar_t__ size; int name; int mode; int modifier; int mtime; } ;
struct TYPE_21__ {int repo_version; int * finished_tasks; int conflict_head_id; TYPE_2__* http_task; int * crypt; int repo_id; } ;
struct TYPE_20__ {int result; struct cache_entry* ce; scalar_t__ new_ce; TYPE_6__* de; } ;
struct TYPE_19__ {TYPE_6__* data; struct TYPE_19__* next; } ;
struct TYPE_18__ {int is_clone; int all_stop; int repo_name; } ;
typedef int SyncStatus ;
typedef int SeafileCrypt ;
typedef int LockedFileSet ;
typedef TYPE_2__ HttpTxTask ;
typedef int GThreadPool ;
typedef TYPE_3__ GList ;
typedef int GHashTable ;
typedef int GDestroyNotify ;
typedef int GAsyncQueue ;
typedef TYPE_4__ FileTxTask ;
typedef TYPE_5__ FileTxData ;
typedef TYPE_6__ DiffEntry ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 scalar_t__ VAR_15 ;
 int FUNC_0 (struct index_state*,struct cache_entry*,int) ;
 int FUNC_1 (struct cache_entry*) ;
 int FUNC_2 (TYPE_5__*,TYPE_4__*,char const*,int *,int *,char const*,int *) ;
 int FUNC_3 (int ) ;
 int VAR_16 ;
 scalar_t__ VAR_17 ;
 int * FUNC_4 () ;
 TYPE_4__* FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (scalar_t__) ;
 int FUNC_8 (int *) ;
 int * FUNC_9 (int ,int ,int (*) (scalar_t__),int ) ;
 int FUNC_10 (int *,int ) ;
 scalar_t__ FUNC_11 (int *) ;
 int VAR_18 ;
 int VAR_19 ;
 scalar_t__ FUNC_12 (int ) ;
 int FUNC_13 (int *,int ,int ) ;
 int * FUNC_14 (int ,TYPE_5__*,int ,int ,int *) ;
 int FUNC_15 (char const*,int ,char const*,struct index_state*,TYPE_6__*,int *,int *) ;
 int FUNC_16 (int ,char const*,int) ;
 int FUNC_17 (TYPE_5__*,int ,int) ;
 int FUNC_18 (char const*,char*,int) ;
 int FUNC_19 (int *,char const*,int ,char const*,struct index_state*,TYPE_6__*,int *,int *,int *) ;
 TYPE_7__* VAR_20 ;
 int FUNC_20 (int ,char const*,int ,int ,int ) ;
 int FUNC_21 (struct index_state*,char const*) ;

__attribute__((used)) static int
FUNC_22 (const char *VAR_21,
                     int VAR_22,
                     const char *VAR_23,
                     struct index_state *VAR_24,
                     const char *VAR_25,
                     SeafileCrypt *VAR_26,
                     HttpTxTask *VAR_27,
                     GList *VAR_28,
                     GHashTable *VAR_29,
                     GHashTable *VAR_30,
                     const char *VAR_31,
                     LockedFileSet *VAR_32)
{
    struct cache_entry *VAR_33;
    DiffEntry *VAR_34;
    gint64 VAR_35 = 0;
    GThreadPool *VAR_36;
    GAsyncQueue *VAR_37;
    GHashTable *VAR_38;
    GList *VAR_39;
    FileTxTask *VAR_40;
    int VAR_41 = VAR_10;

    VAR_37 = FUNC_4 ();

    FileTxData VAR_42;
    FUNC_17 (&VAR_42, 0, sizeof(VAR_42));
    FUNC_16 (VAR_42.repo_id, VAR_21, 36);
    VAR_42.repo_version = VAR_22;
    VAR_42.crypt = VAR_26;
    VAR_42.http_task = VAR_27;
    FUNC_16 (VAR_42.conflict_head_id, VAR_31, 40);
    VAR_42.finished_tasks = VAR_37;

    VAR_36 = FUNC_14 (VAR_16, &VAR_42,
                               VAR_3, VAR_7, ((void*)0));

    VAR_38 = FUNC_9 (VAR_19, VAR_18,
                                           FUNC_7, (GDestroyNotify)VAR_17);

    for (VAR_39 = VAR_28; VAR_39 != ((void*)0); VAR_39 = VAR_39->next) {
        VAR_34 = VAR_39->data;

        if (VAR_34->status == VAR_5) {
            FUNC_15 (VAR_21, VAR_27->repo_name, VAR_23, VAR_24, VAR_34,
                                 VAR_29, VAR_30);
        } else if (VAR_34->status == VAR_4 ||
                   VAR_34->status == VAR_6) {
            if (VAR_9 == FUNC_19 (VAR_36,
                                                              VAR_21,
                                                              VAR_27->repo_name,
                                                              VAR_23,
                                                              VAR_24,
                                                              VAR_34,
                                                              VAR_38,
                                                              VAR_29,
                                                              VAR_30))
                continue;
        }
    }


    if (FUNC_11(VAR_38) == 0) {
        if (VAR_28 != ((void*)0))
            FUNC_21 (VAR_24, VAR_25);
        goto out;
    }

    char VAR_43[41];
    while ((VAR_40 = FUNC_5 (VAR_37)) != ((void*)0)) {
        VAR_33 = VAR_40->ce;
        VAR_34 = VAR_40->de;

        FUNC_18 (VAR_34->sha1, VAR_43, 20);



        if (VAR_40->result == VAR_8 ||
            VAR_40->result == VAR_11) {
            VAR_41 = VAR_40->result;
            if (VAR_40->new_ce)
                FUNC_1 (VAR_40->ce);
            VAR_27->all_stop = VAR_14;
            goto out;
        }

        int VAR_44 = FUNC_2 (&VAR_42, VAR_40, VAR_23,
                                     VAR_29, VAR_30,
                                     VAR_31, VAR_32);

        if (!VAR_27->is_clone) {
            SyncStatus VAR_45;
            if (VAR_44 == VAR_9)
                VAR_45 = VAR_12;
            else
                VAR_45 = VAR_13;
            FUNC_20 (VAR_20->sync_mgr,
                                                  VAR_21,
                                                  VAR_34->name,
                                                  VAR_34->mode,
                                                  VAR_45);
        }

        if (VAR_40->new_ce) {
            if (!(VAR_33->ce_flags & VAR_2)) {
                FUNC_0 (VAR_24, VAR_40->ce,
                                 (VAR_0|VAR_1));
            }
        } else {
            VAR_33->ce_mtime.sec = VAR_34->mtime;
            VAR_33->ce_size = VAR_34->size;
            FUNC_16 (VAR_33->sha1, VAR_34->sha1, 20);
            if (VAR_33->modifier) FUNC_7 (VAR_33->modifier);
            VAR_33->modifier = FUNC_12(VAR_34->modifier);
            VAR_33->ce_mode = FUNC_3 (VAR_34->mode);
        }

        FUNC_10 (VAR_38, VAR_34->name);

        if (FUNC_11 (VAR_38) == 0)
            break;





        VAR_35 += VAR_33->ce_size;
        if (VAR_35 >= VAR_15) {
            FUNC_21 (VAR_24, VAR_25);
            VAR_35 = 0;
        }
    }

    FUNC_21 (VAR_24, VAR_25);

out:



    FUNC_13 (VAR_36, VAR_14, VAR_14);


    FUNC_8 (VAR_38);

    FUNC_6 (VAR_37);

    return VAR_41;
}
