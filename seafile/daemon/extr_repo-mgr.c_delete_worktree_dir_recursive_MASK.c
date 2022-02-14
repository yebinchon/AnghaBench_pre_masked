
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct index_state {int dummy; } ;
struct TYPE_6__ {scalar_t__ sec; } ;
struct cache_entry {TYPE_1__ ce_mtime; } ;
typedef int gboolean ;
struct TYPE_8__ {int message; } ;
struct TYPE_7__ {scalar_t__ st_mtime; int st_mode; } ;
typedef TYPE_2__ SeafStat ;
typedef TYPE_3__ GError ;
typedef int GDir ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int ) ;
 int VAR_2 ;
 char* FUNC_1 (char*,char const*,char*,int *) ;
 int FUNC_2 (int *) ;
 int * FUNC_3 (char const*,int ,TYPE_3__**) ;
 char* FUNC_4 (int *) ;
 int FUNC_5 (char*) ;
 scalar_t__ FUNC_6 (char const*) ;
 char* FUNC_7 (char const*,int,int ) ;
 struct cache_entry* FUNC_8 (struct index_state*,char*,int ,int ) ;
 int FUNC_9 (char*) ;
 scalar_t__ FUNC_10 (char*,TYPE_2__*) ;
 int FUNC_11 (char*,char*) ;
 scalar_t__ FUNC_12 (char*) ;
 int FUNC_13 (char*,char const*,...) ;
 int FUNC_14 (int ) ;
 int FUNC_15 (char*) ;

__attribute__((used)) static int
FUNC_16 (struct index_state *VAR_3,
                               const char *VAR_4,
                               const char *VAR_5)
{
    GDir *VAR_6;
    const char *VAR_7;
    char *VAR_8;
    GError *VAR_9 = ((void*)0);
    char *VAR_10, *VAR_11;
    SeafStat VAR_12;
    int VAR_13 = 0;
    gboolean VAR_14 = VAR_0;

    VAR_6 = FUNC_3 (VAR_5, 0, &VAR_9);
    if (!VAR_6) {
        FUNC_13 ("Failed to open dir %s: %s.\n", VAR_5, VAR_9->message);
        return -1;
    }

    while ((VAR_7 = FUNC_4 (VAR_6)) != ((void*)0)) {
        VAR_8 = FUNC_7 (VAR_7, -1, VAR_1);
        VAR_10 = FUNC_1 ("/", VAR_4, VAR_8, ((void*)0));
        VAR_11 = FUNC_1 ("/", VAR_5, VAR_8, ((void*)0));
        VAR_14 = FUNC_9 (VAR_8);
        FUNC_5 (VAR_8);

        if (FUNC_10 (VAR_11, &VAR_12) < 0) {
            FUNC_13 ("Failed to stat %s.\n", VAR_11);
            FUNC_5 (VAR_10);
            FUNC_5 (VAR_11);
            VAR_13 = -1;
            continue;
        }

        if (FUNC_0(VAR_12.st_mode)) {
            if (FUNC_16 (VAR_3, VAR_10, VAR_11) < 0)
                VAR_13 = -1;
        } else {
            struct cache_entry *VAR_15;

            if (!VAR_14) {
                VAR_15 = FUNC_8 (VAR_3, VAR_10, FUNC_15(VAR_10), 0);
                if (!VAR_15 || VAR_15->ce_mtime.sec != VAR_12.st_mtime) {
                    FUNC_11 ("File %s is changed, skip deleting it.\n", VAR_11);
                    FUNC_5 (VAR_10);
                    FUNC_5 (VAR_11);
                    VAR_13 = -1;
                    continue;
                }
            }


            if (FUNC_12 (VAR_11) < 0) {
                FUNC_13 ("Failed to delete file %s: %s.\n",
                              VAR_11, FUNC_14(VAR_2));
                VAR_13 = -1;
            }
        }

        FUNC_5 (VAR_10);
        FUNC_5 (VAR_11);
    }

    FUNC_2 (VAR_6);

    if (VAR_13 < 0)
        return VAR_13;

    if (FUNC_6 (VAR_5) < 0) {
        FUNC_13 ("Failed to delete dir %s: %s.\n", VAR_5, FUNC_14(VAR_2));
        VAR_13 = -1;
    }

    return VAR_13;
}
