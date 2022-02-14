
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef void* gpointer ;
struct TYPE_8__ {int finished_tasks; int cpool; TYPE_1__* http_task; } ;
struct TYPE_7__ {int result; int block_size; int block_id; } ;
struct TYPE_6__ {int error; int host; } ;
typedef TYPE_1__ HttpTxTask ;
typedef int Connection ;
typedef TYPE_2__ BlockUploadTask ;
typedef TYPE_3__ BlockUploadData ;


 int VAR_0 ;
 int * FUNC_0 (int ) ;
 int FUNC_1 (int ,int *) ;
 int FUNC_2 (int ,TYPE_2__*) ;
 int FUNC_3 (char*,int ) ;
 int FUNC_4 (TYPE_1__*,int *,int ,int *) ;

__attribute__((used)) static void
FUNC_5 (gpointer VAR_1, gpointer VAR_2)
{
    BlockUploadTask *VAR_3 = VAR_1;
    BlockUploadData *VAR_4 = VAR_2;
    HttpTxTask *VAR_5 = VAR_4->http_task;
    Connection *VAR_6;
    int VAR_7 = 0;

    VAR_6 = FUNC_0 (VAR_4->cpool);
    if (!VAR_6) {
        FUNC_3 ("Failed to get connection to host %s.\n", VAR_5->host);
        VAR_5->error = VAR_0;
        VAR_7 = -1;
        goto out;
    }

    VAR_7 = FUNC_4 (VAR_5, VAR_6, VAR_3->block_id, &VAR_3->block_size);

    FUNC_1 (VAR_4->cpool, VAR_6);

out:
    VAR_3->result = VAR_7;
    FUNC_2 (VAR_4->finished_tasks, VAR_3);
}
