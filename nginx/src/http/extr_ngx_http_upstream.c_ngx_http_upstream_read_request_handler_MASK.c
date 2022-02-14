
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int ngx_http_upstream_t ;
struct TYPE_8__ {TYPE_3__* connection; int * upstream; } ;
typedef TYPE_2__ ngx_http_request_t ;
struct TYPE_9__ {int timedout; TYPE_1__* read; int log; } ;
typedef TYPE_3__ ngx_connection_t ;
struct TYPE_7__ {scalar_t__ timedout; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (TYPE_2__*,int *,int ) ;
 int FUNC_1 (TYPE_2__*,int *,int ) ;
 int FUNC_2 (int ,int ,int ,char*) ;

__attribute__((used)) static void
FUNC_3(ngx_http_request_t *VAR_2)
{
    ngx_connection_t *VAR_3;
    ngx_http_upstream_t *VAR_4;

    VAR_3 = VAR_2->connection;
    VAR_4 = VAR_2->upstream;

    FUNC_2(VAR_1, VAR_2->connection->log, 0,
                   "http upstream read request handler");

    if (VAR_3->read->timedout) {
        VAR_3->timedout = 1;
        FUNC_0(VAR_2, VAR_4, VAR_0);
        return;
    }

    FUNC_1(VAR_2, VAR_4, 0);
}
