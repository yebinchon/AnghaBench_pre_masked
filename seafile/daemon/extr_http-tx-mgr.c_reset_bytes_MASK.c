
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef TYPE_1__* gpointer ;
struct TYPE_9__ {TYPE_3__* priv; } ;
struct TYPE_8__ {int upload_tasks; int download_tasks; } ;
struct TYPE_7__ {int tx_bytes; void* last_tx_bytes; } ;
typedef TYPE_1__ HttpTxTask ;
typedef TYPE_3__ HttpTxPriv ;
typedef TYPE_4__ HttpTxManager ;
typedef int GHashTableIter ;


 void* FUNC_0 (int *) ;
 int FUNC_1 (int *,int ) ;
 int FUNC_2 (int *,int ) ;
 scalar_t__ FUNC_3 (int *,TYPE_1__**,TYPE_1__**) ;

__attribute__((used)) static int
FUNC_4 (void *VAR_0)
{
    HttpTxManager *VAR_1 = VAR_0;
    HttpTxPriv *VAR_2 = VAR_1->priv;
    GHashTableIter VAR_3;
    gpointer VAR_4, VAR_5;
    HttpTxTask *VAR_6;

    FUNC_2 (&VAR_3, VAR_2->download_tasks);
    while (FUNC_3 (&VAR_3, &VAR_4, &VAR_5)) {
        VAR_6 = VAR_5;
        VAR_6->last_tx_bytes = FUNC_0 (&VAR_6->tx_bytes);
        FUNC_1 (&VAR_6->tx_bytes, 0);
    }

    FUNC_2 (&VAR_3, VAR_2->upload_tasks);
    while (FUNC_3 (&VAR_3, &VAR_4, &VAR_5)) {
        VAR_6 = VAR_5;
        VAR_6->last_tx_bytes = FUNC_0 (&VAR_6->tx_bytes);
        FUNC_1 (&VAR_6->tx_bytes, 0);
    }

    return 1;
}
