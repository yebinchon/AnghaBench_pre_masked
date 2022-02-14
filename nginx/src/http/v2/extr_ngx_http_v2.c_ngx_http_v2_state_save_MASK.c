
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int u_char ;
typedef int ngx_http_v2_handler_pt ;
struct TYPE_6__ {size_t buffer_used; int incomplete; int handler; int buffer; } ;
struct TYPE_8__ {TYPE_1__ state; TYPE_2__* connection; } ;
typedef TYPE_3__ ngx_http_v2_connection_t ;
struct TYPE_7__ {int log; } ;


 int VAR_0 ;
 size_t VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int * FUNC_0 (TYPE_3__*,int ) ;
 int FUNC_1 (int ,int ,int ,char*,int *,int *,int ) ;
 int FUNC_2 (int ,int ,int ,char*,size_t) ;
 int FUNC_3 (int ,int *,size_t) ;

__attribute__((used)) static u_char *
FUNC_4(ngx_http_v2_connection_t *VAR_4, u_char *VAR_5, u_char *VAR_6,
    ngx_http_v2_handler_pt VAR_7)
{
    size_t VAR_8;

    FUNC_1(VAR_3, VAR_4->connection->log, 0,
                   "http2 frame state save pos:%p end:%p handler:%p",
                   VAR_5, VAR_6, VAR_7);

    VAR_8 = VAR_6 - VAR_5;

    if (VAR_8 > VAR_1) {
        FUNC_2(VAR_2, VAR_4->connection->log, 0,
                      "state buffer overflow: %uz bytes required", VAR_8);

        return FUNC_0(VAR_4, VAR_0);
    }

    FUNC_3(VAR_4->state.buffer, VAR_5, VAR_1);

    VAR_4->state.buffer_used = VAR_8;
    VAR_4->state.handler = VAR_7;
    VAR_4->state.incomplete = 1;

    return VAR_6;
}
