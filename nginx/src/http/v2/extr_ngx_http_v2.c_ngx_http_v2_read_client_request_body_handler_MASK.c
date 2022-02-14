
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_9__ {TYPE_1__* stream; TYPE_4__* connection; } ;
typedef TYPE_3__ ngx_http_request_t ;
struct TYPE_10__ {int timedout; int log; scalar_t__ error; TYPE_2__* read; } ;
typedef TYPE_4__ ngx_connection_t ;
struct TYPE_8__ {scalar_t__ timedout; } ;
struct TYPE_7__ {int skip_data; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (TYPE_3__*,int ) ;
 int FUNC_1 (int ,int ,int ,char*) ;
 int FUNC_2 (int ,int ,int ,char*) ;

__attribute__((used)) static void
FUNC_3(ngx_http_request_t *VAR_5)
{
    ngx_connection_t *VAR_6;

    VAR_6 = VAR_5->connection;

    FUNC_1(VAR_3, VAR_6->log, 0,
                   "http2 read client request body handler");

    if (VAR_6->read->timedout) {
        FUNC_2(VAR_4, VAR_6->log, VAR_0, "client timed out");

        VAR_6->timedout = 1;
        VAR_5->stream->skip_data = 1;

        FUNC_0(VAR_5, VAR_2);
        return;
    }

    if (VAR_6->error) {
        FUNC_2(VAR_4, VAR_6->log, 0,
                      "client prematurely closed stream");

        VAR_5->stream->skip_data = 1;

        FUNC_0(VAR_5, VAR_1);
        return;
    }
}
