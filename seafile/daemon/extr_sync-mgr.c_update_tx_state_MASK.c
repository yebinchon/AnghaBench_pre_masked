
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_4__ ;
typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


struct TYPE_14__ {int mq_mgr; int http_tx_mgr; } ;
struct TYPE_13__ {int * data; struct TYPE_13__* next; } ;
struct TYPE_12__ {scalar_t__ len; int str; } ;
struct TYPE_11__ {int recv_bytes; void* last_recv_bytes; int sent_bytes; void* last_sent_bytes; } ;
typedef TYPE_1__ SeafSyncManager ;
typedef int HttpTxTask ;
typedef TYPE_2__ GString ;
typedef TYPE_3__ GList ;


 int VAR_0 ;
 int FUNC_0 (int *,TYPE_2__*) ;
 void* FUNC_1 (int *) ;
 int FUNC_2 (int *,int ) ;
 int FUNC_3 (TYPE_3__*) ;
 int FUNC_4 (TYPE_2__*,int) ;
 TYPE_2__* FUNC_5 (int *) ;
 TYPE_3__* FUNC_6 (int ) ;
 TYPE_3__* FUNC_7 (int ) ;
 TYPE_4__* VAR_1 ;
 int FUNC_8 (int ,char*,int ) ;

__attribute__((used)) static int
FUNC_9 (void *VAR_2)
{
    SeafSyncManager *VAR_3 = VAR_2;
    GString *VAR_4 = FUNC_5 (((void*)0));
    GList *VAR_5, *VAR_6;
    HttpTxTask *VAR_7;

    VAR_3->last_sent_bytes = FUNC_1 (&VAR_3->sent_bytes);
    FUNC_2 (&VAR_3->sent_bytes, 0);
    VAR_3->last_recv_bytes = FUNC_1 (&VAR_3->recv_bytes);
    FUNC_2 (&VAR_3->recv_bytes, 0);

    VAR_5 = FUNC_7 (VAR_1->http_tx_mgr);
    for (VAR_6 = VAR_5; VAR_6; VAR_6 = VAR_6->next) {
        VAR_7 = VAR_6->data;
        FUNC_0 (VAR_7, VAR_4);
    }
    FUNC_3 (VAR_5);

    VAR_5 = FUNC_6 (VAR_1->http_tx_mgr);
    for (VAR_6 = VAR_5; VAR_6; VAR_6 = VAR_6->next) {
        VAR_7 = VAR_6->data;
        FUNC_0 (VAR_7, VAR_4);
    }
    FUNC_3 (VAR_5);

    if (VAR_4->len != 0)
        FUNC_8 (VAR_1->mq_mgr, "transfer",
                                              VAR_4->str);

    FUNC_4 (VAR_4, VAR_0);

    return VAR_0;
}
