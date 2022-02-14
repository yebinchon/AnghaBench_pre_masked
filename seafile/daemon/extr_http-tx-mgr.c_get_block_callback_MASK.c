
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
struct TYPE_5__ {scalar_t__ download_limit; int recv_bytes; } ;
typedef TYPE_2__ SendBlockData ;
typedef TYPE_3__ HttpTxTask ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,size_t) ;
 scalar_t__ FUNC_1 (int *) ;
 int FUNC_2 (int) ;
 TYPE_4__* VAR_2 ;
 size_t FUNC_3 (int ,int ,void*,size_t) ;
 int FUNC_4 (char*,int ,int ) ;

__attribute__((used)) static size_t
FUNC_5 (void *VAR_3, size_t VAR_4, size_t VAR_5, void *VAR_6)
{
    size_t VAR_7 = VAR_4 *VAR_5;
    SendBlockData *VAR_8 = VAR_6;
    HttpTxTask *VAR_9 = VAR_8->task;
    size_t VAR_10;

    if (VAR_9->state == VAR_0 || VAR_9->all_stop)
        return 0;

    VAR_10 = FUNC_3 (VAR_2->block_mgr,
                                        VAR_8->block,
                                        VAR_3, VAR_7);
    if (VAR_10 < VAR_7) {
        FUNC_4 ("Failed to write block %s in repo %.8s.\n",
                      VAR_8->block_id, VAR_9->repo_id);
        VAR_9->error = VAR_1;
        return VAR_10;
    }


    FUNC_0 (&(VAR_2->sync_mgr->recv_bytes), VAR_10);


    FUNC_0 (&VAR_9->tx_bytes, VAR_10);






    while (1) {
        gint VAR_11 = FUNC_1(&(VAR_2->sync_mgr->recv_bytes));
        if (VAR_2->sync_mgr->download_limit > 0 &&
            VAR_11 > VAR_2->sync_mgr->download_limit)

            FUNC_2 (100000);
        else
            break;
    }

    return VAR_10;
}
