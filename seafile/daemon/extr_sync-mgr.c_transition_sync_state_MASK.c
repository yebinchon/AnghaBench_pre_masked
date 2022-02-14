
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_7__ ;
typedef struct TYPE_13__ TYPE_6__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


struct TYPE_14__ {int worktree; int name; } ;
struct TYPE_13__ {int sync_mgr; } ;
struct TYPE_12__ {scalar_t__ uploaded_bytes; scalar_t__ total_bytes; void* end_multipart_upload; void* multipart_upload; void* in_sync; } ;
struct TYPE_11__ {int state; scalar_t__ error; TYPE_7__* repo; TYPE_1__* mgr; scalar_t__ uploaded; TYPE_3__* info; } ;
struct TYPE_10__ {int n_running_tasks; } ;
typedef TYPE_2__ SyncTask ;
typedef TYPE_3__ SyncInfo ;


 void* VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (TYPE_2__*) ;
 int FUNC_1 (int) ;
 scalar_t__ FUNC_2 (TYPE_7__*) ;
 int FUNC_3 (TYPE_7__*,int) ;
 TYPE_6__* VAR_8 ;
 int FUNC_4 (char*,int ,int ,...) ;
 int FUNC_5 (int ,int ) ;
 int FUNC_6 (scalar_t__) ;
 int * VAR_9 ;
 int FUNC_7 (TYPE_2__*,int) ;

__attribute__((used)) static void
FUNC_8 (SyncTask *VAR_10, int VAR_11)
{
    FUNC_1 (VAR_11 >= 0 && VAR_11 < VAR_7);

    SyncInfo *VAR_12 = VAR_10->info;

    if (VAR_10->state != VAR_11) {
        if (((VAR_10->state == VAR_6 && VAR_10->uploaded) ||
             VAR_10->state == VAR_5) &&
            VAR_11 == VAR_3 &&
            FUNC_2(VAR_10->repo))
            FUNC_3 (VAR_10->repo, (VAR_12->multipart_upload && !VAR_12->end_multipart_upload));





        if (VAR_11 == VAR_3 &&
            VAR_12->multipart_upload &&
            !VAR_12->end_multipart_upload) {
            FUNC_0 (VAR_10);
            return;
        }





        if (VAR_11 != VAR_4 && VAR_10->error != VAR_1) {
            VAR_11 = VAR_4;
            FUNC_4 ("Repo '%s' sync is finished but with error: %s\n",
                          VAR_10->repo->name,
                          FUNC_6(VAR_10->error));
        }

        if (!(VAR_10->state == VAR_3 && VAR_11 == VAR_6) &&
            !(VAR_10->state == VAR_6 && VAR_11 == VAR_3)) {
            FUNC_4 ("Repo '%s' sync state transition from '%s' to '%s'.\n",
                          VAR_10->repo->name,
                          VAR_9[VAR_10->state],
                          VAR_9[VAR_11]);
        }

        VAR_10->state = VAR_11;
        if (VAR_11 == VAR_3 ||
            VAR_11 == VAR_2 ||
            VAR_11 == VAR_4) {
            VAR_12->in_sync = VAR_0;
            --(VAR_10->mgr->n_running_tasks);
            FUNC_7 (VAR_10, VAR_11);


            if (VAR_11 == VAR_3) {
                VAR_12->multipart_upload = VAR_0;
                VAR_12->end_multipart_upload = VAR_0;
                VAR_12->total_bytes = 0;
                VAR_12->uploaded_bytes = 0;
            }
        }




    }
}
