
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int stream; } ;
typedef TYPE_1__ ngx_http_request_t ;
struct TYPE_6__ {scalar_t__ timedout; TYPE_3__* data; } ;
typedef TYPE_2__ ngx_event_t ;
struct TYPE_7__ {int timedout; int log; TYPE_1__* data; } ;
typedef TYPE_3__ ngx_connection_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int ,int ,int ,char*) ;
 int FUNC_2 (int ,int ,int ,char*) ;

__attribute__((used)) static void
FUNC_3(ngx_event_t *VAR_4)
{
    ngx_connection_t *VAR_5;
    ngx_http_request_t *VAR_6;

    VAR_5 = VAR_4->data;
    VAR_6 = VAR_5->data;

    FUNC_1(VAR_2, VAR_5->log, 0,
                   "http2 close stream handler");

    if (VAR_4->timedout) {
        FUNC_2(VAR_3, VAR_5->log, VAR_0, "client timed out");

        VAR_5->timedout = 1;

        FUNC_0(VAR_6->stream, VAR_1);
        return;
    }

    FUNC_0(VAR_6->stream, 0);
}
