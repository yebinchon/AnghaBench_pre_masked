
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_23__ TYPE_9__ ;
typedef struct TYPE_22__ TYPE_7__ ;
typedef struct TYPE_21__ TYPE_6__ ;
typedef struct TYPE_20__ TYPE_3__ ;
typedef struct TYPE_19__ TYPE_2__ ;
typedef struct TYPE_18__ TYPE_1__ ;


struct TYPE_19__ {TYPE_1__* connection; } ;
typedef TYPE_2__ ngx_rtmp_session_t ;
struct TYPE_20__ {size_t type; int msid; int mlen; int timestamp; int csid; } ;
typedef TYPE_3__ ngx_rtmp_header_t ;
typedef int (* ngx_rtmp_handler_pt ) (TYPE_2__*,TYPE_3__*,TYPE_6__*) ;
struct TYPE_22__ {TYPE_9__* events; } ;
typedef TYPE_7__ ngx_rtmp_core_main_conf_t ;
typedef int const ngx_int_t ;
struct TYPE_21__ {struct TYPE_21__* next; } ;
typedef TYPE_6__ ngx_chain_t ;
struct TYPE_23__ {int (* elts ) (TYPE_2__*,TYPE_3__*,TYPE_6__*) ;size_t nelts; } ;
typedef TYPE_9__ ngx_array_t ;
struct TYPE_18__ {int log; } ;




 int VAR_0 ;
 int const VAR_1 ;
 size_t VAR_2 ;
 int FUNC_0 (int ,int ,int ,char*,size_t) ;
 int FUNC_1 (int ,int ,int ,char*,int ,int,int ,int ,int ,int ,int) ;
 int VAR_3 ;
 TYPE_7__* FUNC_2 (TYPE_2__*,int ) ;
 int FUNC_3 (size_t) ;
 int FUNC_4 (TYPE_2__*,TYPE_3__*,TYPE_6__*) ;

ngx_int_t
FUNC_5(ngx_rtmp_session_t *VAR_4,
        ngx_rtmp_header_t *VAR_5, ngx_chain_t *VAR_6)
{
    ngx_rtmp_core_main_conf_t *VAR_7;
    ngx_array_t *VAR_8;
    size_t VAR_9;
    ngx_rtmp_handler_pt *VAR_10;

    VAR_7 = FUNC_2(VAR_4, VAR_3);
    if (VAR_5->type > VAR_2) {
        FUNC_0(VAR_0, VAR_4->connection->log, 0,
                "unexpected RTMP message type: %d", (int)VAR_5->type);
        return VAR_1;
    }

    VAR_8 = &VAR_7->events[VAR_5->type];
    VAR_10 = &VAR_8->elts;

    FUNC_0(VAR_0, VAR_4->connection->log, 0,
            "nhandlers: %d", VAR_8->nelts);

    for(VAR_9 = 0; VAR_9 < VAR_8->nelts; ++VAR_9, ++VAR_10) {
        if (!VAR_10) {
            continue;
        }
        FUNC_0(VAR_0, VAR_4->connection->log, 0,
                "calling handler %d", VAR_9);

        switch ((*VAR_10)(VAR_4, VAR_5, VAR_6)) {
            case 128:
                FUNC_0(VAR_0, VAR_4->connection->log, 0,
                        "handler %d failed", VAR_9);
                return 128;
            case 129:
                return VAR_1;
        }
    }

    return VAR_1;
}
