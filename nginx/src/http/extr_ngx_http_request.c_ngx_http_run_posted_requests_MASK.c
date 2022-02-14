
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_9__ {int (* write_event_handler ) (TYPE_2__*) ;int args; int uri; TYPE_1__* main; } ;
typedef TYPE_2__ ngx_http_request_t ;
struct TYPE_10__ {TYPE_2__* request; struct TYPE_10__* next; } ;
typedef TYPE_3__ ngx_http_posted_request_t ;
struct TYPE_11__ {int log; TYPE_2__* data; scalar_t__ destroyed; } ;
typedef TYPE_4__ ngx_connection_t ;
struct TYPE_8__ {TYPE_3__* posted_requests; } ;


 int VAR_0 ;
 int FUNC_0 (int ,TYPE_2__*) ;
 int FUNC_1 (int ,int ,int ,char*,int *,int *) ;
 int FUNC_2 (TYPE_2__*) ;

void
FUNC_3(ngx_connection_t *VAR_1)
{
    ngx_http_request_t *VAR_2;
    ngx_http_posted_request_t *VAR_3;

    for ( ;; ) {

        if (VAR_1->destroyed) {
            return;
        }

        VAR_2 = VAR_1->data;
        VAR_3 = VAR_2->main->posted_requests;

        if (VAR_3 == ((void*)0)) {
            return;
        }

        VAR_2->main->posted_requests = VAR_3->next;

        VAR_2 = VAR_3->request;

        FUNC_0(VAR_1->log, VAR_2);

        FUNC_1(VAR_0, VAR_1->log, 0,
                       "http posted request: \"%V?%V\"", &VAR_2->uri, &VAR_2->args);

        VAR_2->write_event_handler(VAR_2);
    }
}
