
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef scalar_t__ gint ;
struct TYPE_8__ {TYPE_1__* sync_mgr; int block_mgr; } ;
struct TYPE_7__ {scalar_t__ state; int tx_bytes; int error; int repo_id; scalar_t__ all_stop; } ;
struct TYPE_6__ {int block_id; int block; TYPE_3__* task; } ;
struct TYPE_5__ {scalar_t__ upload_limit; int sent_bytes; } ;
typedef TYPE_2__ SendBlockData ;
typedef TYPE_3__ HttpTxTask ;


 size_t VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *,int) ;
 scalar_t__ FUNC_1 (int *) ;
 int FUNC_2 (int) ;
 TYPE_4__* VAR_3 ;
 int FUNC_3 (int ,int ,void*,size_t) ;
 int FUNC_4 (char*,int ,int ) ;

__attribute__((used)) static size_t
FUNC_5 (void *VAR_4, size_t VAR_5, size_t VAR_6, void *VAR_7)
{
    size_t VAR_8 = VAR_5 *VAR_6;
    SendBlockData *VAR_9 = VAR_7;
    HttpTxTask *VAR_10 = VAR_9->task;
    int VAR_11;

    if (VAR_10->state == VAR_1 || VAR_10->all_stop)
        return VAR_0;

    VAR_11 = FUNC_3 (VAR_3->block_mgr,
                                       VAR_9->block,
                                       VAR_4, VAR_8);
    if (VAR_11 < 0) {
        FUNC_4 ("Failed to read block %s in repo %.8s.\n",
                      VAR_9->block_id, VAR_10->repo_id);
        VAR_10->error = VAR_2;
        return VAR_0;
    }


    FUNC_0 (&(VAR_3->sync_mgr->sent_bytes), VAR_11);


    FUNC_0 (&VAR_10->tx_bytes, VAR_11);






    while (1) {
        gint VAR_12 = FUNC_1(&(VAR_3->sync_mgr->sent_bytes));
        if (VAR_3->sync_mgr->upload_limit > 0 &&
            VAR_12 > VAR_3->sync_mgr->upload_limit)

            FUNC_2 (100000);
        else
            break;
    }

    return VAR_11;
}
