
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_16__ TYPE_4__ ;
typedef struct TYPE_15__ TYPE_3__ ;
typedef struct TYPE_14__ TYPE_2__ ;
typedef struct TYPE_13__ TYPE_1__ ;


typedef int gint ;
typedef int gboolean ;
struct TYPE_13__ {int last_changed; } ;
typedef TYPE_1__ WTStatus ;
struct TYPE_16__ {scalar_t__ Action; int FileNameLength; int FileName; } ;
struct TYPE_15__ {TYPE_1__* status; } ;
struct TYPE_14__ {int st_mode; } ;
typedef TYPE_2__ SeafStat ;
typedef TYPE_3__ RepoWatchInfo ;
typedef TYPE_4__* PFILE_NOTIFY_INFORMATION ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ FUNC_0 (int ) ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_1 (TYPE_1__*,int ,char*,int *) ;
 char* FUNC_2 (char const*,int ,int ,int) ;
 int FUNC_3 (int *,int ) ;
 char* FUNC_4 (char const*,char*,int *) ;
 int FUNC_5 (char*) ;
 scalar_t__ FUNC_6 (TYPE_3__*,TYPE_4__*) ;
 int FUNC_7 (TYPE_3__*,TYPE_4__*,char const*,char*,int) ;
 int FUNC_8 (char*,char*) ;
 int FUNC_9 (char*,TYPE_2__*) ;
 scalar_t__ FUNC_10 (int *) ;

__attribute__((used)) static void
FUNC_11 (RepoWatchInfo *VAR_8,
                   const char *VAR_9,
                   PFILE_NOTIFY_INFORMATION VAR_10,
                   gboolean VAR_11)
{
    WTStatus *VAR_12 = VAR_8->status;
    char *VAR_13;
    gboolean VAR_14 = VAR_5;






    gboolean VAR_15 = !(VAR_10->Action == VAR_4 ||
                                   VAR_10->Action == VAR_3);
    VAR_13 = FUNC_2 (VAR_9, VAR_10->FileName, VAR_10->FileNameLength,
                                     VAR_15);
    if (!VAR_13)
        goto out;

    FUNC_7 (VAR_8, VAR_10, VAR_9, VAR_13, VAR_11);

    if (VAR_10->Action == VAR_2) {
        FUNC_8 ("Modified %s.\n", VAR_13);


        char *VAR_16 = FUNC_4 (VAR_9, VAR_13, ((void*)0));
        SeafStat VAR_17;
        int VAR_18 = FUNC_9 (VAR_16, &VAR_17);
        if (VAR_18 < 0 || FUNC_0(VAR_17.st_mode)) {
            FUNC_5 (VAR_16);
            goto out;
        }
        FUNC_5 (VAR_16);

        if (VAR_14)
            FUNC_1 (VAR_12, VAR_6, VAR_13, ((void*)0));
    } else if (VAR_10->Action == VAR_1) {
        FUNC_8 ("Created %s.\n", VAR_13);
        FUNC_1 (VAR_12, VAR_6, VAR_13, ((void*)0));
    } else if (VAR_10->Action == VAR_3) {
        FUNC_8 ("Deleted %s.\n", VAR_13);
        FUNC_1 (VAR_12, VAR_7, VAR_13, ((void*)0));
    }

out:
    FUNC_5 (VAR_13);
    FUNC_3 (&VAR_8->status->last_changed, (gint)FUNC_10(((void*)0)));

}
