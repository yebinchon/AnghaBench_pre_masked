
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_8__ {int ready; int available; int (* handler ) (TYPE_2__*) ;scalar_t__ posted; TYPE_3__* data; } ;
typedef TYPE_2__ ngx_event_t ;
struct TYPE_9__ {TYPE_1__* ssl; int log; } ;
typedef TYPE_3__ ngx_connection_t ;
struct TYPE_7__ {int (* next_read_handler ) (TYPE_2__*) ;} ;


 int VAR_0 ;
 int FUNC_0 (TYPE_2__*) ;
 int FUNC_1 (int ,int ,int ,char*) ;
 int FUNC_2 (TYPE_2__*) ;

__attribute__((used)) static void
FUNC_3(ngx_event_t *VAR_1)
{
    ngx_connection_t *VAR_2;

    VAR_2 = VAR_1->data;

    FUNC_1(VAR_0, VAR_2->log, 0, "SSL next read handler");

    VAR_1->handler = VAR_2->ssl->next_read_handler;
    VAR_2->ssl->next_read_handler = ((void*)0);

    if (!VAR_1->ready) {
        VAR_1->ready = 1;
        VAR_1->available = -1;
    }

    if (VAR_1->posted) {
        FUNC_0(VAR_1);
    }

    VAR_1->handler(VAR_1);
}
