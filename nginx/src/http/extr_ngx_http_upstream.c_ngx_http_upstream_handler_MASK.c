
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_15__ TYPE_4__ ;
typedef struct TYPE_14__ TYPE_3__ ;
typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;


struct TYPE_12__ {int (* read_event_handler ) (TYPE_2__*,TYPE_1__*) ;int (* write_event_handler ) (TYPE_2__*,TYPE_1__*) ;} ;
typedef TYPE_1__ ngx_http_upstream_t ;
struct TYPE_13__ {int args; int uri; TYPE_4__* connection; TYPE_1__* upstream; } ;
typedef TYPE_2__ ngx_http_request_t ;
struct TYPE_14__ {scalar_t__ write; scalar_t__ timedout; scalar_t__ delayed; TYPE_4__* data; } ;
typedef TYPE_3__ ngx_event_t ;
struct TYPE_15__ {int log; TYPE_2__* data; } ;
typedef TYPE_4__ ngx_connection_t ;


 int VAR_0 ;
 int FUNC_0 (TYPE_4__*) ;
 int FUNC_1 (int ,TYPE_2__*) ;
 int FUNC_2 (int ,int ,int ,char*,int *,int *) ;
 int FUNC_3 (TYPE_2__*,TYPE_1__*) ;
 int FUNC_4 (TYPE_2__*,TYPE_1__*) ;

__attribute__((used)) static void
FUNC_5(ngx_event_t *VAR_1)
{
    ngx_connection_t *VAR_2;
    ngx_http_request_t *VAR_3;
    ngx_http_upstream_t *VAR_4;

    VAR_2 = VAR_1->data;
    VAR_3 = VAR_2->data;

    VAR_4 = VAR_3->upstream;
    VAR_2 = VAR_3->connection;

    FUNC_1(VAR_2->log, VAR_3);

    FUNC_2(VAR_0, VAR_2->log, 0,
                   "http upstream request: \"%V?%V\"", &VAR_3->uri, &VAR_3->args);

    if (VAR_1->delayed && VAR_1->timedout) {
        VAR_1->delayed = 0;
        VAR_1->timedout = 0;
    }

    if (VAR_1->write) {
        VAR_4->write_event_handler(VAR_3, VAR_4);

    } else {
        VAR_4->read_event_handler(VAR_3, VAR_4);
    }

    FUNC_0(VAR_2);
}
