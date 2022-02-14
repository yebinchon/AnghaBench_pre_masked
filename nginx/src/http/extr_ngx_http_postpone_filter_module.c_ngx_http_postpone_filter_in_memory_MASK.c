
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_21__ TYPE_6__ ;
typedef struct TYPE_20__ TYPE_5__ ;
typedef struct TYPE_19__ TYPE_4__ ;
typedef struct TYPE_18__ TYPE_3__ ;
typedef struct TYPE_17__ TYPE_2__ ;
typedef struct TYPE_16__ TYPE_1__ ;
typedef struct TYPE_15__ TYPE_13__ ;
typedef struct TYPE_14__ TYPE_12__ ;


typedef int ngx_int_t ;
struct TYPE_16__ {int content_length_n; } ;
struct TYPE_17__ {TYPE_13__* out; int pool; TYPE_1__ headers_out; TYPE_4__* connection; } ;
typedef TYPE_2__ ngx_http_request_t ;
struct TYPE_18__ {size_t subrequest_output_buffer_size; } ;
typedef TYPE_3__ ngx_http_core_loc_conf_t ;
struct TYPE_19__ {int log; } ;
typedef TYPE_4__ ngx_connection_t ;
struct TYPE_20__ {TYPE_12__* buf; struct TYPE_20__* next; } ;
typedef TYPE_5__ ngx_chain_t ;
struct TYPE_21__ {int last_buf; scalar_t__ last; scalar_t__ end; } ;
typedef TYPE_6__ ngx_buf_t ;
struct TYPE_15__ {TYPE_6__* buf; int * next; } ;
struct TYPE_14__ {size_t last; size_t pos; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 TYPE_13__* FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (TYPE_12__*) ;
 scalar_t__ FUNC_2 (scalar_t__,size_t,size_t) ;
 TYPE_6__* FUNC_3 (int ,size_t) ;
 int VAR_4 ;
 TYPE_3__* FUNC_4 (TYPE_2__*,int ) ;
 int FUNC_5 (int ,int ,int ,char*) ;
 int FUNC_6 (int ,int ,int ,char*,size_t) ;
 int FUNC_7 (int ,int ,int ,char*,...) ;

__attribute__((used)) static ngx_int_t
FUNC_8(ngx_http_request_t *VAR_5, ngx_chain_t *VAR_6)
{
    size_t VAR_7;
    ngx_buf_t *VAR_8;
    ngx_connection_t *VAR_9;
    ngx_http_core_loc_conf_t *VAR_10;

    VAR_9 = VAR_5->connection;

    FUNC_5(VAR_1, VAR_9->log, 0,
                   "http postpone filter in memory");

    if (VAR_5->out == ((void*)0)) {
        VAR_10 = FUNC_4(VAR_5, VAR_4);

        if (VAR_5->headers_out.content_length_n != -1) {
            VAR_7 = VAR_5->headers_out.content_length_n;

            if (VAR_7 > VAR_10->subrequest_output_buffer_size) {
                FUNC_7(VAR_2, VAR_9->log, 0,
                              "too big subrequest response: %uz", VAR_7);
                return VAR_0;
            }

        } else {
            VAR_7 = VAR_10->subrequest_output_buffer_size;
        }

        VAR_8 = FUNC_3(VAR_5->pool, VAR_7);
        if (VAR_8 == ((void*)0)) {
            return VAR_0;
        }

        VAR_8->last_buf = 1;

        VAR_5->out = FUNC_0(VAR_5->pool);
        if (VAR_5->out == ((void*)0)) {
            return VAR_0;
        }

        VAR_5->out->buf = VAR_8;
        VAR_5->out->next = ((void*)0);
    }

    VAR_8 = VAR_5->out->buf;

    for ( ; VAR_6; VAR_6 = VAR_6->next) {

        if (FUNC_1(VAR_6->buf)) {
            continue;
        }

        VAR_7 = VAR_6->buf->last - VAR_6->buf->pos;

        if (VAR_7 > (size_t) (VAR_8->end - VAR_8->last)) {
            FUNC_7(VAR_2, VAR_9->log, 0,
                          "too big subrequest response");
            return VAR_0;
        }

        FUNC_6(VAR_1, VAR_9->log, 0,
                       "http postpone filter in memory %uz bytes", VAR_7);

        VAR_8->last = FUNC_2(VAR_8->last, VAR_6->buf->pos, VAR_7);
        VAR_6->buf->pos = VAR_6->buf->last;
    }

    return VAR_3;
}
