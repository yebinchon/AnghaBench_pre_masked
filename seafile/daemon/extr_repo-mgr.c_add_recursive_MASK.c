
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct index_state {int dummy; } ;
typedef int gint64 ;
typedef int gboolean ;
struct TYPE_11__ {int sync_mgr; } ;
struct TYPE_10__ {char const* repo_id; int version; char const* modifier; char const* worktree; int * options; int ** remain_files; int * total_size; int * ignore_list; int ignore_empty_dir; int * crypt; struct index_state* istate; } ;
struct TYPE_9__ {int st_mode; } ;
typedef int SeafileCrypt ;
typedef TYPE_1__ SeafStat ;
typedef int GQueue ;
typedef int GList ;
typedef TYPE_2__ AddParams ;
typedef int AddOptions ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (int ) ;
 int FUNC_3 (char const*,char*,TYPE_1__*,TYPE_2__*,int ) ;
 int FUNC_4 (char const*,int,char const*,struct index_state*,char const*,char*,TYPE_1__*,int *,int *,int **,int *) ;
 char* FUNC_5 (int ,char const*,char const*,int *) ;
 int FUNC_6 (char*) ;
 scalar_t__ FUNC_7 (char*,TYPE_1__*) ;
 TYPE_4__* VAR_3 ;
 scalar_t__ FUNC_8 (char*,TYPE_1__*) ;
 int FUNC_9 (int ,char const*,char const*,int ,int ) ;
 int FUNC_10 (char*,char*) ;

__attribute__((used)) static int
FUNC_11 (const char *VAR_4,
               int VAR_5,
               const char *VAR_6,
               struct index_state *VAR_7,
               const char *VAR_8,
               const char *VAR_9,
               SeafileCrypt *VAR_10,
               gboolean VAR_11,
               GList *VAR_12,
               gint64 *VAR_13,
               GQueue **VAR_14,
               AddOptions *VAR_15)
{
    char *VAR_16;
    SeafStat VAR_17;

    VAR_16 = FUNC_5 (VAR_1, VAR_8, VAR_9, ((void*)0));
    if (FUNC_8 (VAR_16, &VAR_17) < 0) {

        if (FUNC_7 (VAR_16, &VAR_17) == 0 && FUNC_1(VAR_17.st_mode)) {
            FUNC_6 (VAR_16);
            return 0;
        }
        FUNC_10 ("Failed to stat %s.\n", VAR_16);
        FUNC_6 (VAR_16);


        FUNC_9 (VAR_3->sync_mgr,
                                              VAR_4,
                                              VAR_9,
                                              0,
                                              VAR_2);

        return 0;
    }

    if (FUNC_2(VAR_17.st_mode)) {
        FUNC_4 (VAR_4,
                  VAR_5,
                  VAR_6,
                  VAR_7,
                  VAR_9,
                  VAR_16,
                  &VAR_17,
                  VAR_10,
                  VAR_13,
                  VAR_14,
                  VAR_15);
    } else if (FUNC_0(VAR_17.st_mode)) {
        AddParams VAR_18 = {
            .repo_id = VAR_4,
            .version = VAR_5,
            .modifier = VAR_6,
            .istate = VAR_7,
            .worktree = VAR_8,
            .crypt = VAR_10,
            .ignore_empty_dir = VAR_11,
            .ignore_list = VAR_12,
            .total_size = VAR_13,
            .remain_files = VAR_14,
            .options = VAR_15,
        };

        FUNC_3 (VAR_9, VAR_16, &VAR_17, &VAR_18, VAR_0);
    }

    FUNC_6 (VAR_16);
    return 0;
}
