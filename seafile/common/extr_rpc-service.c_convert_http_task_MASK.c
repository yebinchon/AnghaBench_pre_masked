
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int gint64 ;
struct TYPE_9__ {int sync_mgr; } ;
struct TYPE_8__ {scalar_t__ runtime_state; scalar_t__ type; scalar_t__ done_blocks; scalar_t__ n_blocks; int repo_id; int done_fs_objs; int n_fs_objs; int done_download; int total_download; int state; } ;
struct TYPE_7__ {int uploaded_bytes; int total_bytes; scalar_t__ multipart_upload; } ;
typedef TYPE_1__ SyncInfo ;
typedef int SeafileTask ;
typedef TYPE_2__ HttpTxTask ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (int *,char*,char*,char*,...) ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (int ) ;
 char* FUNC_3 (TYPE_2__*) ;
 TYPE_4__* VAR_3 ;
 TYPE_1__* FUNC_4 (int ,int ) ;
 int * FUNC_5 () ;

__attribute__((used)) static SeafileTask *
FUNC_6 (HttpTxTask *VAR_4)
{
    SeafileTask *VAR_5 = FUNC_5();

    FUNC_0 (VAR_5,
                  "repo_id", VAR_4->repo_id,
                  "state", FUNC_2(VAR_4->state),
                  "rt_state", FUNC_1(VAR_4->runtime_state),
                  ((void*)0));

    if (VAR_4->type == VAR_2) {
        FUNC_0 (VAR_5, "ttype", "download", ((void*)0));
        if (VAR_4->runtime_state == VAR_0) {
            FUNC_0 (VAR_5, "block_total", VAR_4->total_download,
                          "block_done", VAR_4->done_download,
                          ((void*)0));
            FUNC_0 (VAR_5, "rate", FUNC_3(VAR_4), ((void*)0));
        } else if (VAR_4->runtime_state == VAR_1) {
            FUNC_0 (VAR_5, "fs_objects_total", VAR_4->n_fs_objs,
                          "fs_objects_done", VAR_4->done_fs_objs,
                          ((void*)0));
        }
    } else {
        FUNC_0 (VAR_5, "ttype", "upload", ((void*)0));
        if (VAR_4->runtime_state == VAR_0) {
            SyncInfo *VAR_6 = FUNC_4 (VAR_3->sync_mgr, VAR_4->repo_id);
            if (VAR_6 && VAR_6->multipart_upload) {
                FUNC_0 (VAR_5, "block_total", VAR_6->total_bytes,
                              "block_done", VAR_6->uploaded_bytes,
                              ((void*)0));
            } else {
                FUNC_0 (VAR_5, "block_total", (gint64)VAR_4->n_blocks,
                              "block_done", (gint64)VAR_4->done_blocks,
                              ((void*)0));
            }
            FUNC_0 (VAR_5, "rate", FUNC_3(VAR_4), ((void*)0));
        }
    }

    return VAR_5;
}
