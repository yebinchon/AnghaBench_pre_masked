
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef int ngx_http_upstream_t ;
struct TYPE_9__ {int * upstream; TYPE_3__* connection; } ;
typedef TYPE_1__ ngx_http_request_t ;
struct TYPE_10__ {scalar_t__ timedout; } ;
typedef TYPE_2__ ngx_event_t ;
struct TYPE_11__ {int timedout; TYPE_4__* log; TYPE_2__* write; } ;
typedef TYPE_3__ ngx_connection_t ;
struct TYPE_12__ {char* action; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (TYPE_3__*,int ,char*) ;
 int FUNC_1 (TYPE_1__*,int *,int ) ;
 int FUNC_2 (TYPE_1__*,int) ;
 int FUNC_3 (int ,TYPE_4__*,int ,char*) ;

__attribute__((used)) static void
FUNC_4(ngx_http_request_t *VAR_3)
{
    ngx_event_t *VAR_4;
    ngx_connection_t *VAR_5;
    ngx_http_upstream_t *VAR_6;

    VAR_5 = VAR_3->connection;
    VAR_6 = VAR_3->upstream;
    VAR_4 = VAR_5->write;

    FUNC_3(VAR_2, VAR_5->log, 0,
                   "http upstream process non buffered downstream");

    VAR_5->log->action = "sending to client";

    if (VAR_4->timedout) {
        VAR_5->timedout = 1;
        FUNC_0(VAR_5, VAR_0, "client timed out");
        FUNC_1(VAR_3, VAR_6, VAR_1);
        return;
    }

    FUNC_2(VAR_3, 1);
}
