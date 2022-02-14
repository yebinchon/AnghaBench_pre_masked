
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_18__ TYPE_6__ ;
typedef struct TYPE_17__ TYPE_5__ ;
typedef struct TYPE_16__ TYPE_4__ ;
typedef struct TYPE_15__ TYPE_3__ ;
typedef struct TYPE_14__ TYPE_2__ ;
typedef struct TYPE_13__ TYPE_1__ ;


struct TYPE_13__ {scalar_t__ sec; } ;
struct cache_entry {int ce_mode; TYPE_1__ ce_mtime; int sha1; } ;
typedef int gboolean ;
struct TYPE_18__ {int mode; scalar_t__ mtime; int sha1; } ;
struct TYPE_17__ {int repo_version; TYPE_3__* http_task; int * crypt; } ;
struct TYPE_16__ {char* path; void* force_conflict; void* no_checkout; TYPE_6__* de; struct cache_entry* ce; } ;
struct TYPE_15__ {scalar_t__ state; } ;
struct TYPE_14__ {scalar_t__ st_mtime; int st_mode; } ;
typedef int SeafileCrypt ;
typedef TYPE_2__ SeafStat ;
typedef TYPE_3__ HttpTxTask ;
typedef TYPE_4__ FileTxTask ;
typedef TYPE_5__ FileTxData ;
typedef TYPE_6__ DiffEntry ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 scalar_t__ FUNC_0 (int ) ;
 void* VAR_6 ;
 int FUNC_1 (char*,int) ;
 scalar_t__ FUNC_2 (char*,TYPE_2__*,int ,int *,int) ;
 int FUNC_3 (struct cache_entry*,TYPE_2__*) ;
 int FUNC_4 (TYPE_3__*,char*) ;
 scalar_t__ FUNC_5 (int ,int ,int) ;
 int FUNC_6 (int ,char*,int) ;
 int FUNC_7 (char*) ;
 int FUNC_8 (char*,char*) ;
 int FUNC_9 (char*,scalar_t__) ;
 scalar_t__ FUNC_10 (char*,TYPE_2__*) ;

__attribute__((used)) static int
FUNC_11 (FileTxData *VAR_7, FileTxTask *VAR_8)
{
    int VAR_9 = VAR_7->repo_version;
    struct cache_entry *VAR_10 = VAR_8->ce;
    DiffEntry *VAR_11 = VAR_8->de;
    SeafileCrypt *VAR_12 = VAR_7->crypt;
    char *VAR_13 = VAR_8->path;
    HttpTxTask *VAR_14 = VAR_7->http_task;
    SeafStat VAR_15;
    char VAR_16[41];
    gboolean VAR_17 = VAR_0;

    FUNC_6 (VAR_11->sha1, VAR_16, 20);

    VAR_17 = (FUNC_10 (VAR_13, &VAR_15) == 0);

    if (VAR_17 && FUNC_0(VAR_15.st_mode)) {
        if (VAR_15.st_mtime == VAR_10->ce_mtime.sec) {

            if (FUNC_5 (VAR_11->sha1, VAR_10->sha1, 20) == 0) {
                FUNC_7 ("wt and index are consistent. no need to checkout.\n");
                VAR_8->no_checkout = VAR_6;


                if (VAR_11->mode != VAR_10->ce_mode) {

                    FUNC_1 (VAR_13, VAR_11->mode & ~VAR_5);
                    VAR_10->ce_mode = VAR_11->mode;

                }


                if (VAR_11->mtime != VAR_10->ce_mtime.sec) {
                    FUNC_9 (VAR_13, VAR_11->mtime);
                    VAR_10->ce_mtime.sec = VAR_11->mtime;
                }

                FUNC_3 (VAR_10, &VAR_15);

                return VAR_2;
            }

        } else {
            if (FUNC_2 (VAR_13, &VAR_15, VAR_11->sha1, VAR_12, VAR_9) == 0) {



                FUNC_7 ("update index only.\n");
                VAR_8->no_checkout = VAR_6;
                FUNC_3 (VAR_10, &VAR_15);
                return VAR_2;
            } else {

                FUNC_8 ("File %s is updated by user. "
                              "Will checkout to conflict file later.\n", VAR_13);
                VAR_8->force_conflict = VAR_6;
            }
        }
    }


    int VAR_18;
    VAR_18 = FUNC_4 (VAR_14, VAR_16);
    if (VAR_14->state == VAR_4) {
        return VAR_1;
    }
    if (VAR_18 < 0) {
        return VAR_3;
    }

    return VAR_2;
}
