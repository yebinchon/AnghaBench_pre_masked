
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_17__ TYPE_6__ ;
typedef struct TYPE_16__ TYPE_4__ ;
typedef struct TYPE_15__ TYPE_3__ ;
typedef struct TYPE_14__ TYPE_2__ ;
typedef struct TYPE_13__ TYPE_1__ ;


struct index_state {int dummy; } ;
typedef scalar_t__ gint64 ;
typedef void* gboolean ;
struct TYPE_13__ {int q_lock; int event_q; void* partial_commit; } ;
typedef TYPE_1__ WTStatus ;
struct TYPE_14__ {int * remain_files; int path; } ;
typedef TYPE_2__ WTEvent ;
struct TYPE_17__ {int sync_mgr; } ;
struct TYPE_16__ {int id; int create_partial_commit; } ;
struct TYPE_15__ {void* end_multipart_upload; scalar_t__ total_bytes; void* multipart_upload; } ;
typedef TYPE_3__ SyncInfo ;
typedef int SeafileCrypt ;
typedef TYPE_4__ SeafRepo ;
typedef int LockedFileSet ;
typedef int GQueue ;
typedef int GList ;


 void* VAR_0 ;
 scalar_t__ VAR_1 ;
 void* VAR_2 ;
 int FUNC_0 (TYPE_4__*,struct index_state*,int *,int ,int *,int **,scalar_t__*,int **,int *) ;
 int FUNC_1 (TYPE_4__*,struct index_state*,int *,int *,int *,scalar_t__*) ;
 int FUNC_2 (int *) ;
 scalar_t__ FUNC_3 (int *) ;
 int FUNC_4 (int ,TYPE_2__*) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 TYPE_6__* VAR_3 ;
 int FUNC_7 (char*,int ) ;
 TYPE_3__* FUNC_8 (int ,int ) ;

__attribute__((used)) static gboolean
FUNC_9 (SeafRepo *VAR_4, struct index_state *VAR_5,
                  SeafileCrypt *VAR_6, GList *VAR_7,
                  LockedFileSet *VAR_8,
                  WTStatus *VAR_9, WTEvent *VAR_10,
                  GList **VAR_11, gint64 *VAR_12)
{
    SyncInfo *VAR_13;

    if (!VAR_4->create_partial_commit) {




        FUNC_0 (VAR_4, VAR_5, VAR_6, VAR_10->path,
                           VAR_7, VAR_11,
                           VAR_12, ((void*)0), ((void*)0));
    } else if (!VAR_10->remain_files) {
        GQueue *VAR_14 = ((void*)0);
        FUNC_0 (VAR_4, VAR_5, VAR_6, VAR_10->path,
                           VAR_7, VAR_11,
                           VAR_12, &VAR_14, VAR_8);
        if (*VAR_12 >= VAR_1) {
            FUNC_7 ("Creating partial commit after adding %s.\n",
                          VAR_10->path);

            VAR_9->partial_commit = VAR_2;







            if (VAR_14) {
                if (FUNC_3 (VAR_14) == 0) {
                    FUNC_2 (VAR_14);
                    return VAR_2;
                }

                FUNC_7 ("Remain files for %s.\n", VAR_10->path);


                VAR_10->remain_files = VAR_14;

                FUNC_5 (&VAR_9->q_lock);
                FUNC_4 (VAR_9->event_q, VAR_10);
                FUNC_6 (&VAR_9->q_lock);

                VAR_13 = FUNC_8 (VAR_3->sync_mgr, VAR_4->id);
                if (!VAR_13->multipart_upload) {
                    VAR_13->multipart_upload = VAR_2;
                    VAR_13->total_bytes = *VAR_12;
                }
            }

            return VAR_2;
        }
    } else {
        FUNC_7 ("Adding remaining files for %s.\n", VAR_10->path);

        FUNC_1 (VAR_4, VAR_5, VAR_6, VAR_10->remain_files,
                          VAR_7, VAR_12);
        if (FUNC_3 (VAR_10->remain_files) != 0) {
            FUNC_5 (&VAR_9->q_lock);
            FUNC_4 (VAR_9->event_q, VAR_10);
            FUNC_6 (&VAR_9->q_lock);
            return VAR_2;
        } else {
            VAR_13 = FUNC_8 (VAR_3->sync_mgr, VAR_4->id);
            VAR_13->end_multipart_upload = VAR_2;
            return VAR_2;
        }
        if (*VAR_12 >= VAR_1)
            return VAR_2;
    }

    return VAR_0;
}
