
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_19__ TYPE_8__ ;
typedef struct TYPE_18__ TYPE_6__ ;
typedef struct TYPE_17__ TYPE_5__ ;
typedef struct TYPE_16__ TYPE_4__ ;
typedef struct TYPE_15__ TYPE_3__ ;
typedef struct TYPE_14__ TYPE_2__ ;
typedef struct TYPE_13__ TYPE_1__ ;


struct TYPE_13__ {scalar_t__ sec; } ;
struct cache_entry {int ce_flags; TYPE_1__ ce_mtime; } ;
typedef int gboolean ;
struct TYPE_19__ {int filelock_mgr; int fs_mgr; } ;
struct TYPE_18__ {char* name; int mtime; int mode; int sha1; } ;
struct TYPE_17__ {char* repo_id; int repo_version; TYPE_3__* http_task; int * crypt; } ;
struct TYPE_16__ {int no_checkout; int force_conflict; int path; int new_ce; TYPE_6__* de; struct cache_entry* ce; } ;
struct TYPE_15__ {int is_clone; int email; } ;
struct TYPE_14__ {scalar_t__ st_mtime; int st_mode; } ;
typedef int SeafileCrypt ;
typedef TYPE_2__ SeafStat ;
typedef int LockedFileSet ;
typedef TYPE_3__ HttpTxTask ;
typedef int GHashTable ;
typedef TYPE_4__ FileTxTask ;
typedef TYPE_5__ FileTxData ;
typedef TYPE_6__ DiffEntry ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ FUNC_0 (int ) ;
 int VAR_7 ;
 scalar_t__ FUNC_1 (char*,char**) ;
 int FUNC_2 (TYPE_3__*,char*) ;
 scalar_t__ FUNC_3 (char*,char const*,int) ;
 int FUNC_4 (struct cache_entry*,TYPE_2__*) ;
 int FUNC_5 (char*) ;
 int FUNC_6 (int *,char*,int ,scalar_t__,char*) ;
 int FUNC_7 (int *,char*) ;
 int FUNC_8 (int ,char*,int) ;
 TYPE_8__* VAR_8 ;
 int FUNC_9 (int ,char*,char*) ;
 int FUNC_10 (int ,char*,char*) ;
 int FUNC_11 (int ,char*,char*) ;
 scalar_t__ FUNC_12 (int ,char*,int,char*,int ,int ,int ,int *,char*,char const*,int,int*,int ) ;
 int FUNC_13 (char*,int ) ;
 scalar_t__ FUNC_14 (int ,TYPE_2__*) ;
 int FUNC_15 (char*,int ) ;
 int FUNC_16 (char*,int *,char*,int ) ;
 scalar_t__ FUNC_17 (char*,int *) ;

__attribute__((used)) static int
FUNC_18 (FileTxData *VAR_9,
                    FileTxTask *VAR_10,
                    const char *VAR_11,
                    GHashTable *VAR_12,
                    GHashTable *VAR_13,
                    const char *VAR_14,
                    LockedFileSet *VAR_15)
{
    char *VAR_16 = VAR_9->repo_id;
    int VAR_17 = VAR_9->repo_version;
    struct cache_entry *VAR_18 = VAR_10->ce;
    DiffEntry *VAR_19 = VAR_10->de;
    SeafileCrypt *VAR_20 = VAR_9->crypt;
    gboolean VAR_21 = VAR_10->no_checkout;
    gboolean VAR_22 = VAR_10->force_conflict;
    HttpTxTask *VAR_23 = VAR_9->http_task;
    gboolean VAR_24;
    gboolean VAR_25 = VAR_1;
    SeafStat VAR_26;
    char VAR_27[41];
    gboolean VAR_28 = VAR_1;

    if (VAR_21)
        return VAR_3;

    if (FUNC_17 (VAR_19->name, ((void*)0)))
        return VAR_3;

    FUNC_8 (VAR_19->sha1, VAR_27, 20);

    VAR_28 = FUNC_9 (VAR_8->filelock_mgr,
                                                             VAR_16, VAR_19->name);
    VAR_24 = (FUNC_14 (VAR_10->path, &VAR_26) == 0);


    if (!VAR_10->new_ce &&
        VAR_24 && FUNC_0(VAR_26.st_mode) &&
        !VAR_22) {
        if (VAR_26.st_mtime != VAR_18->ce_mtime.sec) {
            FUNC_13 ("File %s is updated by user. "
                          "Will checkout to conflict file later.\n", VAR_10->path);
            VAR_22 = VAR_7;
        }
    }




    if (VAR_28)
        FUNC_11 (VAR_8->filelock_mgr,
                                              VAR_16, VAR_19->name);


    gboolean VAR_29 = VAR_1;
    if (FUNC_12 (VAR_8->fs_mgr,
                                       VAR_16,
                                       VAR_17,
                                       VAR_27,
                                       VAR_10->path,
                                       VAR_19->mode,
                                       VAR_19->mtime,
                                       VAR_20,
                                       VAR_19->name,
                                       VAR_14,
                                       VAR_22,
                                       &VAR_29,
                                       VAR_23->email) < 0) {
        FUNC_15 ("Failed to checkout file %s.\n", VAR_10->path);

        if (FUNC_9 (VAR_8->filelock_mgr,
                                                  VAR_16, VAR_19->name))
            FUNC_10 (VAR_8->filelock_mgr,
                                                VAR_16, VAR_19->name);

        return VAR_2;
    }

    if (VAR_28)
        FUNC_10 (VAR_8->filelock_mgr,
                                            VAR_16, VAR_19->name);

    FUNC_2 (VAR_23, VAR_27);

    if (VAR_29) {
        FUNC_16 (VAR_16, ((void*)0), VAR_19->name, VAR_5);
    } else if (!VAR_23->is_clone) {
        char *VAR_30 = ((void*)0);
        if (FUNC_1 (VAR_19->name, &VAR_30))
            FUNC_16 (VAR_16, ((void*)0), VAR_30, VAR_5);
        FUNC_5 (VAR_30);
    }





    if (VAR_25)
        VAR_18->ce_flags |= VAR_0;





    FUNC_14 (VAR_10->path, &VAR_26);
    FUNC_4 (VAR_18, &VAR_26);

    return VAR_3;
}
