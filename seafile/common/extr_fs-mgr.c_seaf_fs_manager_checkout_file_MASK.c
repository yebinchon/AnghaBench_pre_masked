
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_4__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int mode_t ;
typedef scalar_t__ guint64 ;
typedef int guint32 ;
typedef int gint64 ;
typedef scalar_t__ gboolean ;
struct TYPE_6__ {int repo_mgr; } ;
struct TYPE_5__ {int n_blocks; char** blk_sha1s; } ;
typedef int SeafileCrypt ;
typedef TYPE_1__ Seafile ;
typedef int SeafRepo ;
typedef int SeafFSManager ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ FUNC_0 (char const*,int,char*,int,int *) ;
 int FUNC_1 (int) ;
 int VAR_9 ;
 int FUNC_2 (char*) ;
 char* FUNC_3 (char const*,int ,int *) ;
 char* FUNC_4 (char const*,char const*,int ) ;
 char* FUNC_5 (char const*,int,char const*,char const*,char const*) ;
 TYPE_4__* VAR_10 ;
 TYPE_1__* FUNC_6 (int *,char const*,int,char const*) ;
 int * FUNC_7 (int ,char const*) ;
 scalar_t__ FUNC_8 (char const*,scalar_t__) ;
 int FUNC_9 (char*,int,int) ;
 scalar_t__ FUNC_10 (char const*) ;
 scalar_t__ FUNC_11 (char const*,char const*) ;
 int FUNC_12 (char*) ;
 int FUNC_13 (char*,char const*,...) ;
 int FUNC_14 (TYPE_1__*) ;
 int FUNC_15 (int ) ;
 scalar_t__ FUNC_16 (int *) ;

int
FUNC_17 (SeafFSManager *VAR_11,
                               const char *VAR_12,
                               int VAR_13,
                               const char *VAR_14,
                               const char *VAR_15,
                               guint32 VAR_16,
                               guint64 VAR_17,
                               SeafileCrypt *VAR_18,
                               const char *VAR_19,
                               const char *VAR_20,
                               gboolean VAR_21,
                               gboolean *VAR_22,
                               const char *VAR_23)
{
    Seafile *VAR_24 = ((void*)0);
    char *VAR_25;
    int VAR_26 = -1;
    int VAR_27;
    char *VAR_28 = ((void*)0);
    char *VAR_29 = ((void*)0);
    char *VAR_30 = ((void*)0);

    *VAR_22 = VAR_0;



    VAR_24 = FUNC_6 (VAR_11, VAR_12, VAR_13, VAR_14);
    if (!VAR_24) {
        FUNC_13 ("File %s does not exist.\n", VAR_14);
        return -1;
    }

    VAR_28 = FUNC_3 (VAR_15, VAR_6, ((void*)0));

    mode_t VAR_31 = VAR_16 & 0100 ? 0777 : 0666;
    VAR_26 = FUNC_9 (VAR_28, VAR_4 | VAR_3 | VAR_2 | VAR_1,
                            VAR_31 & ~VAR_7);
    if (VAR_26 < 0) {
        FUNC_13 ("Failed to open file %s for checkout: %s.\n",
                   VAR_28, FUNC_15(VAR_9));
        goto bad;
    }

    for (VAR_27 = 0; VAR_27 < VAR_24->n_blocks; ++VAR_27) {
        VAR_25 = VAR_24->blk_sha1s[VAR_27];
        if (FUNC_0 (VAR_12, VAR_13, VAR_25, VAR_26, VAR_18) < 0)
            goto bad;
    }

    FUNC_1 (VAR_26);
    VAR_26 = -1;



    VAR_29 = FUNC_3 (VAR_15, VAR_5, ((void*)0));

    if (FUNC_10 (VAR_15) &&
        FUNC_11 (VAR_15, VAR_29) < 0) {
        FUNC_13 ("Failed to rename %s to %s: %s. "
                      "Checkout server version as conflict file.\n",
                      VAR_15, VAR_29, FUNC_15(VAR_9));

        *VAR_22 = VAR_8;

        VAR_30 = FUNC_5 (VAR_12, VAR_13,
                                                   VAR_20, VAR_19,
                                                   VAR_15);
        if (!VAR_30)
            goto bad;

        if (FUNC_11 (VAR_28, VAR_30) < 0) {
            goto bad;
        }

        goto out;
    }




    if (FUNC_11 (VAR_28, VAR_15) < 0) {
        FUNC_13 ("Failed to rename %s to %s: %s. "
                      "Checkout server version as conflict file.\n",
                      VAR_28, VAR_15, FUNC_15(VAR_9));

        *VAR_22 = VAR_8;


        if (FUNC_11 (VAR_29, VAR_15) < 0) {
            FUNC_13 ("Failed to rename %s to %s: %s. "
                          "Failed to restore backup file.\n",
                          VAR_29, VAR_15, FUNC_15(VAR_9));
        }

        VAR_30 = FUNC_5 (VAR_12, VAR_13,
                                                   VAR_20, VAR_19,
                                                   VAR_15);
        if (!VAR_30)
            goto bad;

        if (FUNC_11 (VAR_28, VAR_30) < 0) {
            goto bad;
        }

        goto out;
    }

    if (VAR_21) {
        *VAR_22 = VAR_8;
        const char *VAR_32 = ((void*)0);
        if (VAR_23) {
            VAR_32 = VAR_23;
        } else {
            SeafRepo *VAR_33 = FUNC_7 (VAR_10->repo_mgr, VAR_12);
            if (!VAR_33)
                goto bad;
            VAR_32 = VAR_23;
        }

        VAR_30 = FUNC_4 (VAR_15, VAR_32, (gint64)FUNC_16(((void*)0)));

        if (FUNC_10 (VAR_29) &&
            FUNC_11 (VAR_29, VAR_30) < 0) {
            FUNC_13 ("Failed to rename %s to %s: %s. "
                          "Failed to move backup file to conflict file.\n",
                          VAR_29, VAR_30, FUNC_15(VAR_9));
        }
    }

    if (VAR_17 > 0) {



        if (FUNC_8 (VAR_15, VAR_17) < 0) {
            FUNC_13 ("Failed to set mtime for %s.\n", VAR_15);
        }
    }

    FUNC_12 (VAR_29);

out:
    FUNC_2 (VAR_28);
    FUNC_2 (VAR_29);
    FUNC_2 (VAR_30);
    FUNC_14 (VAR_24);
    return 0;

bad:
    if (VAR_26 >= 0)
        FUNC_1 (VAR_26);

    FUNC_12 (VAR_28);
    FUNC_2 (VAR_28);
    FUNC_2 (VAR_29);
    FUNC_2 (VAR_30);
    FUNC_14 (VAR_24);
    return -1;
}
