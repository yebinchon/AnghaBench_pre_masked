
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int uint32_t ;
struct dirent {char const* d_name; scalar_t__ d_type; } ;
typedef scalar_t__ gboolean ;
struct TYPE_6__ {int status; int mapping; } ;
struct TYPE_5__ {int st_mode; } ;
typedef TYPE_1__ SeafStat ;
typedef TYPE_2__ RepoWatchInfo ;
typedef int DIR ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ FUNC_0 (int ) ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int FUNC_1 (int ,int ,char const*,int *) ;
 int FUNC_2 (int ,char const*,int) ;
 int FUNC_3 (int *) ;
 int VAR_6 ;
 char* FUNC_4 (char const*,char const*,int *) ;
 int FUNC_5 (char*) ;
 int FUNC_6 (int,char*,int ) ;
 int * FUNC_7 (char*) ;
 struct dirent* FUNC_8 (int *) ;
 int FUNC_9 (char*,char*) ;
 int FUNC_10 (char*,char*,int ) ;
 scalar_t__ FUNC_11 (char*,TYPE_1__*) ;
 scalar_t__ FUNC_12 (char const*,char*) ;
 int FUNC_13 (int ) ;

__attribute__((used)) static int
FUNC_14 (RepoWatchInfo *VAR_7,
                     int VAR_8,
                     const char *VAR_9,
                     const char *VAR_10,
                     gboolean VAR_11)
{
    char *VAR_12;
    SeafStat VAR_13;
    DIR *VAR_14;
    struct dirent *VAR_15;
    int VAR_16;

    VAR_12 = FUNC_4 (VAR_9, VAR_10, ((void*)0));

    if (FUNC_11 (VAR_12, &VAR_13) < 0) {
        FUNC_10 ("[wt mon] fail to stat %s: %s\n", VAR_12, FUNC_13(VAR_6));
        goto out;
    }

    if (VAR_11 && VAR_10[0] != 0)
        FUNC_1 (VAR_7->status, VAR_5,
                            VAR_10, ((void*)0));

    if (FUNC_0 (VAR_13.st_mode)) {
        FUNC_9 ("Watching %s.\n", VAR_12);

        VAR_16 = FUNC_6 (VAR_8, VAR_12, (uint32_t)VAR_4);
        if (VAR_16 < 0) {
            FUNC_10 ("[wt mon] fail to add watch to %s: %s.\n",
                          VAR_12, FUNC_13(VAR_6));
            goto out;
        }

        FUNC_2 (VAR_7->mapping, VAR_10, VAR_16);

        VAR_14 = FUNC_7 (VAR_12);
        if (!VAR_14) {
            FUNC_10 ("[wt mon] fail to open dir %s: %s.\n",
                          VAR_12, FUNC_13(VAR_6));
            goto out;
        }

        while (1) {
            VAR_15 = FUNC_8 (VAR_14);
            if (!VAR_15)
                break;
            if (FUNC_12 (VAR_15->d_name, ".") == 0 ||
                FUNC_12 (VAR_15->d_name, "..") == 0)
                continue;

            char *VAR_17 = FUNC_4 (VAR_10, VAR_15->d_name, ((void*)0));





            if (VAR_15->d_type == VAR_0 || VAR_15->d_type == VAR_1 ||
                VAR_15->d_type == VAR_3)
                FUNC_14 (VAR_7, VAR_8, VAR_9, VAR_17, VAR_11);

            if (VAR_15->d_type == VAR_2 && VAR_11)
                FUNC_1 (VAR_7->status, VAR_5,
                                    VAR_17, ((void*)0));
            FUNC_5 (VAR_17);
        }

        FUNC_3 (VAR_14);
    }

out:
    FUNC_5 (VAR_12);
    return 0;
}
