
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_4__ ;
typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


struct index_state {int dummy; } ;
struct cache_entry {int sha1; } ;
typedef scalar_t__ gint64 ;
typedef scalar_t__ gboolean ;
struct TYPE_14__ {int sync_mgr; int filelock_mgr; } ;
struct TYPE_13__ {scalar_t__ changeset; scalar_t__ fset; scalar_t__ startup_scan; int is_repo_ro; } ;
struct TYPE_12__ {scalar_t__ old_mtime; int operation; } ;
struct TYPE_11__ {scalar_t__ st_mtime; scalar_t__ st_size; } ;
typedef scalar_t__ SyncStatus ;
typedef int SeafileCrypt ;
typedef TYPE_1__ SeafStat ;
typedef TYPE_2__ LockedFile ;
typedef int GQueue ;
typedef TYPE_3__ AddOptions ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;
 int VAR_10 ;
 scalar_t__ VAR_11 ;
 int FUNC_0 (scalar_t__,int ,int ,TYPE_1__*,char const*,char const*,int *) ;
 int FUNC_1 (char const*,int,struct index_state*,char const*,char const*,TYPE_1__*,int ,int *,int ,char const*,scalar_t__*) ;
 int * FUNC_2 () ;
 int FUNC_3 (int *,int ) ;
 int FUNC_4 (char const*) ;
 scalar_t__ FUNC_5 (struct cache_entry*,TYPE_1__*,int ) ;
 int VAR_12 ;
 struct cache_entry* FUNC_6 (struct index_state*,char const*,int ,int ) ;
 scalar_t__ FUNC_7 (char const*,int ,char const*) ;
 TYPE_2__* FUNC_8 (scalar_t__,char const*) ;
 int FUNC_9 (scalar_t__,char const*,scalar_t__) ;
 TYPE_4__* VAR_13 ;
 scalar_t__ FUNC_10 (int ,char const*,char const*) ;
 int FUNC_11 (int ,char const*,char const*,int ,scalar_t__) ;
 int FUNC_12 (char const*,int *,char const*,int ) ;
 scalar_t__ FUNC_13 (int ,int ) ;
 int FUNC_14 (char const*) ;

__attribute__((used)) static int
FUNC_15 (const char *VAR_14,
          int VAR_15,
          const char *VAR_16,
          struct index_state *VAR_17,
          const char *VAR_18,
          const char *VAR_19,
          SeafStat *VAR_20,
          SeafileCrypt *VAR_21,
          gint64 *VAR_22,
          GQueue **VAR_23,
          AddOptions *VAR_24)
{
    gboolean VAR_25 = VAR_1;
    int VAR_26 = 0;
    gboolean VAR_27 = VAR_11, VAR_28 = VAR_1;
    struct cache_entry *VAR_29;

    if (VAR_24)
        VAR_27 = FUNC_7(VAR_14,
                                       VAR_24->is_repo_ro, VAR_18);

    VAR_28 = FUNC_10 (VAR_13->filelock_mgr,
                                                      VAR_14, VAR_18);
    if (VAR_28 && VAR_24 && !(VAR_24->startup_scan)) {


    }

    if (VAR_24 && VAR_24->startup_scan) {
        SyncStatus VAR_30;

        VAR_29 = FUNC_6 (VAR_17, VAR_18, FUNC_14(VAR_18), 0);
        if (!VAR_29 || FUNC_5(VAR_29, VAR_20, 0) != 0)
            VAR_30 = VAR_9;
        else
            VAR_30 = VAR_8;


        if (VAR_30 == VAR_8 || (VAR_27 && !VAR_28))
            FUNC_11 (VAR_13->sync_mgr,
                                                  VAR_14,
                                                  VAR_18,
                                                  VAR_10,
                                                  VAR_30);

        if (VAR_30 == VAR_9 && !VAR_27)
            FUNC_12 (VAR_14, ((void*)0), VAR_18,
                                               VAR_6);
    }

    if (!VAR_27 || VAR_28)
        return VAR_26;
    if (!VAR_23) {
        VAR_26 = FUNC_1 (VAR_14, VAR_15, VAR_17, VAR_18, VAR_19,
                            VAR_20, 0, VAR_21, VAR_12, VAR_16, &VAR_25);
        if (!VAR_25) {



            FUNC_11 (VAR_13->sync_mgr,
                                                  VAR_14,
                                                  VAR_18,
                                                  VAR_10,
                                                  VAR_8);
        } else {
            if (VAR_22)
                *VAR_22 += (gint64)(VAR_20->st_size);
            if (VAR_24 && VAR_24->changeset) {

                VAR_29 = FUNC_6 (VAR_17, VAR_18, FUNC_14(VAR_18), 0);
                FUNC_0 (VAR_24->changeset,
                                  VAR_0,
                                  VAR_29->sha1,
                                  VAR_20,
                                  VAR_16,
                                  VAR_18,
                                  ((void*)0));
            }
        }
    } else if (*VAR_23 == ((void*)0)) {
        VAR_26 = FUNC_1 (VAR_14, VAR_15, VAR_17, VAR_18, VAR_19,
                            VAR_20, 0, VAR_21, VAR_12, VAR_16, &VAR_25);
        if (VAR_25) {
            *VAR_22 += (gint64)(VAR_20->st_size);
            if (*VAR_22 >= VAR_4)
                *VAR_23 = FUNC_2 ();
        } else {
            FUNC_11 (VAR_13->sync_mgr,
                                                  VAR_14,
                                                  VAR_18,
                                                  VAR_10,
                                                  VAR_8);
        }
        if (VAR_25 && VAR_24 && VAR_24->changeset) {

            VAR_29 = FUNC_6 (VAR_17, VAR_18, FUNC_14(VAR_18), 0);
            FUNC_0 (VAR_24->changeset,
                              VAR_0,
                              VAR_29->sha1,
                              VAR_20,
                              VAR_16,
                              VAR_18,
                              ((void*)0));
        }
    } else {
        *VAR_22 += (gint64)(VAR_20->st_size);
        FUNC_3 (*VAR_23, FUNC_4(VAR_18));
    }

    if (VAR_26 < 0) {
        FUNC_11 (VAR_13->sync_mgr,
                                              VAR_14,
                                              VAR_18,
                                              VAR_10,
                                              VAR_7);
        FUNC_12 (VAR_14, ((void*)0), VAR_18,
                                           VAR_5);
    }

    return VAR_26;
}
