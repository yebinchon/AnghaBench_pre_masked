
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_29__ TYPE_9__ ;
typedef struct TYPE_28__ TYPE_6__ ;
typedef struct TYPE_27__ TYPE_5__ ;
typedef struct TYPE_26__ TYPE_4__ ;
typedef struct TYPE_25__ TYPE_3__ ;
typedef struct TYPE_24__ TYPE_2__ ;
typedef struct TYPE_23__ TYPE_20__ ;
typedef struct TYPE_22__ TYPE_1__ ;
typedef struct TYPE_21__ TYPE_17__ ;


struct TYPE_22__ {TYPE_5__* connection; } ;
typedef TYPE_1__ ngx_stream_session_t ;
struct TYPE_24__ {int text; } ;
typedef TYPE_2__ ngx_stream_return_srv_conf_t ;
struct TYPE_25__ {TYPE_20__* out; } ;
typedef TYPE_3__ ngx_stream_return_ctx_t ;
struct TYPE_26__ {scalar_t__ len; scalar_t__ data; } ;
typedef TYPE_4__ ngx_str_t ;
struct TYPE_27__ {TYPE_9__* write; int pool; TYPE_17__* log; } ;
typedef TYPE_5__ ngx_connection_t ;
struct TYPE_28__ {int memory; scalar_t__ pos; scalar_t__ last; int last_buf; } ;
typedef TYPE_6__ ngx_buf_t ;
struct TYPE_29__ {int (* handler ) (TYPE_9__*) ;} ;
struct TYPE_23__ {int * next; TYPE_6__* buf; } ;
struct TYPE_21__ {char* action; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 TYPE_20__* FUNC_0 (int ) ;
 TYPE_6__* FUNC_1 (int ) ;
 int FUNC_2 (int ,TYPE_17__*,int ,char*,TYPE_4__*) ;
 TYPE_3__* FUNC_3 (int ,int) ;
 scalar_t__ FUNC_4 (TYPE_1__*,int *,TYPE_4__*) ;
 int FUNC_5 (TYPE_1__*,int ) ;
 TYPE_2__* FUNC_6 (TYPE_1__*,int ) ;
 int VAR_4 ;
 int FUNC_7 (TYPE_9__*) ;
 int FUNC_8 (TYPE_1__*,TYPE_3__*,int ) ;

__attribute__((used)) static void
FUNC_9(ngx_stream_session_t *VAR_5)
{
    ngx_str_t VAR_6;
    ngx_buf_t *VAR_7;
    ngx_connection_t *VAR_8;
    ngx_stream_return_ctx_t *VAR_9;
    ngx_stream_return_srv_conf_t *VAR_10;

    VAR_8 = VAR_5->connection;

    VAR_8->log->action = "returning text";

    VAR_10 = FUNC_6(VAR_5, VAR_4);

    if (FUNC_4(VAR_5, &VAR_10->text, &VAR_6) != VAR_1) {
        FUNC_5(VAR_5, VAR_2);
        return;
    }

    FUNC_2(VAR_0, VAR_8->log, 0,
                   "stream return text: \"%V\"", &VAR_6);

    if (VAR_6.len == 0) {
        FUNC_5(VAR_5, VAR_3);
        return;
    }

    VAR_9 = FUNC_3(VAR_8->pool, sizeof(ngx_stream_return_ctx_t));
    if (VAR_9 == ((void*)0)) {
        FUNC_5(VAR_5, VAR_2);
        return;
    }

    FUNC_8(VAR_5, VAR_9, VAR_4);

    VAR_7 = FUNC_1(VAR_8->pool);
    if (VAR_7 == ((void*)0)) {
        FUNC_5(VAR_5, VAR_2);
        return;
    }

    VAR_7->memory = 1;
    VAR_7->pos = VAR_6.data;
    VAR_7->last = VAR_6.data + VAR_6.len;
    VAR_7->last_buf = 1;

    VAR_9->out = FUNC_0(VAR_8->pool);
    if (VAR_9->out == ((void*)0)) {
        FUNC_5(VAR_5, VAR_2);
        return;
    }

    VAR_9->out->buf = VAR_7;
    VAR_9->out->next = ((void*)0);

    VAR_8->write->handler = FUNC_7;

    FUNC_7(VAR_8->write);
}
