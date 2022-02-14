
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct index_state {int dummy; } ;
struct cache_entry {unsigned char* sha1; } ;
typedef scalar_t__ gint64 ;
typedef scalar_t__ gboolean ;
struct TYPE_11__ {int sync_mgr; } ;
struct TYPE_10__ {int changeset; int id; int * email; int version; int worktree; } ;
struct TYPE_9__ {int st_mode; scalar_t__ st_size; } ;
typedef int SeafileCrypt ;
typedef TYPE_1__ SeafStat ;
typedef TYPE_2__ SeafRepo ;
typedef int GQueue ;
typedef int GList ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 scalar_t__ FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (struct index_state*,char*,TYPE_1__*) ;
 int FUNC_3 (int ,int ,unsigned char*,TYPE_1__*,int *,char*,int *) ;
 int FUNC_4 (int ,int ,struct index_state*,char*,char*,TYPE_1__*,int ,int *,int ,int *,scalar_t__*) ;
 int VAR_8 ;
 char* FUNC_5 (int ,char*,int *) ;
 int FUNC_6 (char*) ;
 char* FUNC_7 (int *) ;
 int VAR_9 ;
 struct cache_entry* FUNC_8 (struct index_state*,char*,int ,int ) ;
 scalar_t__ FUNC_9 (char*,int *) ;
 TYPE_4__* VAR_10 ;
 scalar_t__ FUNC_10 (char*,TYPE_1__*) ;
 int FUNC_11 (int ,int ,char*,int ,int ) ;
 int FUNC_12 (char*,char*,int ) ;
 int FUNC_13 (int ,int *,char*,int ) ;
 int FUNC_14 (int ) ;
 int FUNC_15 (char*) ;

__attribute__((used)) static int
FUNC_16 (SeafRepo *VAR_11, struct index_state *VAR_12,
                  SeafileCrypt *VAR_13, GQueue *VAR_14,
                  GList *VAR_15, gint64 *VAR_16)
{
    char *VAR_17;
    char *VAR_18;
    SeafStat VAR_19;
    struct cache_entry *VAR_20;

    while ((VAR_17 = FUNC_7 (VAR_14)) != ((void*)0)) {
        VAR_18 = FUNC_5 (VAR_11->worktree, VAR_17, ((void*)0));
        if (FUNC_10 (VAR_18, &VAR_19) < 0) {
            FUNC_12 ("Failed to stat %s: %s.\n", VAR_18, FUNC_14(VAR_8));
            FUNC_6 (VAR_17);
            FUNC_6 (VAR_18);
            continue;
        }

        if (FUNC_1(VAR_19.st_mode)) {
            gboolean VAR_21 = VAR_2;
            int VAR_22 = 0;
            VAR_22 = FUNC_4 (VAR_11->id, VAR_11->version, VAR_12, VAR_17, VAR_18,
                                &VAR_19, 0, VAR_13, VAR_9, VAR_11->email, &VAR_21);
            if (VAR_21) {
                VAR_20 = FUNC_8 (VAR_12, VAR_17, FUNC_15(VAR_17), 0);
                FUNC_3 (VAR_11->changeset,
                                  VAR_0,
                                  VAR_20->sha1,
                                  &VAR_19,
                                  VAR_11->email,
                                  VAR_17,
                                  ((void*)0));

                *VAR_16 += (gint64)(VAR_19.st_size);
                if (*VAR_16 >= VAR_3) {
                    FUNC_6 (VAR_17);
                    FUNC_6 (VAR_18);
                    break;
                }
            } else {
                FUNC_11 (VAR_10->sync_mgr,
                                                      VAR_11->id,
                                                      VAR_17,
                                                      VAR_7,
                                                      VAR_6);
            }
            if (VAR_22 < 0) {
                FUNC_11 (VAR_10->sync_mgr,
                                                      VAR_11->id,
                                                      VAR_17,
                                                      VAR_7,
                                                      VAR_5);
                FUNC_13 (VAR_11->id, ((void*)0), VAR_17,
                                                   VAR_4);
            }
        } else if (FUNC_0(VAR_19.st_mode)) {
            if (FUNC_9 (VAR_18, VAR_15)) {
                int VAR_23 = FUNC_2 (VAR_12, VAR_17, &VAR_19);
                if (VAR_23 == 1) {
                    unsigned char VAR_24[20] = {0};
                    FUNC_3 (VAR_11->changeset,
                                      VAR_1,
                                      VAR_24,
                                      &VAR_19,
                                      ((void*)0),
                                      VAR_17,
                                      ((void*)0));
                }
            }
        }
        FUNC_6 (VAR_17);
        FUNC_6 (VAR_18);
    }

    return 0;
}
