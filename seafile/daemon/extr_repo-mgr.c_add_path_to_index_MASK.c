
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_19__ TYPE_4__ ;
typedef struct TYPE_18__ TYPE_3__ ;
typedef struct TYPE_17__ TYPE_2__ ;
typedef struct TYPE_16__ TYPE_1__ ;


struct index_state {int dummy; } ;
typedef int options ;
typedef int gint64 ;
struct TYPE_19__ {int changeset; int is_repo_ro; int * fset; int startup_scan; } ;
struct TYPE_18__ {char* data; struct TYPE_18__* next; } ;
struct TYPE_17__ {int worktree; int email; int version; int id; int changeset; int is_readonly; int name; } ;
struct TYPE_16__ {int st_mode; } ;
typedef int SeafileCrypt ;
typedef TYPE_1__ SeafStat ;
typedef TYPE_2__ SeafRepo ;
typedef int LockedFileSet ;
typedef int GQueue ;
typedef TYPE_3__ GList ;
typedef TYPE_4__ AddOptions ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (int ) ;
 int VAR_3 ;
 int FUNC_1 (int ,int ,int ,struct index_state*,int ,char const*,int *,int ,TYPE_3__*,int *,int **,TYPE_4__*) ;
 scalar_t__ FUNC_2 (int ,char const*,TYPE_3__*) ;
 scalar_t__ VAR_4 ;
 char* FUNC_3 (int ,char const*,int *) ;
 int FUNC_4 (char*) ;
 TYPE_3__* FUNC_5 (TYPE_3__*,int ) ;
 char* FUNC_6 (char*,char*,int *) ;
 int FUNC_7 (char const*) ;
 int FUNC_8 (TYPE_4__*,int ,int) ;
 int FUNC_9 (struct index_state*,int ,char*,TYPE_3__*,int *,int ,int ,int ) ;
 int FUNC_10 (char*,char const*) ;
 scalar_t__ FUNC_11 (char*,TYPE_1__*) ;
 int FUNC_12 (char*,char const*,int ) ;
 int FUNC_13 (int ,int ,char const*,int ) ;
 scalar_t__ FUNC_14 (char*,char const*) ;
 int FUNC_15 (scalar_t__) ;
 int FUNC_16 (char*) ;
 scalar_t__ FUNC_17 (char*,char const*,int ) ;

__attribute__((used)) static int
FUNC_18 (SeafRepo *VAR_5, struct index_state *VAR_6,
                   SeafileCrypt *VAR_7, const char *VAR_8, GList *VAR_9,
                   GList **VAR_10, gint64 *VAR_11, GQueue **VAR_12,
                   LockedFileSet *VAR_13)
{
    char *VAR_14;
    SeafStat VAR_15;
    AddOptions VAR_16;




    if (VAR_8[0] == 0) {
        FUNC_9 (VAR_6, VAR_5->worktree, "", VAR_9, VAR_13,
                        VAR_5->id, VAR_5->is_readonly, VAR_5->changeset);

        FUNC_8 (&VAR_16, 0, sizeof(VAR_16));
        VAR_16.fset = VAR_13;
        VAR_16.is_repo_ro = VAR_5->is_readonly;
        VAR_16.startup_scan = VAR_3;
        VAR_16.changeset = VAR_5->changeset;

        FUNC_1 (VAR_5->id, VAR_5->version, VAR_5->email, VAR_6,
                       VAR_5->worktree, VAR_8,
                       VAR_7, VAR_1, VAR_9,
                       VAR_11, VAR_12, &VAR_16);

        return 0;
    }




    GList *VAR_17;
    char *VAR_18, *VAR_19;
    for (VAR_17 = *VAR_10; VAR_17; VAR_17 = VAR_17->next) {
        VAR_18 = VAR_17->data;

        if (FUNC_14 (VAR_18, VAR_8) == 0) {
            FUNC_10 ("%s has been scanned before, skip adding.\n", VAR_8);
            return 0;
        }


        VAR_19 = FUNC_6 (VAR_18, "/", ((void*)0));
        if (FUNC_17 (VAR_19, VAR_8, FUNC_16(VAR_19)) == 0) {
            FUNC_4 (VAR_19);
            FUNC_10 ("%s has been scanned before, skip adding.\n", VAR_8);
            return 0;
        }
        FUNC_4 (VAR_19);
    }

    if (FUNC_2 (VAR_5->worktree, VAR_8, VAR_9))
        return 0;

    VAR_14 = FUNC_3 (VAR_5->worktree, VAR_8, ((void*)0));

    if (FUNC_11 (VAR_14, &VAR_15) < 0) {
        if (VAR_4 != VAR_0)
            FUNC_13 (VAR_5->id, VAR_5->name, VAR_8,
                                               VAR_2);
        FUNC_12 ("Failed to stat %s: %s.\n", VAR_8, FUNC_15(VAR_4));
        FUNC_4 (VAR_14);
        return -1;
    }

    if (FUNC_0(VAR_15.st_mode))
        *VAR_10 = FUNC_5 (*VAR_10, FUNC_7(VAR_8));

    FUNC_8 (&VAR_16, 0, sizeof(VAR_16));
    VAR_16.fset = VAR_13;
    VAR_16.is_repo_ro = VAR_5->is_readonly;
    VAR_16.changeset = VAR_5->changeset;


    FUNC_1 (VAR_5->id, VAR_5->version, VAR_5->email, VAR_6, VAR_5->worktree, VAR_8,
                   VAR_7, VAR_1, VAR_9, VAR_11, VAR_12, &VAR_16);

    FUNC_4 (VAR_14);
    return 0;
}
